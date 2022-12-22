#include <bits/stdc++.h>
using namespace std;
int max;
struct student
{
    char n[20];
    int f;
    int r;
}s;
void create(struct student *s)
{
    s->f = 0;
    s->r = 0;
}
void insertf(struct student *s1,int item)
{
    s1->f++;
    s1->n[s1->f]=item;
}
void insertr(int s[], int f, int r, int item, int max)
{
    s[r++] = item;
}
void deletef(int s[], int f, int r, int max)
{
    s[f++] = '\0';
}
void deleter(int s[], int f, int r, int max)
{
    s[r--] = '\0';
}
int main()
{   
    create(&s);
    
        int item;
        cin>>item;
        insertf(&s,item);
    
    return 0;
}
