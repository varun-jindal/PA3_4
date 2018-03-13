#include<stdio.h>
#define A (int)(pow(2, 19)/sizeof(struct node))
#define B (int)(pow(2, 23)/sizeof(struct node))

struct node{
    int val;
    struct node* next;
};

void make_list(int n, struct node** head){
    
    int i;
    *head = (struct node*)malloc(sizeof(struct node));
    *head->val = rand();
    for(i = 1; i < n; i++){
        //*head->val = rand();
        *head->next = (struct node*)malloc(sizeof(struct node));
        //struct node* block = (struct node*)malloc(sizeof(struct node));
        *head = *head->next;
        *head->val = rand();
    }
    *head->next = NULL;
    
    return;
}

void print_list(struct node* head){

    while(head->next != NULL){
        printf("%d ", head->val);
        head = head->next
    }
    printf("%d ", head->val);

    return;
}
 
int main(){
    
    struct node* head = NULL;
    if(A!=0){
        make_list(A, &head);
        print_list(head);
    }
    //print_list(head);
    return 0;
}
