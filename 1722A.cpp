//============================================================================
// 1722A. Spell Check - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks whether the input string is a permutation of "Timru"
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n > 5)
    {
        cout << "NO" << endl;
    }
    else
    {
        sort(s.begin(), s.end());
        if (s == "Timru")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - The correct spelling of the string is "Timru".
  - For each test case:
      - If the length of the string is not 5, it can't be "Timru".
      - Sort the input string and compare with sorted "Timru".
      - If they match, print "YES", else print "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
