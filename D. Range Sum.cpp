#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll sum_all(ll a, ll b){
    if(a > b) swap(a, b);
    return (b - a + 1) * (a + b) / 2;
}

int main()
{
    fast;
    tc{
        ll a, b;
        cin >> a >> b;
        cout << sum_all(a, b) << endl;
    }
    return 0;
}
