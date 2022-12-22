#include<bits/stdc++.h>
using namespace std;
int top=-1;
int stack[10];
int push(int s[],int a,int t){
    s[t]=a;
    top++;
}
int pop(int s[]){
    cout<<s[top--];
}
int main(){
    int n;
    
    cout<<"Enter no of Elements :";
    cin>>n;
    cout<<"Enter Elements :";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        push(stack,a,top);
        cout<<stack[top];
    }
    for(int i=0;i<n;i++)
        pop(stack);
    return 0;
}