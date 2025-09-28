
/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/


#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())


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
    int n; cin>>n;
    vector<int> a(n);
    bool hasZero = false;
    set<int> distinct;
    for(int i=0 ; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 0)
            hasZero = true;
        else if(a[i] != -1 )
            distinct.insert(a[i]);
    }

    if(hasZero)
        cout<<"NO"<<endl;
    else if(distinct.size() > 1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    FAST_IO;

    int t; cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}


