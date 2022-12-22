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
bool isftre(struct node * root){
    if((root->L==NULL&&root->R!=NULL)||(root->R==NULL&&root->L!=NULL))
    return false;
    if(root==NULL)
    return true;
    return isftre(root->L)&&isftre(root->R);
}
int main(){
    struct node * root=(struct node *)malloc(sizeof(struct node));
    root=newnode(1);
    root->L=newnode(2);
    root->R=newnode(3);
    root->L->L=newnode(4);
    root->L->R=newnode(5);
    cout<<isftre(root);
    return 0;
}