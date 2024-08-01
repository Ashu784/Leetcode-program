/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
    unordered_set<ListNode*>ob;
    while(firstHead != NULL){
        ob.insert(firstHead);
        firstHead = firstHead->next;
    }
    while(secondHead != NULL){
        if(ob.find(secondHead) != ob.end())
            return secondHead;
        else
            secondHead = secondHead->next;
    }
    return NULL;
        
    }
};
