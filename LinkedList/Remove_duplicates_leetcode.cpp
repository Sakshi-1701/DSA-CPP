//https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      
      if(head==NULL || head->next==NULL) return head;

      ListNode *ptr=head->next;
      ListNode *prv=head;
     
      while(ptr){
          if(ptr->val==prv->val){
              prv->next=ptr->next;
              
          }
          else{
              prv=ptr;
              
          }
          ptr=ptr->next;
          
      }

     return head;

    }
};
