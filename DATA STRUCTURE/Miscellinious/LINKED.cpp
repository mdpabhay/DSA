#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node * next;
}*head,*second,*third,*fourth;
struct node *delet(int key)
{
    struct node *curr=head;
    struct node *prev=NULL;
    if(head==NULL)
    return NULL;
    while(curr->info!=key)
    {
        if(curr->info==NULL)
        return NULL;
        else{
            prev=curr;
            curr=curr->next;
        }
    }
    if(curr==head)
    head=head->next;
    else{
        prev->next=curr->next;
    }
    cout<<delet(key)->info;
    while(curr->next==NULL){
    int key;
    cout<<"Enter key :";
    cin>>key;
    }
}
void Sort(struct node * head){
    struct node * curr;
    struct node * next;
    for(int i=0;curr!='\0';){
        curr=head;
        next=head->next;
        for(int j=0;j<4-i;j++){
            if(curr->info>next->info){
                int temp;
                temp=curr->info;
                curr->info=next->info;
                next->info=temp;
            }
            curr=next;
            next=next->next;
        }

    }
}

int main(){
    struct node *curr=head;
head=(struct node *) malloc(sizeof (node));
head->info=6;
second=(struct node *) malloc(sizeof (node));
second->info=6;
head->next=second;
third=(struct node *) malloc(sizeof (node));
third->info=20;
second->next=third;
third->next='\0';
int key;
cout<<"Enter key :";
cin>>key;
while(curr->next=='\0'){
cout<<delet(key)->info;
}
cout<<head->info<<endl;
cout<<second->next<<endl;
cout<<third->next<<endl;
}

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node * next;
}*head,*second,*third,*fourth;
struct node *delet(int key)
{
    struct node *curr=head;
    struct node *prev=NULL;
    

}
int main(){
head=(struct node *) malloc(sizeof (node));
head->info=6;
second=(struct node *) malloc(sizeof (node));
second->info=19;
head->next=second;
third=(struct node *) malloc(sizeof (node));
third->info=20;
second->next=third;
third->next='\0';
int key;
cout<<"Enter key :";
cin>>key;
delet(key);
}