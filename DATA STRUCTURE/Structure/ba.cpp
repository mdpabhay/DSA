#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter No of Student :";
    cin>>n;
    struct Std
    {
        int r;
        char name[10];
        int age;
        int marks;
    }
    s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Rollno Name  Age  Marks"<<endl;
        cin>>s[i].r;
        cin>>s[i].name;
        cin>>s[i].age;
        cin>>s[i].marks;
    }
    cout<<"Data of Student ";
    for(int i=0;i<n;i++){
        cout<<s[i].r<<endl;
        cout<<s[i].name;
        cout<<endl;
        cout<<s[i].age<<endl;
        cout<<s[i].marks<<endl;
    }
    return 0;
}