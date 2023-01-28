#include <bits/stdc++.h>
using namespace std;
class graph
{
    public:
    map<int,list<int>>m;
    void add(int x,int y)
    {
        m[x].push_back(y);
        m[y].push_back(y);
    }
    void dfshealper(int src,map<int,bool> &visited)
    {
        cout<<src<<" ";
        visited[src]=true;
        for(auto t:m[src])
        {
            if(!visited[t])
            {
                dfshealper(t,visited);
            }
        }

    }
    void dfs(int src)
    {
        map<int,bool>visited;
        for(auto p:m)
        {
            int x=p.first;
            visited[x]=false;
        }
        dfshealper(src,visited);
    }
};

int main() {
    graph g;
    g.add(0,1);
    g.add(0,3);
    g.add(1,2);
    g.add(2,3);
    g.add(3,4);
    g.add(4,5); 
    cout<<"\n";
    cout<<"dfs is";g.dfs(0);   
}