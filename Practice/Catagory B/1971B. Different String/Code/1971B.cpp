//============================================================================
// 1971B. Different String (Codeforces Round 946 Div. 3)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description:
//   Given a string s, we need to determine if there exists a string t that is
//   not equal to s but is still an anagram of s.
//   Approach:
//     - Sort the string to get a candidate rearrangement.
//     - If the sorted version is identical to the original, then reverse it
//       to try another rearrangement.
//     - If it is still the same (i.e., all characters identical), print "NO".
//     - Otherwise, print "YES" and the rearranged string.
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

void solve()
{
    string s;
    cin >> s;
    string r = s;

    sort(r.begin(), r.end());
    if (r == s)
        reverse(r.begin(), r.end());

    if (r == s)   // still same => impossible
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n" << r << "\n";
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
  💡 Solution Logic
  - Read input string `s`.
  - Sort it to form a different arrangement.
  - If sorting doesn’t change the string, reverse the sorted string.
  - If result is still equal to the original (all characters same) → print "NO".
  - Otherwise, print "YES" and the rearranged string.
  - Time complexity: O(|s| log |s|) per test case, efficient since |s| ≤ 10.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
