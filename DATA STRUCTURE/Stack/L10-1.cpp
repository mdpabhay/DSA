#include<bits/stdc++.h>
using namespace std;
struct stac
{
    char a[10];
    int f;
    int r;
};
void create(struct stac *s){
    s->f=0;
    s->r=0;
} 
void push(struct stac *s){
    int item;
    cin>>item;
    s->a[++(s->f)]=item;
}
int main(){
    struct stac s;
    create(&s);
    push(&s);

}