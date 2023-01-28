#include <bits/stdc++.h>
using namespace std;
template<class t>
class graph
{
    public:
    map<t ,list<t>>m;
    void add(t x,t y)
    {
        m[x].push_back(y);
        m[y].push_back(x);
    }
    void dispaly()
    {
        
        for(auto n:m)
        {
            cout<<"vertex of "<<n.first<<" ->";
            list<t>l=n.second;
            for(auto x:l)
            {
                cout<<" "<<x<<" ";
            }
            cout<<"\n";
            
        }
    }
    void bfs(t root)
    {
        queue<t>q;
        map<t ,bool>v;
        q.push(root);
        v[root]=true;
        while(!q.empty())
        {
            t nood=q.front();
            q.pop();
            cout<<nood<<" ";
            for(auto n:m[nood])
            {
                if(!v[n])
                {
                    q.push(n);
                    v[n]=true;
                }
            }
        }

    }
};
int main() {
    graph<int> g;
    g.add(0,1);
    g.add(0,3);
    g.add(1,2);
    g.add(2,3);
    g.add(3,4);
    g.add(4,5); 
    g.dispaly();
    cout<<"\n";
    g.bfs(0);   
}
