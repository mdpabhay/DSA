#include<bits/stdc++.h>
using namespace std ;

//defining linklist
class node{
    public:
    int info;
    node * next;
    node(int val){
        info=val;
        next=NULL;
    }
};

//insert data into list
void insert(node * &head,int val){
    node * n=new node(val);
    if(head==NULL)
    {
        head=n;
        return ;
    }
    node * temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;   
}

//Count no of nodes
int countnodes(node * head){
    node * temp=head;
    int c=1;
    while(temp->next!=NULL){
    c++;
    temp=temp->next;
    }
    return c;
}
int main(){
    node * head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    cout<<countnodes(head);
    // inhead(head,7);
    // display(head);
    // cout<<endl<<search(head,7);
    return 0;
}