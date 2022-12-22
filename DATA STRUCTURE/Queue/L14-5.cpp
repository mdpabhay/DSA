#include<bits/stdc++.h>
using namespace std;
struct Que
{
    int ar[100];
    int f;
    int r;
};
void create(struct Que *s){
    s->f=0;
    s->r=0;    
}
void pop(struct Que *s){
    for(int i=1;i<=4;i++)
    cout<<s->ar[i]<<" ";
}
void push(struct Que *s){
    int val,k;
    cin>>val;
    if(s->r==0)
    s->r=1;
    k=s->r;
    while(k){
        if(s->ar[k-1]<val&&k>=1){
            s->ar[k]=s->ar[k-1];
            k--;
        }
        else 
        break;
    }
    s->ar[k]=val;
    s->r++;

}
int main(){
    struct Que s;
    create(&s);
    push(&s);
    push(&s);
    push(&s);
    push(&s);
    pop(&s);
    
}