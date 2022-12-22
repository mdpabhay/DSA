#include<bits/stdc++.h>
using namespace std;
int DAT[100]={0};
int prime(int no){
    int count=0;
    for(int i=2;i<=sqrt(no);i++){
        if(no%i==0)
        count++;
    }
    if(count==0)
    return no;
    return 0;
}
void hwoc(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        DAT[b[i]]=a[i];
    }
}
int main(){
    int n,i;
    cout<<"Enter Dimension :";
    cin>>n;
    int a[n],b[n],no=0;
    for(int i=n;i<n*n;i++){
        no=prime(i);
        if(no>0)
        break;
    }
    cout<<"NO"<<no<<endl;
    cout<<"Enter Elements of Array :";
    for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i]%no;
    }
    hwoc(a,b,n);
    for(int i=0;i<no;i++)
    cout<<DAT[i]<<" ";
    return 0;
}