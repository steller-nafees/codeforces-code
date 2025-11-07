//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Sequence Game
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 06, 2025 
//
// Problem Statement:
//   Given an integer sequence of length n denoted as a₁, a₂, …, aₙ and an integer x.
//
//   You can perform the following operation: select two adjacent numbers aᵢ and aᵢ₊₁
//   and replace them with an integer y that satisfies:
//       min(aᵢ, aᵢ₊₁) ≤ y ≤ max(aᵢ, aᵢ₊₁)
//   After the replacement, aᵢ and aᵢ₊₁ are removed from the sequence,
//   and the elements are renumbered from 1 to n−1.
//
//   For example, if a = [1, 2, 4, 5], you can select a₂ = 2 and a₃ = 4,
//   and replace them with 3 → a becomes [1, 3, 5]. But you cannot select
//   a₁ = 1 and a₂ = 2 to replace with 3 (since y > max(aᵢ, aᵢ₊₁)).
//
//   After performing n−1 operations, only one number remains.
//   The question is whether this final number can be exactly equal to x.
//
// Input:
//   Each test contains multiple test cases.
//   The first line contains the number of test cases T (1 ≤ T ≤ 500).
//   The description of each test case follows.
//
//   The first line of each test case contains one integer n (1 ≤ n ≤ 100).
//   The second line contains n integers a₁, a₂, …, aₙ (−10⁹ ≤ aᵢ ≤ 10⁹).
//   The third line contains one integer x (−10⁹ ≤ x ≤ 10⁹).
//
// Output:
//   For each test case, print "YES" if the final number can be exactly equal to x,
//   otherwise print "NO".
//
// Constraints:
//   - 1 ≤ T ≤ 500
//   - 1 ≤ n ≤ 100
//   - −10⁹ ≤ aᵢ, x ≤ 10⁹
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
#define MaxElement(a) *max_element(a.begin(), a.end());
#define MinElement(a) *min_element(a.begin(), a.end());
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

    ll x;
    cin>>x;

    ll minel = MinElement(a)
    ll maxel = MaxElement(a)

    if(x >= minel && x <= maxel)
    {
        YES
    }
    else
    {
        NO
    }
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
   - The operation allows replacing two adjacent elements with any value y
     between their minimum and maximum.
   - Therefore, after multiple operations, the final remaining number can be
     any value within the overall range [min(a), max(a)].
   - Hence, if x lies within [min(a), max(a)], the answer is "YES",
     otherwise "NO".
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
