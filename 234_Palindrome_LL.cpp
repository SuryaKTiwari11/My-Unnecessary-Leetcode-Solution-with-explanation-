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
    ListNode *reverseLL(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next; // before reversing the current node we must save
                               // the next node
            curr->next = prev; // here we are reversing the link //pointing
                               // the current's next to prev

            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {

        // edge cases
        if (head == nullptr or head->next == nullptr)
        {
            return true;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next != nullptr and fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // since we want the one b4 the middle element so that we can reverse it
        ListNode *newhead = reverseLL(slow->next);

        // now we check if palindrome or not
        // 1 2 3  3 2 1
        // 1 2 3  1 2 3
        // ^      ^
        ListNode *ptr1 = head;
        ListNode *ptr2 = newhead;

        while (ptr2 != nullptr)
        {
            if (ptr1->val != ptr2->val)
            {
                reverseLL(ptr2);
                return false;
            }

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        reverseLL(ptr2); 
        return true;
    }
};
class Solution // not the best sol brother
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *temp = head;
        stack<int> st;
        while (temp != nullptr)
        {
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp != nullptr)
        {
            if (temp->val != st.top())
                return false;
            temp = temp->next;
            st.pop();
        }
        return true;
    }
};
int main()
{
    return 0;
}