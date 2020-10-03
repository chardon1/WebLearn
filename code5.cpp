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
    bool hasCycle(ListNode *head) 
    {
         if(head==NULL)return false;
         else if(head->next==NULL)return false;
         ListNode *slowPtr = head;
         ListNode *fastPtr = head->next;
         bool ans=false;
        
         while((fastPtr->next)!=NULL && (fastPtr->next)->next!=NULL)
         {
             if(slowPtr==fastPtr)
             {
                 ans = true;
                 break;
             }
             else 
             {
                 slowPtr = slowPtr->next;
                 fastPtr = (fastPtr->next)->next;
             }
         }
        
        return ans;
    }
};