#include <iostream>
using namespace std;

const int MAX = 100;
int st[MAX];
int topIdx = -1;
bool isEmpty();
bool isFull();
void push(int x);
void pop();
void display();
void peek();

int main()
{
    int val;

    // push 3 kali
    cout << "=== PUSH 3 ELEMEN ===\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> val;
        push(val);
    }

    cout << "\n=== ISI STACK SAAT INI ===\n";
    display();

    // pop 3 kali, tampilkan hasil * 3
    cout << "\n=== POP 3 ELEMEN (hasil x3) ===\n";
    for (int i = 0; i < 3; i++)
    {
        if (!isEmpty())
        {
            int poppedValue = st[topIdx--]; // ambil nilai dan kurangi topIdx
            cout << "Pop " << poppedValue << " -> hasil dikali 3 = " << poppedValue * 3 << endl;
        }
        else
        {
            cout << "Stack kosong\n";
        }
    }

    cout << "\n=== ISI STACK AKHIR ===\n";
    display();

    return 0;
}

bool isEmpty()
{
    return topIdx == -1;
}

bool isFull()
{
    return topIdx == MAX - 1;
}

void push(int x)
{
    if (isFull())
    {
        cout << "Stack penuh\n";
        return;
    }
    st[++topIdx] = x;
    cout << "Push " << x << " berhasil\n";
}

void pop()
{
    if (isEmpty())
    {
        cout << "Stack kosong\n";
        return;
    }
    cout << "Pop " << st[topIdx--] << " berhasil\n";
}

void peek()
{
    if (isEmpty())
    {
        cout << "Stack kosong\n";
        return;
    }
    cout << "Elemen teratas: " << st[topIdx] << '\n';
}

void display()
{
    if (isEmpty())
    {
        cout << "Stack kosong\n";
        return;
    }
    cout << "Isi stack (atas ke bawah): ";
    for (int i = topIdx; i >= 0; --i)
    {
        cout << st[i] << " ";
    }
    cout << '\n';
}
