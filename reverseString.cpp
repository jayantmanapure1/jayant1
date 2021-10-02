#include <iostream>
#include <string>
#include <stack>

using namespace std;
#define MAX 100

class Stack
{
public:
    int top = -1;
    char arr[MAX];

    Stack()
    {
        top = -1;
    }

    void push(char val)
    {
        if (top >= (MAX - 1))
        {
            cout << "STACK OVERFLOW";
        }
        else
        {
            ++top;
            arr[top] = val;
        }
    }

    char pop()
    {

        if (top == -1)
        {
            cout << "Stack UnderFlow";
            return 0;
        }
        else
        {
            char x = arr[top];
            top--;
            return x;
        }
    }

    char Top()
    {
        return (top == -1) ? 0 : arr[top];
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};


int main()
{
    string s1;
    Stack st;

    cout << "Enter String to reverse=>" << endl;
    cin >> s1;
    int l = s1.length();

    for (int i = 0; i < l; i++)
    {
        st.push(s1[i]);
    }

    while (st.isEmpty() == false)
    {
        cout << st.pop();
    }

    return 0;
}
