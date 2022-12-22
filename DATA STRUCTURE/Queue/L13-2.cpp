#include<bits/stdc++.h>
using namespace std;
int a=0,b=0;
struct queu
{
    int que[10];
    int f;
    int r;
};
void create(struct queu *s){
    s->f=0;
    s->r=0;
    }
int push(struct queu *s,int max){
    if(s->f==s->r+1||s->f==0&&s->r==max){
        a=-1;
        cout<<"Overflow"<<endl;
        return 0;
    }
    if(s->r==max)
    s->r=1;
    else{
        s->r++;
    }
    cout<<"Enter Element :";
    cin>>s->que[s->r];
    return 0;
}
void pop(struct queu *s,int max){
    if(s->f==s->r||s->f==0&&s->r==max){
        b=-1;
        cout<<"Under Flow";
    }
    s->f++;
    cout<<"Element Poped :"<<s->que[s->f];
}
int isempty(struct queu *s,int max){
    if(s->f==s->r||s->f==0&&s->r==max)
    return -1;
    else
    return 1;
}
int main(){
    struct queu s;
    create(&s);    
    /*while(1){
    push(&s,max);
    if(a==-1)
    break;
    }
    while(1){
    pop(&s);
    if(b==-1)
    break;
    }*/
    int max;
    cout<<"Enter no of Elements :";
    cin>>max;
    while(1){    
    char op;
    cout<<endl<<"For  Push:+  Pop:-    :";
    cin>>op;
    if(op=='+')
    push(&s,max);
    else    
    pop(&s,max);
    }
    return 0;
}