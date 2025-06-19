#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll N;
    cin >> N;
    ll target = N / 2;
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < N; j++)
            if(i == j && i == N / 2 && j == N / 2)
                cout << "X";
            else if(i == j)
                cout << "\\";
            else if(i == N - 1 - j)
                cout << "/";
            else
                cout << "*";
        cout << endl;
    }
    return 0;
}
