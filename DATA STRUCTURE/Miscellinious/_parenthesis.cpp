#include<bits/stdc++.h>
using namespace std;
struct stac 
{
    string str1;
    string str2;
    int t1;
    int t2;
};
void create(struct stac *s){
    s->t1=0;
    s->t2=0;
}
void push(struct stac *s){
    s->t1++;
    cin>>s->str1[s->t1];
}
void pop(struct stac *s){
    s->t1--;
}
int bal(struct stac *s){
    char str;
    cin>>str;
    if(str=='('||str=='{'||str=='['){
        s->t1++;
        s->str1[s->t1]=str;
    }
    else{
        s->t2++;
        s->str2[s->t2];
    }
    if(s->str1[s->t1]=='('&&s->str2[s->t2]==')'||s->str1[s->t1]=='{'&&s->str2[s->t2]=='}'||s->str1[s->t1]=='['&&s->str2[s->t2]==']'){
        s->str1[s->t1--]='\0';
        s->str2[s->t2--]='\0';
    }
    if(s->t1==0&&s->t2==0){
    cout<<"Balanced ";
    return 0;
    }
    else {
    cout<<"Not Balanced ";
    return 0;
    }
    return bal(s);
}

int main(){
struct stac s;
bal(&s);
}