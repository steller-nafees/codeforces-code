//============================================================================
// 1772A. A+B? - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given a string in the format "a+b", output the sum a + b
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
    string s; cin >> s;
    cout << (s[0] - '0') + (s[2] - '0') << endl;
}

int main()
{
    FAST_IO;
    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - The input is a string in the format "a+b", where a and b are single-digit numbers.
  - Convert characters at position 0 and 2 to integers and print their sum.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
