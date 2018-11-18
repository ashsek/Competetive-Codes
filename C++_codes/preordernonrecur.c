#include<stdio.h>
#include<stdlib.h>
int top;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *stack[100];
void push(struct node *dat){
    top += 1;
    stack[top] = dat;
}

struct node *pop(){
    struct node  *x;
    x = stack[top];
    top -= 1;
    return x;
}

void preorder(struct node *root){
    push(NULL);
    int done = 0;
    struct node *p = root;
    while(p!=NULL){
        printf("%c", p->data + 65);
        if(p->right != NULL) push(p->right);
        if(p->left != NULL) p=p->left;
        else p = pop();
    }
}

struct node *new_node(int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> left = NULL;
    ptr -> right = NULL;
    return ptr;
}

int main(){
    top = -1;
    struct node *root = new_node(0);
    root->left = new_node(1);
    root->right = new_node(2);
    root->left->left = new_node(3);
    root->left->right = new_node(4);
    root ->right ->left = new_node(5);
    root->right->right = new_node(6);
    preorder(root);
}
