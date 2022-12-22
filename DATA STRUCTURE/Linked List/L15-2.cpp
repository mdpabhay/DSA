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

//insert data at tail into linklist
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

//main function
int main(){
    node * head=NULL;
    intail(head,1);
    intail(head,2);
    intail(head,3);
    return 0;
}