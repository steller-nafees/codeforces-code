//============================================================================
// 1367A. Short Substrings - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Extract the original string based on rules from a coded string
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
    string b; cin >> b;
    string ans;

    ans += b[0];
    for (int i = 1; i < b.length() - 1; i += 2)
    {
        ans += b[i];
    }
    ans += b[b.length() - 1];
    cout << ans << endl;
}

int main() {
    FAST_IO;

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
  ## 💡 Solution Logic for 1367A - Short Substrings
  - The encoded string `b` represents a string `a` where:
    - `b` starts with `a[0]`
    - Then every pair of characters encodes one transition between two letters of `a`
    - So, we take:
        - `b[0]` (always the start)
        - every second character starting from index 1 till the second last character
        - and finally `b[b.length() - 1]`
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
