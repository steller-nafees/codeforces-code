//============================================================================
// Platform      : Codeforces
// Problem Title : B. Beautiful String
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 17, 2025
//
// Problem Statement:
//
//
// Input:
//
// Output:
//
// Constraints:
//  - Time limit:
//  - Memory limit:
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);            \
  cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x ? "YES" : "NO"
#define INPUT_ARRAY(a, n)     \
  for (int i = 0; i < n; i++) \
    cin >> a[i];
#define OUTPUT_2Values(o1, o2) cout << o1 << " " << o2 << endl
#define SORT_DESC(a) sort(a.begin(), a.end(), greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a, n) vector<int> a(n);
#define vl(a, n) vector<ll> a(n);
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
                x.push_back(s[j]); // ✅ fixed
            }
        }

        if (is_non_decreasing(p) && is_palindrome(x)) {
            cout << indexes.size() << "\n";
            if (!indexes.empty()) {
                for (int j = 0; j < (int)indexes.size(); j++) // ✅ fixed
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
  -
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
