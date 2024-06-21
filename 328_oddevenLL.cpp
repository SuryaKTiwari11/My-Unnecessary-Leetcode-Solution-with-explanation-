#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr or head->next == nullptr)
        {
            return head;
        }
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *connectOddEven = even;

        // since even will always be faster than odd 
        //we just have to make sure that even doesn't reach the end 
        // draw on a paper so u can see in the case of odd n even nodes 
        while (even != nullptr and even->next != nullptr)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            // now that odd is connect from 1 to 3 //we just do odd++
            odd = odd->next;
            // similarly
            even = even->next;
        }

        odd->next = connectOddEven;

        return head;
    }
};
int main()
{
    return 0;
}