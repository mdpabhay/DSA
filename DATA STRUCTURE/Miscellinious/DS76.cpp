#include<bits/stdc++.h>
using namespace std;
string str1;
struct postfix
{
    string a;
};
void push(struct postfix *s){
    cout<<"Enter String :";
    cin>>s->a;
    str1=s->a;
}
int len(struct postfix *s){
    int n=0,i=0;
    while(s->a[i]){
    n++;
    i++;
    }
    return n;
}
void pop(struct postfix *s){
    cout<<s->a;
}
void Evaluate(string str,int n){
    for(int i=0;i<n;i++){
        if(int(str[i])>=42){
            
        }

    }
}
int main(){
    struct postfix s;
    push(&s);
    int n=len(&s);
    Evaluate(str1,n);
    pop(&s);
    return 0;
}