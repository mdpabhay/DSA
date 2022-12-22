#include<iostream>
using namespace std;
void ain(int n,int a[]){
    cout<<"Enter Array Elements :";
    for(int i=0;i<n;i++)
    cin>>a[i];
}
void aout(int n,int a[]){
    for (int  i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
}

int main(){
     int n,ar[100];
     cin>>n;
    ain(n,ar);
    aout(n,ar);
    return 0;
}