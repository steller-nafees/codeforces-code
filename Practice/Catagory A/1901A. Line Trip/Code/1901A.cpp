//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Line Trip
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 31, 2025 
//
// Problem Statement:
//   There is a road represented as a number line. You start from point 0 and 
//   want to travel to point x and then return back to 0.
//
//   There are n gas stations located at positions a1, a2, …, an (0 < a1 < a2 < … < an < x).
//   You can fully refuel your car only at these stations. There are no gas stations 
//   at 0 or x.
//
//   Your car consumes 1 liter of fuel per unit distance, and you start with a full tank.
//   You need to find the minimum possible gas tank capacity that allows you to complete 
//   the round trip (0 → x → 0).
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 1000) — number of test cases.
//   Each test case consists of:
//     - Two integers n and x (1 ≤ n ≤ 50; 2 ≤ x ≤ 100)
//     - n integers a1, a2, …, an (0 < a1 < a2 < … < an < x)
//
// Output:
//   For each test case, output one integer — the minimum required gas tank capacity.
//
// Constraints:
//   - 1 ≤ t ≤ 1000
//   - 1 ≤ n ≤ 50
//   - 2 ≤ x ≤ 100
//   - 0 < a1 < a2 < … < an < x
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
    INPUT_int(x);

    vi(a,n); INPUT_ARRAY(a,n);

    int maxGap = a[0];
    for(int i =1 ;i<n; i++)
    {
        maxGap = max(maxGap , a[i] - a[i-1]);
    }
    maxGap = max(maxGap, 2 * (x - a[n-1]));
    cout<<maxGap<<endl;

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
  - You must ensure the fuel tank can handle the longest continuous distance 
    without refueling.
  - The journey includes:
      * From 0 to the first gas station (a1)
      * Between consecutive stations (ai - ai-1)
      * From the last station (an) to x, then returning (x - an) twice 
        since you must go to x and back.
  - The maximum of these distances determines the minimum required tank size.
  - Hence, compute:
        maxGap = max( max(gaps between consecutive stations),
                      2 * (x - last_station),
                      first_station )
  - Output this maxGap as the minimum required tank capacity.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
