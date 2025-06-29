#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, s;
        cin >> n >> s;
        ll mx = n * (n + 1) / 2;
        if(s > mx){
            cout << -1 << endl;
            continue;
        }
        vector<ll> res;
        for(ll i = n; i > 0 && s > 0; i--){
            if(s >= i){
                res.push_back(i);
                s -= i;
            }
        }
        if(s > 0) cout << -1 << endl;
        else{
            for (ll num : res) cout << num << " ";
            cout << endl;
        }
    }
    return 0;
}
