//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void alabu(priority_queue <ll, vector <ll> , greater<ll> > pq)
{
    while(pq.size())
        cout << pq.top() << " ", pq.pop();
    cout << endl;
}

void solve()
{
    set <ll> s;
    priority_queue <ll, vector <ll> , greater<ll> > pq;
    vector <ll> a({2, 3, 5});
    pq.push(1ll);
    s.insert(1ll);
    ll bound = 1e18;
    while(s.size()<4000){
        ll kot = pq.top();pq.pop();
        for(ll i: a)
        if(s.find(kot * i) == s.end()){
            s.insert(kot * i);
            pq.push(kot * i);
        }//cout << kot << endl;
    }
    int k = 1;
    for(ll i: s){
        if(k == 1500){
            printf("The 1500'th ugly number is %lld.\n", i);/// 859963392
            return;
        }
        //cout << i << endl;
        k++;
    }
}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
