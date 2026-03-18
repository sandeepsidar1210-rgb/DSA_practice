#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
 };

 struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* temp = head;
    struct ListNode* prev =NULL;
    
    while(temp!=NULL){
        struct ListNode* next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;

    
}

int main() {
    // Build list: 1 -> 2 -> 3 -> 4 -> NULL
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2   = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3   = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4   = (struct ListNode*)malloc(sizeof(struct ListNode));

    head->val = 1; head->next = n2;
    n2->val   = 2; n2->next   = n3;
    n3->val   = 3; n3->next   = n4;
    n4->val   = 4; n4->next   = NULL;

    // Print original
    printf("Original: ");
    struct ListNode* curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("NULL\n");

    // Reverse
    head = reverseList(head);

    // Print reversed
    printf("Reversed: ");
    curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("NULL\n");

    return 0;
}
