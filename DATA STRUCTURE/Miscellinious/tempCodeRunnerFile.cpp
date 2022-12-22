#include<bits/stdc++.h>
using namespace std;
int a=0,b=0;
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
void pop(struct queu *s){
    if(s->f==s->r){
        b=-1;
        cout<<"Under Flow";
        exit(1);
    }
    if(s->f==0)
    s->f=1;
    cout<<"Element Poped :"<<s->que[s->f++];
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
    