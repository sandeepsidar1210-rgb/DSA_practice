#include <stdio.h>


 struct ListNode {
     int val;
     struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    int arr[1001];
    int n=0;

    while(list1){
        arr[n] = list1->val;
        n++;
        list1 = list1->next;
    }

    while(list2){
        arr[n] = list2 -> val;
        n++;
        list2 = list2 ->next;
    }
    

    //now sorting the arr
    for (int i=0; i<n ; i++){
        for (int j =i+1; j <n ; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }

  // create new linked list
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    for(int i = 0; i < n; i++){
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = arr[i];
        newNode->next = NULL;   
        
         if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
             }
    }
    return head;

}
