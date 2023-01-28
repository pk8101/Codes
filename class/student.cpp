#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    int age;
    char a[20];
};
int main()
{
    student s1;
    s1.age=20;
    s1.a[20]='p';
    cout<<s1.a[20];
    student* s2=new student();
    s2->age=40;
    cout<<s2->age;
}