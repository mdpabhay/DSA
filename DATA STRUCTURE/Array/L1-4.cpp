#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Value :";
    cin>>n;
    int ar[n];
    cout<<"Enter Elements :";
    for (int  i = 0; i < n; i++)
    cin>>ar[i];
    int no;
    cout<<"Enter no to be Deleted :";
    cin>>no;
    for (int  i = 0; i < n; i++){
        if(no==ar[i]){
            for(int j=i;j<n;j++)
                ar[j]=ar[j+1];
            break;
        }    
    }
    for(int i=0;i<n-1;i++)
    cout<<" "<<ar[i];
    
    return 0;
}