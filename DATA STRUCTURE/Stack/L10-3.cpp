#include<iostream>
using namespace std;
int top=-1;
int stack[100];
int push(int s[],int r,int t){
    s[t]=r;
    top++;
}
int pop(int s[]){
    cout<<s[top];
    top--;
}
int main(){    
    int m;
    cout<<"Enter Number :";
    cin>>m;
    while(m!=0){
        int r;
        r=m%8;
        push(stack,r,top);
        m=m/8;
    }    
    while(top>=-1)
        pop(stack);
    return 0;    
}