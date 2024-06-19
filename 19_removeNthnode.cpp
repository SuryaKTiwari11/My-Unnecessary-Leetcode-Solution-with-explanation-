#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//  Definition for singly-linked list.
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // optimal approach
        ListNode *fast = head;
        ListNode *slow = head;
        // we have set 2 pointers fast and slow

        // first we move the fast pointer N nodes ahead (this will help us
        // establish the diff we need)
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        // if fast becomes NULL that means its at the head
        //  so we have to
        if (fast == nullptr)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // if that is not the case
        // we move both the pointer until fast reaches the end
        // we will increase them both by 1
        // and this will give us the node which the b4 the deleting node
        while (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
    }
};
class Solution // not the optimal solution
{
public:
    int length(ListNode *head)
    {
        int counter = 0;
        while (head != nullptr)
        {
            head = head->next;
            counter++;
        }
        return counter;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int LENGTH = length(head);
        if (head == nullptr)
        {
            return head;
        }
        if (LENGTH == n)
        {
            ListNode *tempo = head;
            head = head->next;
            delete tempo;
            return head;
        }
        int to_remove = LENGTH - n - 1;
        ListNode *ptr = head;
        while (to_remove > 0)
        {
            ptr = ptr->next;
            to_remove--;
        }
        ListNode *temp = ptr->next;
        ptr->next = ptr->next->next;
        delete (temp);
        return head;
    }
};
int main()

{
    return 0;
}