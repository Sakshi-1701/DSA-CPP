//https://leetcode.com/problems/remove-nth-node-from-end-of-list/?envType=study-plan&id=algorithm-i

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* dummy=new ListNode();
      dummy->next=head;
      ListNode*fast=dummy;
      ListNode*slow=dummy;

      for(int i=1;i<=n;i++)
      fast=fast->next; //keep moving f pointer till it reaches n
      //as soon as it reaches n, start incrementing the s ptr
      //and increment s and f with same steps until f reaches null
      //the node pointed by s is the one to ne be deleted

      while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
      }
      slow->next=slow->next->next;
      return dummy->next ;
        
    }
};
