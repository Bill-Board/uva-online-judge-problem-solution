

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;
#define MAXN 100000
int s;
int pr[MAXN];

int findset(int r)
{
    if(pr[r]==r) return r;

    return findset(pr[r]);
}

void makeset(int n)
{
    for(int i=0; i<n; i++)
        pr[i] = i;
}

struct Edge
{
    int u, v;
    double w;
    //bool operator < (const Edge &p) const
    //{
      //  return w < p.w;
    //}
};

vector<Edge> e;

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        Edge p;
        cin>>p.u>>p.v>>p.w;
        e.push_back(p);
    }
    for(auto i:e)cout<<i.w<<" ";cout<<endl;
    sort(e.begin(),e.end());
    return 0;
}

