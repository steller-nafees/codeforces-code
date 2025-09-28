/*
بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
Start with the name of Allah
*/
#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define INPUT(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define SORT_DESC(a,type) sort(a.begin(), a.end(),greater<type>())

// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve()
{
    ll x; cin>>x;
    ll y = 2ll * x;
    cout<<y<<endl;
}

int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
