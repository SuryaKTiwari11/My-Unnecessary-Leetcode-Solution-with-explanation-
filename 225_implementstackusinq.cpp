#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class MyStack
{
public:
    queue<int> q;
    MyStack() {}

    void push(int x) { q.push(x); }

    int pop()
    {

        for (int i = 0; i < q.size() - 1; i++)
        {
            // we can only pop the front element of the queue
            // i mistake i made is that , q is based on array so
            // its q.size()-1;
            q.push(q.front());
            q.pop();
        }
        int x = q.front();
        q.pop();
        return x;
    }

    int top() { return q.back(); }

    bool empty()
    {
        if (q.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
int main()
{
    return 0;
}