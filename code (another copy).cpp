#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define test() ll t; cin>>t; while(t--)
#define f(i,n) for(ll i=0;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<n;i++)
#define f2(i,n,a) for(ll i=n-1;i>=a;i--)
#define all(x)  x.begin(), x.end()
#define endl "\n"

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

vector<ll> vp;
map<ll, ll>mp;

void Prime(ll n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    for (ll p = 2; p <= n; p++)
        if (prime[p])
        {
            mp[p] = 1;
            vp.push_back(p);
        }
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    test()
    {
        cout << "knkj";
        int n = 5;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            // cout << 1 << " ";
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}
