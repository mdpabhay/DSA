#include<iostream>
using namespace std;
int a=0,b=1,c;
int fib(int n){
    if(n==1)
    return 0;
    c=a+b;
    cout<<c;
    a=b;
    b=c;
    return fib(n-1);

}
int main(){
    int n;
    cout<<"Enter Terms :";
    cin>>n;
    fib(n);
    return 0;
    }