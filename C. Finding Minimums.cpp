#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll N, K;
    cin >> N >> K;
    vector<ll> arr(N);
    for(ll i = 0; i < N; ++i){
        cin >> arr[i];
    }
    for(ll i = 0; i < N; i += K){
        ll end = min(i + K, N);
        ll min_val = INT_MAX;
        for(ll j = i; j < end; ++j){
            if(arr[j] < min_val){
                min_val = arr[j];
            }
        }
        cout << min_val << " ";
    }
    return 0;
}
