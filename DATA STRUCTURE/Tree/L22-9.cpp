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
bool iscbt(struct node * root,int index,int nc){
    if(root==NULL)
    return true;
    if(index>nc)
    return false;
    return iscbt(root->L,2*index,nc)&&iscbt(root->R,2*index+1,nc);
}
 int main(){
    struct node * root=(struct node *)malloc(sizeof(struct node));
    root=newnode(1);
    root->L=newnode(2);
    root->R=newnode(3);
    root->L->L=newnode(4);
    root->L->R=newnode(5);
    cout<<iscbt(root,1,5);
    return 0;
 }