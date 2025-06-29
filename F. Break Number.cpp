#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll mx = 0;
    tc{
        ll n;
        cin >> n;
        ll count = 0;
        while (n % 2 == 0){
            n /= 2;
            count++;
        }
        mx = max(mx, count);
    }
    cout << mx << endl;
    return 0;
}
