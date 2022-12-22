#include<bits/stdc++.h>
using namespace std;
struct dque
{
    int dq[100];
    int f1;
    int r1;
};
void create(struct dque *s){
    s->f1=0;
    s->r1=0;
}
void push1(struct dque *s){
    cin>>s->dq[++s->r1];
}
void push2(struct dque *s){
    cin>>s->dq[++s->r1];
}
void pop1(struct dque *s){
    cout<<s->dq[++s->f1]<<endl;
}
void pop2(struct dque *s){
    cout<<s->dq[++s->f1]<<endl;
}
int main(){
    struct dque s;
    create(&s);
    push1(&s);
    push2(&s);
    pop1(&s);
    pop2(&s);
    push2(&s);
    pop2(&s);
    return 0;
}