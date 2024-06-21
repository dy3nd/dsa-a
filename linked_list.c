#include <stdio.h>
// Import sdlib for memory allocation function.
#include <stdlib.h>

//LINKED LIST
struct Node
{
    int data; //defines an integer member called data
    struct Node*next; //defines a pointer (next) to another struct (node)
};

// void display(struct Node*n);
int length(struct Node*n);
void displaynode(struct Node*n, int index);

int main() {
    // //SETTING NODES POINTER
    // struct Node* head = NULL;
    // struct Node* second = NULL;
    // struct Node* third = NULL;
    
    // //MEMORY ALLOCATION
    // head = (struct Node*)malloc(sizeof(struct Node));
    // second = (struct Node*)malloc(sizeof(struct Node));
    // third = (struct Node*)malloc(sizeof(struct Node));

    // //ASSIGNING VALUES TO NODES
    // head -> data = 10;
    // second -> data = 20;
    // third -> data = 30;

    // //LINKING NODES
    // head -> next = second;
    // second -> next = third;
    // third -> next = NULL;

    // //CALLING DISPLAY
    // display(head);


    struct Node *first = NULL; 
    struct Node *second = NULL;
    struct Node *third = NULL; 
    struct Node *forth = NULL; 
    struct Node *fifth = NULL;

    //alloc memory (cast type Node pointer)malloc(sizeof(a node))
    first= (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node)); 
    fifth = (struct Node*)malloc(sizeof(struct Node));

    //data
    first -> data = 10;
    second-> data = 20;
    third -> data = 30;
    forth -> data = 40;
    fifth -> data = 50;

    //link
    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;

    //CHALLENGE 1: WRITE A FUNCTION THAT RETURNS THE NUMBER OF NODES IN A LINKED LIST.
    // printf(" %d \n", length(first));

    //CHALLENGE 2: WRITE A FUNCTION TO DISPLAYS THE NODE'S DATA AT DEFINED INDEX.
    // displaynode(first, 4);

    //CHALLENGE 3: WRITE A FUNCTION TO DELETE A NODE AT DEFINED INDEX.
    deletenode(first, 4);

}

//



// void displaynode(struct Node*n, int index) {
//     for(int i = 0; i <= index; i++) {
//         if (i == index) {
//             printf(" %d \n", n->data);
//         }
//         n = n->next;
//     }
// }

// int length(struct Node*n) {
//     int len = 0;
//     while (n != NULL) {
//         len++;
//         n = n->next;
//     }
//     return len;
// }


// void display(struct Node*n) //receives a node pointer (Node* n)
// {
//     while (n != NULL) { //loops until not a valid node (null)
//         printf(" %d", n->data); //prints node's data (n.data)
//         printf("\n");
//         n = n->next; //set n to next node using current n's pointer to next (n.next).
//     }
// }