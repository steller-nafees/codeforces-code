//============================================================================
// 2009A. Minimize! - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: For each test case, given two integers a and b (a ≤ b),
//              compute the minimum value of the expression:
//              (c - a) + (b - c), where a ≤ c ≤ b.
//              It simplifies to (b - a), regardless of c.
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

int main() {
    FAST_IO;

    int t; cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << b - a << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Given the expression: (c - a) + (b - c), where a ≤ c ≤ b
  - This simplifies algebraically to (b - a), since the `c` terms cancel out
  - Thus, for each test case, we simply output (b - a)

  ✅ Time Complexity: O(1) per test case
  ✅ Space Complexity: O(1)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
