#include <stdio.h>
#include <stdbool.h>
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 

bool hasCycle(struct ListNode *head) {
    struct ListNode *visited[10000];
    int size =0;

    while(head!=NULL){
        for(int i=0; i<size ; i++){
            if(visited[i] == head){
                return true;
            }
        }

        visited[size++] = head;
        head = head -> next;
    }
    return false;
}