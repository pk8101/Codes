#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    int v;
    list<int>*l;
    graph(int v)
    {
        this->v=v;
        l=new list<int>[v];
    }
    void add(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void display()
    {
        for(int i=0;i<v;i++)
        {
            cout<<"vertex of "<<i<<" ->";
            for(int j:l[i])
            {
                cout<<j<<" ";
            }
            cout<<"\n";
        }
    }

};
int main()
{
    graph p(4);
    p.add(0,1);
    p.add(0,2);
    p.add(1,2);
    p.add(2,3);
    p.display();


}