#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    map<int,list<int>>m;
    void add(int x,int y)
    {
        m[x].push_back(y);
        m[y].push_back(x);
    }
    void sssp(int root)
    {
       queue<int>q;
       map<int,int>dist;
       q.push(root);
       for(auto d:m)
       {
        int node=d.first;
        dist[node]=INT_MAX;

       }
       dist[root]=0;
       while(!q.empty())
       {
            int k=q.front();
            for(auto a:m[k])
            {
                if(a==INT_MAX)
                {
                    q.push(a);
                    dist[a]=dist[k]+1;
                }
            }
       }
       
       for(auto t:m)
       {
            int g=t.first;
            int d=dist[g];
            cout<<"distance from"<<g<<"  from source is"<<d;
       }
        
    }
   
};
int main()
{
    graph g;
    g.add(0,1);
    g.add(0,3);
    g.add(1,2);
    g.add(2,3);
    g.add(3,4);
    g.add(4,5); 
    cout<<"\n";
    g.sssp(0); 
}
