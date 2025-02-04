// Reserse a stack using queue

#include <bits/stdc++.h>
using namespace std;

void rvrse(stack<int> &st)
{
    queue<int> q;
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    int num, element;
    cout << "Enter how many elements do you want to push in the stack: ";
    cin >> num;
    stack<int> st;
    for (int i = 0; i < num; i++)
    {
        cin >> element;
        st.push(element);
    }
    cout << "Original stack: ";
    printStack(st);
    rvrse(st);
    cout << "Reversed stack: ";
    printStack(st);
}