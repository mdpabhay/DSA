#include<bits/stdc++.h>
using namespace std;
struct queu
{
    int que[100];
    int f;
    int r;
};
void create(struct queu *s){
    s->f=0;
    s->r=0;
}
void push(struct queu *s){
    s->r++;
    cin>>s->que[s->r];
}
void pop(struct queu *s){
    s->f++;
    cout<<s->que[s->f];
}
int isempty(struct queu *s){
    if(s->f==s->r)
    return -1;
    else
    return 1;
}
int main(){
    struct queu s;
    create(&s);
    int n;
    cout<<"Enter no of Elements :";
    cin>>n;
    for(int i=0;i<n;i++)
    push(&s);
    for(int i=0;i<n;i++)
    pop(&s);
    return 0;
}