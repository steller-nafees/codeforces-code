//============================================================================
// Platform      : Codeforces 
// Problem Title : 1741A. Compare T-Shirt Sizes
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 04, 2025 
//
// Problem Statement:
//   Two T-shirt sizes are given: a and b.
//   The T-shirt size is either a string "M" or a string consisting of several 
//   (possibly zero) characters 'X' and one of the characters 'S' or 'L'.
//
//   For example, "M", "XXL", "S", and "XXXXXXXS" are valid T-shirt sizes, while 
//   "XM", "LL", and "SX" are not valid.
//
//   The letters mean the following:
//     - 'S' → small
//     - 'M' → medium
//     - 'L' → large
//     - 'X' → indicates degree (extra)
//
//   Comparison rules:
//     • Any small size (ending in 'S') is smaller than 'M' and any large size.
//     • Any large size (ending in 'L') is larger than 'M' and any small size.
//     • Among small sizes, more 'X's mean smaller size (e.g. XXXS < XS).
//     • Among large sizes, more 'X's mean larger size (e.g. XXXL > XL).
//
//   You must compare two given T-shirt sizes a and b.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 10⁴) — the number of test cases.
//   Each test case contains two valid T-shirt sizes a and b.
//
// Output:
//   For each test case, print "<", ">", or "=" depending on whether 
//   size a is smaller, larger, or equal to size b.
//
// Constraints:
//   - 1 ≤ t ≤ 10⁴
//   - 1 ≤ |a|, |b| ≤ 50
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
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
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

void solve() {
    string a, b; 
    cin >> a >> b;

    char ca = a.back();
    char cb = b.back();

    int xa = (int)(a.size() - 1); // count of 'X'
    int xb = (int)(b.size() - 1);

    string ans;
    if (ca == cb) {
        if (ca == 'M') ans = "=";
        else if (ca == 'S') {
            if (xa == xb) ans = "=";
            else if (xa < xb) ans = ">";
            else ans = "<";
        } else { // L
            if (xa == xb) ans = "=";
            else if (xa < xb) ans = "<";
            else ans = ">";
        }
    } else {
        if (ca == 'M') {
            ans = (cb == 'S') ? ">" : "<";
        } else if (ca == 'S') {
            ans = "<";
        } else { // ca == 'L'
            ans = ">";
        }
    }

    cout << ans << "\n";
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
  - Determine the last character of each size string ('S', 'M', or 'L').
  - Count the number of 'X' characters before the final letter in both strings.
  - If both end with the same letter:
      • For 'M' → always equal.
      • For 'S' → fewer 'X's means larger size.
      • For 'L' → more 'X's means larger size.
  - If they end with different letters:
      • 'S' < 'M' < 'L' (any number of X’s doesn’t change this order).
  - Output '<', '>', or '=' accordingly.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
