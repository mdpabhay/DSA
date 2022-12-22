#include<bits/stdc++.h>
using namespace std;
int l;
struct stac
{
    char str[100];
    int top;
};
void create(struct stac *s){
    s->top=0;
}
void push(struct stac *s){
    cout<<"Enter String :";
    while(1){
        cin>>s->str[s->top];
        s->top++;
        if(s->str[s->top-1]=='1'){
        s->top--;
        break;   
        }     
    }
}
void rev(struct stac *s){
    char ts[100];
    int i=s->top;
    while(s->top>=0)
        ts[s->top]=s->str[s->top--];  
    while(s->top<=i)
        s->str[s->top]=ts[s->top++];
}
int main(){
    struct stac s;
    create(&s);
    push(&s);
    rev(&s);
    return 0;
}
