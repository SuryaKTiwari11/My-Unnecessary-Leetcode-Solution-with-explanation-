
// Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1; //i set a pointer at l1
        ListNode* ptr2 = l2; //i set a pointer at l2
        ListNode* dummy_node = new ListNode(-1); //create a dummy node to initialize and continue the ques
        ListNode* ptr3 = dummy_node; //ptr pointing to dummy_node;
        int carry = 0; 

        // in the case where the no of nodes is same;
        while (ptr1 != nullptr and ptr2 != nullptr) {
            // 1 node is 9 and another node is  7 on add the both of them
            //  i get 16 and the carry becomes 1 and value becomes 6
            int value = ptr1->val + ptr2->val + carry;
            carry = value / 10;
            // carry ke andaar vo vali value jayegi jo us value ka by 10 hoga
            ptr3->next = new ListNode(value % 10); // i will create a new node and insert 
            //us value ka %10 (thing at 0ths position) and the 10ths position, as discussed above goes in carry
            ptr3 = ptr3->next;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while (ptr1 != nullptr) {
            //in this value meri pointer 2 wali Link list khatam so i will the whole step with the LL2
            int value = ptr1->val + carry;
            carry = value / 10;
            ptr3->next = new ListNode(value % 10);
            ptr3 = ptr3->next;
            ptr1 = ptr1->next;
        }

        while (ptr2 != nullptr) {
             //in this value meri pointer 1 wali Link list khatam so i will the whole step with the LL1
            int value = ptr2->val + carry;
            carry = value / 10;
            ptr3->next = new ListNode(value % 10);
            ptr3 = ptr3->next;
            ptr2 = ptr2->next;
        }
        //if carry still has a value that means 1 needs to added at the end;
        if(carry){
             ptr3->next = new ListNode(1);
        }
        return dummy_node->next;
    }
};