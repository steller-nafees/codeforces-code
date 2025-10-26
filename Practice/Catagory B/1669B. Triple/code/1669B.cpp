//============================================================================
// Platform      : Codeforces 
// Problem Title : 1669B. Triple
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 26, 2025 
//
// Problem Statement:
//   You are given an array a of n elements. Your task is to print any value
//   that appears at least three times, or print -1 if there is no such value.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 10⁴) — the number of test cases.
//   The first line of each test case contains an integer n (1 ≤ n ≤ 2⋅10⁵) — 
//   the length of the array.
//   The second line of each test case contains n integers a₁, a₂, …, aₙ (1 ≤ aᵢ ≤ n)
//   — the elements of the array.
//   It is guaranteed that the sum of n over all test cases does not exceed 2⋅10⁵.
//
// Output:
//   For each test case, print any value that appears at least three times or print -1 
//   if there is no such value.
//
// Constraints:
//   - 1 ≤ t ≤ 10⁴
//   - 1 ≤ n ≤ 2⋅10⁵
//   - 1 ≤ aᵢ ≤ n
//   - Sum of n across all test cases ≤ 2⋅10⁵
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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> mark(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mark[a[i]]++;
    }

    int value = -1;
    for (int i = 1; i <= n; i++) {
        if (mark[i] >= 3) {
            value = i;   
        }
    }

    cout << value << endl;
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
   - Read the number of test cases t.
   - For each test case:
       1. Read integer n and then the array a of size n.
       2. Use a frequency array `mark` of size n+1 to count occurrences of each value.
       3. Iterate from 1 to n and check if any number appears at least three times.
       4. If found, store that value; otherwise, keep -1.
       5. Print the result for the test case.
   - The algorithm runs in O(n) per test case and O(total n) overall, which fits within limits.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
