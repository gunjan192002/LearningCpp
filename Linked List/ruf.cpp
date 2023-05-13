 ListNode* slow=root;
    ListNode*   fast=root;
    while(!(fast==nullptr))
    {
       fast=fast->next;
       if(!(fast==nullptr))
       {
           fast=fast->next;
           slow=slow->next;
       }
   
    }
    return slow;