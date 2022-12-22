#include<iostream>
using namespace std;
int count=0;
struct node
{
    int data;
    struct node *L;
    struct node *R;
};
struct node * newnode(int data){
    struct node *n1=(struct node *)malloc(sizeof(struct node));
    n1->data=data;
    n1->L=NULL;
    n1->R=NULL;
}
int size(struct node * root){
    if(root==NULL)
    return 0;
    else
    return size(root->L)+size(root->R)+1;
}
int main(){
    struct node * root=(struct node *)malloc(sizeof(struct node));
    root=newnode(1);
    root->L=newnode(2);
    root->R=newnode(3);
    root->L->L=newnode(4);
    root->L->R=newnode(5);
    cout<<endl<<"SIZE OF TREE : ";
    cout<<size(root);
    return 0;
}