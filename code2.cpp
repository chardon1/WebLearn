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
    ListNode* swapPairs(ListNode* head)
    {
        ListNode *tNode = head;
        
        while(tNode!=NULL && tNode->next!=NULL)
        {
            int swap  = tNode->val;
            tNode->val = tNode->next->val;
            tNode->next->val = swap;
            
            tNode = tNode->next->next;
        }
        
        return head;
    }
};