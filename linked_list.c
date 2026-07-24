#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;  
    struct Node* next;  
};


void insertAtBeginning(struct Node** head_ref, int new_data){  

  
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
                                                                                      
   
   if(new_node == NULL){
    printf("Memory allocation is Failed\n");
    return;
   }
    
   new_node->data = new_data; 

   new_node->next = *head_ref;
   
   
   *head_ref = new_node; 

   printf("%d insertion \n", new_data);
} 

  
   void printList(struct Node* node){
    while(node != NULL){
        printf("%d ->", node->data);
       node = node->next;
    }
    printf("NULL\n");
   }

   int main(){
    
    struct Node* head = NULL;

    
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    
    printf("Linked list :\t");
    printList(head);

    return 0;
   }