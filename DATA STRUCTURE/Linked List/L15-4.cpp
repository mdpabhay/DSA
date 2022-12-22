#include<bits/stdc++.h>
using namespace std;

//defining link list
class node {
    public:
    int info;
    node * next;
    node(int val){
        info=val;
        next=NULL;
    }
};

//insert element in list
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

//concatenate two list
void concatenate(node * h1,node * h2){
    node * temp=h1;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=h2;
}

//display data of linklist
void display(node * head){
    node * temp=head;
    while(temp->next!=NULL){
        cout<<temp->info<<" -> ";
        temp=temp->next;
    } 
    cout<<temp->info;
}

int main(){
    node * h1=NULL;
    node * h2=NULL;
    insert(h1,1);
    insert(h1,2);
    insert(h1,3);
    insert(h2,4);
    insert(h2,5);
    concatenate(h1,h2);
    display(h1);
    return 0;
}