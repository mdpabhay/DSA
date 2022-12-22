#include<bits/stdc++.h>
using namespace std;
int DAT[100]={0};
int prime(int n){
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        count++;
        if(count>0)
        return n;
        return 0;
    }

}
int hwclp(int ar[],int br[],int n){
    
}
int main(){
    int n,i;
    cout<<"Enter Dimension :";
    cin>>n;
    int ar[n],br[n],no=0;
    for(int i=n;i<n*n;i++){
        no=prime(i);
        if(no>0)
        break;
    }
    int i;
    cout<<"Enter Elements of Array :";
    for(int i=0;i<n;i++){
        cin>>ar[i];
        br[i]=ar[i]%no;
    }
    hwclp(ar,br,n);
    for(int i=0;i<no;i++)
    cout<<ar[i];
    return 0;
}