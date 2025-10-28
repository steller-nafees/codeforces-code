//============================================================================
// Platform      : Codeforces 
// Problem Title : D. Yet Another Array Problem
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 28, 2025 
//
// Problem Statement:
//   You are given an integer n and an array a of length n.
//
//   Find the smallest integer x (2 ≤ x ≤ 10^18) such that there exists an index i 
//   (1 ≤ i ≤ n) with gcd(ai, x) = 1. If no such x exists within the range [2, 10^18], 
//   output −1.
//
//   gcd(x, y) denotes the greatest common divisor (GCD) of integers x and y.
//
// Input:
//   - The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.
//   - Each test case consists of two lines:
//       * The first line contains a single integer n (1 ≤ n ≤ 10^5) — the length of the array.
//       * The second line contains n space-separated integers a1, a2, …, an (1 ≤ ai ≤ 10^18).
//   - It is guaranteed that the total sum of n across all test cases does not exceed 10^5.
//
// Output:
//   - For each test case, output a single integer: the smallest x (2 ≤ x ≤ 10^18) such that 
//     there exists an index i with gcd(ai, x) = 1. If there is no such x in the range [2, 10^18], print −1.
//
// Constraints:
//   - 1 ≤ t ≤ 10^4
//   - 1 ≤ n ≤ 10^5
//   - 1 ≤ ai ≤ 10^18
//   - Sum of n over all test cases ≤ 10^5
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
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
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
    vector<ll> a(n);
    INPUT_ARRAY(a,n);

    ll g = a[0];

    for(int i=1 ; i<n; i++)
    {
        g = __gcd(g, a[i]);
    }

    ll ans = -1;
    for(ll x= 2; x<1e6; x++)
    {
        if(__gcd(g,x) == 1)
        {
            ans = x;
            break;
        }
    }
    cout<<ans<<endl;
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
   Solution Logic:
  - Compute the GCD of the entire array.
  - The answer x must be coprime with this GCD.
  - Iterate x from 2 upwards (up to 1e6 suffices due to constraints) and check gcd(g, x) = 1.
  - The first x satisfying this condition is the smallest possible x.
  - If no such x exists, output -1.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
