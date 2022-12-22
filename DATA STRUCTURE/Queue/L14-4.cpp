//PQUE for Acending Order
#include<bits/stdc++.h>
using namespace std;
int kp=0;
struct pque
{
    int ar[100];
    int f;
    int r;
};
void create(struct pque *s){
    s->f=0;
    s->r=0;    
}
void push(struct pque *s){
    if(s->r==0)
    s->r=1;
    int r,k;
    cin>>r;
    k=s->r;
    while(k){
        if(s->ar[k-1]>r&&k>=1){
            s->ar[k]=s->ar[k-1];
            k--;
        }
        else
        break;
    }
    s->ar[k]=r;
    s->r++;
}
void pop(struct pque *s){
    cout<<s->ar[kp++]<<" ";
}
int main()
{
    struct pque s;
    create(&s);
    push(&s);
    push(&s);
    push(&s);
    push(&s);
    pop(&s);  
    pop(&s);
    pop(&s);
    pop(&s);  
}

