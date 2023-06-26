 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<long long, long long>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef int v99;
typedef unsigned long long ull;
using namespace std;
v99 n,m,e[6],cases=1;
struct akib
{
    v99 dif,a,b,c;
}p[5];
bool comp(akib x,akib y)
{
    if(x.dif==y.dif)return x.a<y.a;
    else return x.dif<y.dif;
}

void solve()
{
    /// code is here->

    while(cin>>n>>m and(n or m))
    {
        v99 huda[5],visi[m+1],last[6];
        for(v99 i=0;i<n;i++)cin>>huda[i],last[i]=-1;
        for(v99 i=0;i<m;i++)
        {
                cin>>p[i].a;--p[i].a;
                cin>>p[i].b;
                cin>>p[i].c;
                p[i].dif=p[i].c-p[i].b+1;
        }
        sort(p,p+m,comp);
        v99 cr_h=0;
        for(v99 i=0;i<m;i++)
        {
            v99 kot=0;
            for(v99 j=0;j<n;j++)if(huda[j])kot++;
            //if(kot<2)break;
            huda[p[i].a]-=p[i].dif;
            if(huda[p[i].a])cr_h+=p[i].dif;
        }

        for(v99 i=0;i<m;i++)cout<<p[i].dif<<whp<<p[i].a<<whp<<p[i].b<<whp<<p[i].c<<ses;
        cout<<"Case "<<cases++<<": "<<cr_h<<ses<<ses;
    }
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...

