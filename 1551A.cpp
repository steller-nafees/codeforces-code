//============================================================================
// 1551A. Polycarp and Coins - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given an integer n, find non-negative integers c1 and c2 such
//              that c1 + 2*c2 = n, and |c1 - c2| is minimized.
//              Output c1 and c2 for each test case.
//============================================================================

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
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
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
    int c1,c2;
    if(n % 3 == 0)
    {
        c2 = n/3;
        c1 = n - 2*c2;
        OUTPUT_2Values(c1,c2);
    }
    else
    {
        c2 = (n+1) / 3;
        c1 = n - 2*c2;
        OUTPUT_2Values(c1,c2);
    }

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


/*
  💡 Solution Logic:
  - For each test case, read integer n (total amount in burles).
  - Let c2 be the number of 2-burle coins.
  - Let c1 be the number of 1-burle coins.
  - Goal: minimize |c1 - c2| such that c1 + 2*c2 = n.
  - Strategy:
      - Try to balance c1 and c2 by using: c2 = (n + 1) / 3
      - Then compute c1 = n - 2 * c2
      - This approach ensures the difference |c1 - c2| is minimized.
  - Output c1 and c2.
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
