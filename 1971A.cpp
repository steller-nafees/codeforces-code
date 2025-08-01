//============================================================================
// 1971A. My First Sorting Problem - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Print the two given integers in ascending order for each test case
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
    int x,y; cin>>x>>y;
    if(x>y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    cout<<x<<" "<<y<<endl;
}

int main()
{
    FAST_IO;
    int t; cin>>t;
    while(t--)
    {
        solve();
    }


}

/*
  ##  Solution Logic
  For each test case:
  - Read two integers `x` and `y`.
  - If `x > y`, swap them.
  - Output the smaller first, then the larger.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
