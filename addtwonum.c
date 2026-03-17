#include <stdio.h>
struct Node{
    int data;
    struct Node* next;
};

int main(){
    //first number
    struct Node* head1;
    head1= (struct Node*)malloc(sizeof( struct Node ));
    struct Node* tail1;
    tail1 =(struct Node*)malloc(sizeof (struct Node));
    struct Node* newNode1;
    newNode1=(struct Node*)malloc(sizeof(struct Node));

    //second number
    struct Node* head2;
    head2= (struct Node*)malloc(sizeof( struct Node ));
    struct Node* tail2;
    tail2 =(struct Node*)malloc(sizeof (struct Node));
    struct Node* newNode2;
    newNode2=(struct Node*)malloc(sizeof(struct Node));

    //resultant
    struct Node* head3;
    head3= (struct Node*)malloc(sizeof( struct Node ));
    struct Node* tail3;
    tail3 =(struct Node*)malloc(sizeof (struct Node));
    struct Node* newNode3;
    newNode3=(struct Node*)malloc(sizeof(struct Node));



    int value1;
    int value2;
    int result;

    //creating the first number 
    while(1){
        printf("enter the value1 (-1 to stop):");
        scanf("%d",&value1);

        printf("enter the value2 (-1 to stop):");
        scanf("%d",&value2);

        if (value1 == -1){
            break;
        }
        newNode1 -> data = value1;
        newNode2 -> data =value2; 

        newNode1 -> next = NULL;
        newNode2 -> next  = NULL;

        if (head1 ==NULL){
            //first Node i.e last digit
            head1 = newNode1;
            tail1 = newNode1;

        }
        else{
            //attach new node at end 
            tail1 ->next = newNode1;
            tail1 = newNode1;
        }

         if (head2 ==NULL){
            //first Node i.e last digit
            head2 = newNode2;
            tail2 = newNode2;

        }
        else{
            //attach new node at end 
            tail2 ->next = newNode2;
            tail2 = newNode2;
        }

        
    }

    //sum of the two numbers

    
    



}