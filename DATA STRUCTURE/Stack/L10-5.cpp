#include<bits/stdc++.h>
using namespace std;
int a;
struct stac
{
    int st[100];
    int top;
};
void create(struct stac *s){
    s->top=0;
}
void push(struct stac *s,int r){
    s->top++;
    s->st[s->top]=r;
}
void pop(struct stac *s){
    cout<<s->st[s->top--];
    if(s->top==0)
    a=5;
}
int main(){
    struct stac s;
    create(&s);
    int n,b;
    cout<<"Enter Number :";
    cin>>n;
    cout<<"Enter Base :";
    cin>>b;
    while(n>0){
        int r=n%b;
        push(&s,r);
        n/=b;
    }
    while(1){
        pop(&s);
        if(a==5)
        return 0;
    }
}