//============================================================================
// 1676B. Equal Candies - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Minimize total moves to make all elements equal by reducing
//              elements to the smallest value.
//============================================================================


/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

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
    for(int i=0 ; i<n; i++)
    {
        cin>>a[i];
    }
    int min_c = *min_element(a.begin(), a.end());
    int eat = 0;

    for(int i=0 ; i<a.size(); i++)
    {
        eat += a[i] - min_c;
    }
    cout<<eat<<endl;

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
  💡 Problem Logic:
  - You're given an array of integers (candies).
  - In one operation, you can decrease any candy count by 1.
  - Goal: Make all elements equal with the fewest operations.
  - Optimal strategy: Reduce all elements to the minimum.
  - Answer: Sum of (a[i] - min_element).
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
