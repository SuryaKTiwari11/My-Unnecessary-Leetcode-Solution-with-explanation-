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

class Solution //recursive
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr or head->next == nullptr)
        {
            return head;
        }
        ListNode *temp = reverseList(head->next);
        // focus on the last 2 nodes
        head->next->next = head;
        head->next = nullptr;
        return temp;
    }
};
class Solution //iterative
{
public:
    ListNode *reverseList(ListNode *head)
    {
        // to reverse we require 3 pointers
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;
        while (curr != nullptr)
        {

            next = curr->next; // before moving forwards we must save the next value of the current;
            curr->next = prev; // here we reverse the link
            prev = curr;       // we set curr val as prev (to move the link list ahead)
            curr = next;       // we set the next value as current (to move the link list ahead)
        }
        return prev;
    }
};
int main()
{
    return 0;
}