#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cout<<"Enter no of Elements in Array :";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter Elements of Array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    int no;
    cout<<"Enter Any Index for removing Value :";
    cin>>no;
    a[no]=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        cout<<b[i];
        break;
    }
    return 0;
}