//============================================================================
// Platform      : Codeforces 
// Problem Title : 1858A. Buttons
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 17, 2025 
//
// Problem Statement:
//   Anna and Katie ended up in a secret laboratory.
//   There are a+b+c buttons in the laboratory. It turned out that a buttons can only 
//   be pressed by Anna, b buttons can only be pressed by Katie, and c buttons can be 
//   pressed by either of them. Anna and Katie decided to play a game, taking turns 
//   pressing these buttons. Anna makes the first turn. Each button can be pressed at 
//   most once, so at some point, one of the girls will not be able to make her turn.
//   The girl who cannot press a button loses. Determine who will win if both girls 
//   play optimally.
//
// Input:
//   The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.
//   Each test case consists of three integers a, b, and c (1 ≤ a,b,c ≤ 10^9) — the number 
//   of buttons that can only be pressed by Anna, the number of buttons that can only be 
//   pressed by Katie, and the number of buttons that can be pressed by either of them.
//
// Output:
//   For each test case, output "First" if Anna wins, or "Second" if Katie wins.
//
// Constraints:
//   - 1 ≤ t ≤ 10^4
//   - 1 ≤ a,b,c ≤ 10^9
//   - Time limit: 1 second
//   - Memory limit: 256 MB
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
     ll a,b,c; cin>>a>>b>>c;
     if(a>b) cout<<"First"<<endl;
     else if(b>a) cout<<"Second"<<endl;
     else 
     {
         if(c%2 == 1) cout<<"First"<<endl;
         else cout<<"Second"<<endl;
     }
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
  💡 Solution Logic:
  - Anna and Katie can press their exclusive buttons first (Anna has `a`, Katie has `b`).
  - If `a > b`, Anna has more exclusive moves and wins.
  - If `b > a`, Katie has more exclusive moves and wins.
  - If `a == b`, then the winner is determined by the shared buttons `c`.
      - If `c` is odd, Anna (who goes first) can always take the last move and win.
      - If `c` is even, Katie wins.
  - Count the exclusive buttons and check the parity of the shared buttons to determine the winner.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
