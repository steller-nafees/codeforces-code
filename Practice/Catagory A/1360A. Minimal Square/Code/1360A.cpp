//============================================================================
// 1360A. Minimal Square - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given two integers a and b, representing the sides of a rectangle,
//              find the minimal possible area of a square that can fit two such
//              rectangles (possibly rotated).
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
#define INPUT(a,n) for(int i = 0; i<n; i++) cin>>a[i];
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
    int a,b; cin>>a>>b;
    int large = max(a,b);
    int small = min(a,b);
    int side = max(large, 2*small);

    cout<<side * side<<endl;



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
  - We are given sides a and b of a rectangle.
  - To fit two such rectangles inside a square:
      - The square’s side must be at least the larger dimension (max(a, b)).
      - If we place them side by side along the smaller dimension,
        the square’s side must also be at least 2 * min(a, b).
  - Therefore, the minimal side length of the square is:
        side = max(max(a, b), 2 * min(a, b)).
  - The answer is simply side^2.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
