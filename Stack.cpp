// Stack Implementaion Using Arrays

#include <stdio.h>
#include <iostream>
using namespace std;

int top = -1;
int n = 5;
int arr[5];

// function to check if stack is full or not
bool isfull()
{
    if (top == n - 1)
        return true;
    else
        return false;
}

// function to check if stack is empty or not
bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

// function to push an element to top of the stack
void push(int val)
{
    if (isfull())
        cout << "Stack Overflow\n";
    else
    {
        top++;
        arr[top] = val;
    }
}

// function to remove an element from top of the stack
void pop()
{
    if (isEmpty())
        cout << "Stack Underflow\n";
    else
    {
        arr[top] = 0;
        top--;
    }
}

// function to view an element at any position in bound
int peek(int pos)
{
    if (pos < n)
        cout << arr[pos] << endl;
    else
        cout << "Enter only bound positions\n";
}

void display()
{
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << endl;
}

int main()
{

    for (int i = 0; i < n; i++)
        arr[i] = 0;

    // menu driven operations
    int ch;

    do
    {
        cout << "\n1.Push()\n2.Pop()\n3.Peek()\n4.Display()\n0 for exit" << endl;
        cin >> ch;
        switch (ch)
        {

        case 0:
            break;

        case 1:
            int value;
            cout << "Enter Value to be pushed: ";
            cin >> value;
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            peek(pos);
            break;

        case 4:
            display();
            break;

        default:
            cout << "Invalid Choice";
            break;
        }

    } while (ch != 0);

    return 0;
}

// stack implemented successfully.
// 11-4-22