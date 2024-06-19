// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution //recursion
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        // base case
        if (head == nullptr or head->next == nullptr)
        {
            return head;
        }

        if (head->val == head->next->val)
        {
            ListNode *temp = head->next;
            head->next = head->next->next;
            delete (temp);
            deleteDuplicates(head);
        }
        else
        {
            deleteDuplicates(head->next);
        }
        return head;
    }
};
class Solution //iterative
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *ptr1 = head;
        while (ptr1 != nullptr and ptr1->next != nullptr)
        {
            if (ptr1->val == ptr1->next->val)
            {
                ptr1->next = ptr1->next->next;
            }
            else
                ptr1 = ptr1->next;
        }
        return head;
    }
};