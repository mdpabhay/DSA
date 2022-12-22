//Decimal to Binary
#include<iostream>
int a=0;
using namespace std;
struct stac
{
    int stack[20];
    int top;
};
void create(struct stac *s){
    s->top=0;
}
int stack[100];
void push(struct stac *s,int r){
    s->top++;
    s->stack[s->top]=r;
}
void pop(struct stac *s){
    cout<<s->stack[s->top];
    s->top--;
    if(s->top==0){
    a=8;
    }
}
int main(){
    struct stac s;
    create(&s);
    int m;
    cout<<"Enter Number :";
    cin>>m;
    while(m!=0){
        int r;
        r=m%2;
        m=m/2;
        push(&s,r);
        
    }    
    while(1){
        pop(&s);
        if(a==8)
        return 0;
    } 
}