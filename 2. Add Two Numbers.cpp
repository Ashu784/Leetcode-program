/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL;
        ListNode *temp;
        int c = 0;
        while(l1 != NULL || l2 != NULL) {
            int n1, n2;
            if(l1 == NULL)
                n1=0;
            else
                n1=l1->val;
            if(l2 == NULL)
                n2=0;
            else
                n2=l2->val;  

            int sum = n1 + n2 + c;
            if(head == NULL) {
                head = new ListNode(sum%10);
                temp = head;
                c = sum/10;
            }
            else{
                temp->next = new ListNode(sum%10);
                temp = temp->next;
                c = sum/10;
            }
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;     
        }
        if(c!=0){
            temp->next = new ListNode(c);
        }

    return head;    
    }
};
