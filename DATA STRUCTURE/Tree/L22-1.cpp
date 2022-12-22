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
void inorder(struct node * n){
    if(n==NULL)
    return ;
    inorder(n->L);
    cout<<n->data<<" ";
    inorder(n->R);

}
void postorder(struct node * n){
    if(n==NULL)
    return ;
    postorder(n->L);   
    postorder(n->R);
    cout<<n->data<<" ";

}
void preorder(struct node * n){
    if(n==NULL)
    return ;
    cout<<n->data<<" ";
    count++;
    preorder(n->L);
    preorder(n->R);

}
int main(){
    struct node * root=(struct node *)malloc(sizeof(struct node));
    root=newnode(1);
    root->L=newnode(2);
    root->R=newnode(3);
    root->L->L=newnode(4);
    root->L->R=newnode(5);
    cout<<"INORDER   : ";
    inorder(root);
    cout<<endl<<"POSTORDER : ";
    postorder(root);
    cout<<endl<<"PREORDER  : ";
    preorder(root);
    return 0;
}