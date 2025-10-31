//============================================================================
// Platform      : Codeforces 
// Problem Title : C. Assembly via Minimums
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 31, 2025 
//
// Problem Statement:
//   Sasha had an array `a` of `n` integers. For every pair (i, j) where i < j, 
//   he wrote down `min(ai, aj)` to form a new array `b` of size n*(n-1)/2. 
//   Then he randomly shuffled array `b`.
//
//   You are given the array `b`, and you must reconstruct any possible array `a` 
//   that could have produced it. The elements of `a` must be in the range 
//   [-10^9, 10^9].
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 200) — number of test cases.
//   Each test case consists of:
//     - An integer n (2 ≤ n ≤ 1000) — the length of array a.
//     - n*(n-1)/2 integers b1, b2, ..., bn*(n-1)/2 (−10^9 ≤ bi ≤ 10^9) — elements of b.
//
// Output:
//   For each test case, print any possible array `a` of length `n`.
//
// Constraints:
//   - 1 ≤ t ≤ 200
//   - 2 ≤ n ≤ 1000
//   - −10^9 ≤ bi ≤ 10^9
//   - Sum of n across all test cases ≤ 1000
//   - Time limit: 2 seconds
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
#define output(a) cout<< a <<endl;
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define OUTPUT_ARRAY(a,n) for (int i = 0; i < n; i++) cout << a[i] << endl;
#define vii(a,n,val) vector<int> a(n,val);
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define STR_LEN(s) ((int)s.size())
#define STR_REV(s) reverse(all(s))
#define STR_SORT_ASC(s) sort(all(s))
#define STR_SORT_DESC(s) sort(rall(s))
#define STR_TOLOWER(s) transform(all(s), s.begin(), ::tolower)
#define STR_TOUPPER(s) transform(all(s), s.begin(), ::toupper)
#define STR_CONTAINS(s, sub) (s.find(sub) != string::npos)
#define STR_SUBSTR(s, l, r) (s.substr(l, r))
#define STR_APPEND(s1, s2) s1 += s2
#define STR_STARTS_WITH(s, pref) (s.rfind(pref, 0) == 0)
#define STR_ENDS_WITH(s, suff) (s.size() >= suff.size() && s.compare(s.size() - suff.size(), suff.size(), suff) == 0)
#define STR_SPLIT(vec, s, delim) { string tmp; stringstream ss(s); while (getline(ss, tmp, delim)) vec.pb(tmp); }
#define STR_JOIN(res, vec, delim) { res = ""; for (int i = 0; i < (int)vec.size(); i++) { res += vec[i]; if (i + 1 != (int)vec.size()) res += delim; } }
#define STR_TO_INT(s) stoi(s)
#define STR_TO_LL(s) stoll(s)
#define INT_TO_STR(x) to_string(x)

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
    INPUT_int(n);
    int m = (n*(n-1))/2;

    vl(b,m);
    vector<ll> a;
    INPUT_ARRAY(b,m);

    SORT_ASC(b);

    int idx = 0;
    for(int i = n - 1; i >= 1; i--)
    {
        a.push_back(b[idx]);
        idx += i; // Each element a[i] appears (n - i) times as minimum
    }
    a.push_back(1000000000LL); // Last element can be any large value

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    FAST_IO;

    int t; cin >> t;
    while (t--) solve();

    // For single test case, comment the above 3 lines and uncomment below line
    // solve();

    return 0;
}

/*
  💡 Solution Logic:
  - When generating array `b`, each element of `a` (except the largest one) 
    appears multiple times as the minimum of pairs:
        a[1] appears (n−1) times,
        a[2] appears (n−2) times, ...
        a[n−1] appears once,
        a[n] never appears as minimum.
  - Thus, when we sort `b`, the smallest values correspond to the smallest 
    elements in `a`, each repeating fewer times as `i` increases.
  - Starting from the smallest values, we pick one element for each level:
        - a[0] = b[0]
        - a[1] = b[(n−1)]
        - a[2] = b[(n−1)+(n−2)]
        - ...
  - The last element of `a` can be set to any large value (e.g., 1e9).
  - Finally, print the reconstructed array `a`.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
