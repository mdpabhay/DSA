#include<bits/stdc++.h>
using namespace std;
int n,x;
int i=0,r=n-1;
int bs(int ar[],int i,int x){
    int mid=(i+r)/2;
    if(i==r&ar[i]!=x){
        cout<<"Not Foumd ";
        return 0;
    }
    if(mid==x){
        cout<<"Found ";
        return 0;
    }
    else if(mid<x)
    return bs(ar,mid,x);
    else{
        r=mid;
    return bs(ar,i,x);
    }
    cout<<"No Not Searched";
    return 0;
}
int main(){
    cout<<"Enter Dimension of Array :";
    cin>>n;
    int a[n];
    cout<<"Enter Elements of Array :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter no to be Searched :";
    cin>>x;
    bs(a,i,x);
    return 0;
}