#include <stdio.h>
/**
 * Definition for singly-linked list.*/


struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
        for (struct ListNode* temp1 = head ; temp1->next != NULL && temp1!= NULL; temp1 = temp1 ->next ){
            
                if(temp1->val == prev->val){
                    prev->next = temp1 ->next;
                    next = temp1->next;
                    free(temp1);
                    temp1 = next;
                
                
                


              
            }
            prev = temp1;
        }
    


    
}


  struct ListNode {
      int val;
      struct ListNode *next;
  };

  int main(){
    struct Node* head= (struct Node*)malloc(sizeof(struct Node*));


  }