#include <bits/stdc++.h>
#include <iostream>
class MinStack
{
public:
    stack<int> st;
    stack<int> st_min;
    MinStack() {}

    void push(int val)
    {
        int temp = val;
        if (!st.empty())
        {
            val = min(val, st_min.top());
            st_min.push(val);
        }
        else
        {
            st_min.push(val);
        }
        st.push(temp);
    }

    void pop()
    {
        st.pop();
        st_min.pop();
    }

    int top() { return st.top(); }

    int getMin() { return st_min.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
using namespace std;
int main()
{
    return 0;
}