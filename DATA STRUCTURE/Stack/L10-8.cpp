#include<bits/stdc++.h>
using namespace std;
int a=0,b=0;
struct pal
{
    int n;
};
void pop(struct pal *s){
    cout<<"Enter Number :";
    cin>>s->n;
    b=s->n;
}
void palin(struct pal *s){   
    while(s->n>0){ 
    a=a*10+s->n%10;
    s->n=s->n/10;
    }
}
int main(){
    struct pal s;
    pop(&s);    
    palin(&s);
    cout<<a<<" "<<b<<endl;
    if(a==b)
    cout<<"Palindrome ";
    else 
    cout<<"Not Palindrome ";
    return 0;    
}