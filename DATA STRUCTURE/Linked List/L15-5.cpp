#include<bits/stdc++.h>
using namespace std;

//defining class for link list
class node{
    public:
    int info;
    node * next;
    node(int val){
        info=val;
        next=NULL;
    }
};

//insert data into linklist
void intail(node * &head,int val){
    node * n= new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node * temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=n;
}

//display data of linklist
void display(node * head){
    node * temp=head;
    while(temp->next!=NULL){
        cout<<temp->info<<" -> ";
        temp=temp->next;
    } 
    cout<<temp->info;
    return;
}

//search data in linklist
bool Lsearch(node * head,int key){
    node * temp=head;
    while(temp->next!=NULL){
        if(temp->info==key)
        return true;
        temp=temp->next;
    }
    return false;
}

//main function
int main(){
    node * head=NULL;
    intail(head,1);
    intail(head,2);
    intail(head,3);
    display(head);
    cout<<endl<<Lsearch(head,3);
    return 0;
}