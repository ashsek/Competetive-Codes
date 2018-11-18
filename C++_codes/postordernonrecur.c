#include<stdio.h>
#include<stdlib.h>
int top,top2;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *stack[100];
struct node *stack2[100];

void push(struct node *dat){
    top += 1;
    stack[top] = dat;
}

void push2(struct node *dat){
    top2 += 1;
    stack2[top2] = dat;
}

struct node *pop(){
    struct node  *x;
    x = stack[top];
    top -= 1;
    return x;
}

struct node *pop2(){
    struct node *x;
    x = stack2[top2];
    top2 -= 1;
    return x;
}

void postorder(struct node *root){
    push(NULL);
    push2(NULL);
    struct node *p = root;
    while(p!=NULL){
        push2(p);
        if(p->left != NULL) push(p->left);
        if(p->right != NULL) push(p->right);
        p = pop();
    }
    p = pop2();
    while(p!=NULL){
        printf("%c", p->data + 65);
        p = pop2();
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
    top = -1; top2 = -1;
    struct node *root = new_node(0);
    root->left = new_node(1);
    root->right = new_node(2);
    root->left->left = new_node(3);
    root->left->right = new_node(4);
    root ->right ->left = new_node(5);
    root->right->right = new_node(6);
    postorder(root);
}
