#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[10];
    int i;

public:
    Stack()
    {
        i = 0;
    }

    void push(int val)
    {
        if (i >= 10)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[i] = val;
        i++;
    }

    int pop()
    {
        if (i == 0)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        i--;
        return arr[i];
    }

    int peek()
    {
        if (i == 0)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return arr[i - 1];
    }

    void menu()
    {
        cout << "Enter 1 for Push" << endl;
        cout << "Enter 2 for Pop" << endl;
        cout << "Enter 3 for Peek" << endl;
        cout << "Enter 0 for Exit" << endl;
    }

    int input()
    {
        int x;
        cin >> x;
        return x;
    }
};

int main()
{
    Stack s;

repeat:
    s.menu();
    cout << "\nOption : ";
    int opt = s.input();

    switch (opt)
    {
    case 1:
    {
        cout << "Enter value: ";
        int val = s.input();
        s.push(val);
        break;
    }

    case 2:
    {
        cout << "Value : " << s.pop() << endl;
        break;
    }

    case 3:
    {
        cout << "Value : " << s.peek() << endl;
        break;
    }

    case 0:
        break;

    default:
        cout << "Select Valid Option" << endl;
    }

    if (opt != 0)
        goto repeat;

    return 0;
}