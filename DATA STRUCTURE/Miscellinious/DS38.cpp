#include<iostream>
using namespace std;
int BS(int n,int m,int a[]){
    

}
int main(){
    int n,a[10],m;
    cout<<"Enter Dimension :";
    cin>>n;
    cout<<"Enter Array Elements :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter no to be searched :";
    cin>>m;
    m=BS(n,m,a);
    return 0;
    }