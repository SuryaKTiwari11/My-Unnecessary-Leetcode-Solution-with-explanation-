#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == nullptr or head->next == nullptr)
            return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* faslow = head;

        while (fast and fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) {
                while (faslow != slow) {

                    slow = slow->next;
                    faslow = faslow->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};
int main ()
{
 return 0;
}