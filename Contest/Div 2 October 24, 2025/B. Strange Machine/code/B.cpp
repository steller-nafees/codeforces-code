//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Strange Machine
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 24, 2025 
//
// Problem Statement:
// 
//
// Input:
//
// Output:
//
// Constraints:
//  - Time limit: 
//  - Memory limit: 
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
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
    INPUT_int(n);
    INPUT_int(q);
    INPUT_string(s);

    vl(queries,q);
    INPUT_ARRAY(queries,q);

    int countB = 0;
    for(char c : s) 
    {
        if(c == 'B') countB++;
    }

    for(int i=0; i<q; i++)
    {
        ll a = queries[i];
        if(countB == 0) //All A. then it needs a seconds
        {
            cout<<a;
        }
        else
        {
            ll seconds = 0; 
            while(a > 0)
            {
                for(int j= 0; j<n && a > 0; j++)
                {
                    if(s[j] == 'A')
                    {
                        a -= 1;
                    }
                    else
                    {
                        a /= 2;
                    }
                    seconds++;
                }
            }
            cout<<seconds;
        }
        if (i + 1 < q) cout << " ";

    }
    cout<<endl;
}

int main()
{
    FAST_IO;

    int t; cin>>t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
   Solution Logic:
  - 
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
