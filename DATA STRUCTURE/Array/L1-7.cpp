#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Dimension of Array :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter Elements of Array :";
    for(int i=0;i<n/2;i++){
        int temp=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}