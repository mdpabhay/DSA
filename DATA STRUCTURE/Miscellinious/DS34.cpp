#include<iostream>
using namespace std;
int fact(int a,int n){
    if(n==1)
    return a;
    a=n*a;
    return fact(a,n-1);
    
}
int main(){
    int n;
    cout<<"Enter Value :";
    cin>>n;
    int a=fact(1,n);
    cout<<a;
    return 0;
}