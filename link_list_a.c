//usr/bin/clang "$0" && exec ./a.out "$@"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define A (int)(pow(2, 19)/sizeof(struct node))
#define B (int)(pow(2, 23)/sizeof(struct node))

struct node{
    int val;
    struct node* next;
};

void make_list(int n, struct node** head){
    //printf("In make_node fn\n");
    int i;
    (*head) = (struct node*)malloc(sizeof(struct node));
    (*head)->val = rand();
    struct node* next_node = (*head);
    for(i = 1; i < n; i++){
        next_node->next = (struct node*)malloc(sizeof(struct node));
        next_node = next_node->next;
        next_node->val = rand();
    }
    next_node->next = NULL;
	//printf("Done make_list\n");
    
    return;
}

void print_list(struct node* head){
    //printf("printing\n");
    while(head->next != NULL){ 
        printf("%d \n", head->val);
        head = head->next;
    }
    printf("%d ", head->val);
    printf("done printing\n");
    return;
}
 
int main(){
    
    struct node* head = NULL;
    struct node** origin = &head;
    if(A!=0){
        make_list(A, &head);
        print_list(*origin);
    }
    //print_list(head);
    return 0;
}
