#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    unordered_map<string ,list<pair<string,int>>>l;
    void add(string x,string y,bool bd,int w)
    {
        l[x].push_back(make_pair(y,w));
        if(bd)
        {
            l[y].push_back(make_pair(x,w));
        }

    }
    void display()
    {
        for(auto k:l)
        {
            list<pair<string ,int>>l1 =k.second;
            cout<<k.first<<"->";
            for(auto l1:l1)
            {
                cout<<l1.first<<" "<<l1.second<<" ";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    graph g;
    g.add("a","b",true,20);
    g.add("a","d",false,50);
    g.add("a","c",true,10);
    g.add("b","d",true,40);
    g.add("c","d",true,30);
    g.display();
}