#include<stdio.h>
#include<stdlib.h>
#define A (int)(pow(2, 19)/sizeof(struct node))
#define B (int)(pow(2, 23)/sizeof(struct node))

struct node{
    int val;
    struct node* right;
    struct node* left;
};

void make_tree(int n, struct node** head){
    
    if(n != 0){
        *head->val = rand();
        *head->left = (struct node*)malloc(sizeof(struct node));
        *head->right = (struct node*)malloc(sizeof(struct node));
        make_tree((n-1)/2, &(*head->left));
        make_tree((n-1)/2, &(*head->right)); 
    }
    else{
        *head->left = NULL;
        *head->right = NULL;
    }
    return;
}

void print_tree(struct node* head){

    printf("%d ", head->val);
    if(head->left != NULL)print_tree(head->left);
    if(head->right != NULL)print_tree(head->right);
    return;
}
int main(){

    struct node* head = NULL;
    struct node** origin = &head;
    make_tree(A-1, &head);
    print_tree(*origin);
    return 0;
}
