//============================================================================
// Platform      : Codeforces
// Problem Title : B. Beautiful String
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 17, 2025
//
// Problem Statement:
//   You are given a binary string s of length n.
//
//   Your task is to find any subsequence p of s such that:
//     1. The subsequence p is non-decreasing (each character in p is not
//        greater than the next one).
//     2. Let x denote the string obtained by removing all characters of p from s,
//        while preserving the order of the remaining characters. Then x must
//        be a palindrome.
//
//   You need to output any valid subsequence p that satisfies both conditions.
//   If no such subsequence exists, output -1.
//
// Input:
//   The first line contains a single integer t (1 ≤ t ≤ 3000) — the number of test cases.
//   The first line of each test case contains a single integer n (1 ≤ n ≤ 10)
//   — the length of the string.
//   The second line contains a binary string s of length n.
//
// Output:
//   If a solution exists:
//     - On the first line, print a single integer k (0 ≤ k ≤ n) — the length of p.
//     - On the second line, print k distinct integers i1, i2, …, ik (1 ≤ i1 < i2 < … < ik ≤ n)
//       — the indices of the characters in s that form p.
//   Otherwise, print -1.
//
// Constraints:
//   - 1 ≤ n ≤ 10
//   - 1 ≤ t ≤ 3000
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

bool is_palindrome(const string &t) {
    for (int i = 0, j = (int)t.size() - 1; i < j; i++, j--)
        if (t[i] != t[j]) return false;
    return true;
}

bool is_non_decreasing(const string &t) {
    for (int i = 1; i < (int)t.size(); i++)
        if (t[i] < t[i - 1]) return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool ok = false;
    for (int i = 0; i < (1 << n); i++) {
        string p, x;
        vector<int> indexes;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                p.push_back(s[j]);
                indexes.push_back(j + 1);
            } else {
                x.push_back(s[j]); 
            }
        }

        if (is_non_decreasing(p) && is_palindrome(x)) {
            cout << indexes.size() << "\n";
            if (!indexes.empty()) {
                for (int j = 0; j < (int)indexes.size(); j++) 
                    cout << indexes[j] << (j + 1 == indexes.size() ? '\n' : ' ');
            }
            ok = true;
            break;
        }
    }

    if (!ok) cout << -1 << "\n";
}
int main()
{
  FAST_IO;

  int t;
  cin >> t;
  while (t--)
    solve();

  // For single test case, comment the above 3 lines and uncomment below line
  // solve();

  return 0;
}

/*
  💡 Solution Logic:
  - For each test case, we try all possible subsequences p (since n ≤ 10, 2ⁿ is feasible).
  - For each subset mask:
      → Characters included in the mask form subsequence p.
      → Characters not included form string x.
  - Check:
      1. If p is non-decreasing (0 ≤ 1 order preserved).
      2. If x is a palindrome.
  - If both conditions hold, output indices of p and stop.
  - If no valid subsequence exists, output -1.
*/


/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
