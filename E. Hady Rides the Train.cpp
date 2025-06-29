#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, c;
    cin >> n;
    ll r = n / 4;
    if(r % 2 == 0){
        c = n % 4;
    }
    else{
        c = 3 - (n % 4);
    }
    cout << r << " " << c << endl;
    return 0;
}
