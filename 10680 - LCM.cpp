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
#pragma comment(linker, "/STACK:268435456");
using namespace std;
using namespace __gnu_pbds;

typedef long long v99;
typedef unsigned long long ull;
typedef long double dll;
typedef complex<double> point;
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<v99, v99>
#define pf printf
#define sf scanf
#define ff first
#define yes cout<<"YES"<<ses;
#define no cout<<"NO"<<ses;
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(v99 i=a; i<b; i++)
#define rep1(i,a,b) for(v99 i=a; i<=b; i++)
#define rep0in(i,a,b) for(v99 i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(v99 i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
#define vc    vector<char>
#define vll    vector<v99>
#define vs    vector<string>
#define dqll   deque<v99>
#define dqc   deque<char>
#define lll   list<v99>
#define lic   list<char>

//Container Adaptors : queue,priority_queue, stack....
#define stll   stack<v99>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define sll    set<v99>
#define sc    set<char>
#define msll   multiset<v99>
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pii &a,const pii &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return a.second<b.second;
}
template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}


typedef tree< v99, null_type, less<v99>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;


bool prime[1000020];
vector<v99>prm;
void SieveOfEratosthenes(v99 n)
{
    prm.pb(5LL);prm.pb(2LL);prm.pb(3LL);
    for (v99 p=3; p*p<=n; p+=2)
    {
        if (prime[p] == false)
        {
            for (v99 i=p*p; i<=n; i += 2*p)
                prime[i] = true;
        }
    }
    for(v99 i=7;i<=n;i+=2)if(prime[i]==false)prm.pb(i);

}
template <class T> inline T bigmod(T n,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0)
    {
        v99 val=bigmod(n,p/2,m);
        return (T)((val*val)%m);
    }
    else return (T)(((v99)n*(v99)bigmod(n,p-1,m))%m);
}
v99 ok(v99 n, v99 p)
{
    v99 ans=p,cnt=0;
    while(ans*p<=n)ans*=p;
    return ans;
}

v99 largestPower(v99 n, v99 p)
{
    v99 ans=p,cnt=0;
    while(ans<=n)ans*=p,cnt++;
    return cnt;
}

///-------------------------------------------------------------------------------------------------------

void solve(v99 n)
{
    /// code is here->
    v99 dui=largestPower(n,2LL),pach=largestPower(n,5LL);
    map<v99,v99>mpp;
    v99 cr_h=bigmod(2LL,dui-pach,10LL);
    for(v99 i=2;prm[i]<=n;i++)
        cr_h=(cr_h*ok(n,prm[i]))%10;
    cout<<cr_h<<ses;

//    v99 ans=1;
//    for(v99 i=1;i<=n;i++)ans=lcm(ans,i);
//    cout<<ans<<ses;
}



signed main()
{
    SieveOfEratosthenes(1000003LL);
    //dua
    //freopen("input1.txt","r",stdin);
    freopen("dataout.txt","w",stdout);
    //while(1)
    v99 n;
    while(scanf("%lld",&n) and n>0)
    solve(n);
    return 0;
}



///  Alhamdulillah...
