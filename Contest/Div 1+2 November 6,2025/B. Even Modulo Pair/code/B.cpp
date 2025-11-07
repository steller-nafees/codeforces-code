//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Even Modulo Pair
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 06, 2025 
//
// Problem Statement:
//   You are given a strictly increasing sequence of positive integers 
//   a₁ < a₂ < … < aₙ. 
//   Find two distinct elements x and y from the sequence such that 
//   x < y and (y mod x) is even, or determine that no such pair exists.
//
//   Here, p mod q denotes the remainder from dividing p by q.
//
// Input:
//   Each test contains multiple test cases.
//   The first line contains the number of test cases t (1 ≤ t ≤ 2×10⁴).
//   The description of the test cases follows.
//
//   The first line of each test case contains one integer n (2 ≤ n ≤ 10⁵) —
//   the length of the sequence.
//
//   The second line of each test case contains n integers 
//   a₁, a₂, …, aₙ (1 ≤ a₁ < … < aₙ ≤ 10⁹) — the given sequence.
//
//   It is guaranteed that the sum of n over all test cases does not exceed 10⁵.
//
// Output:
//   For each test case:
//   - If no such pair exists, output -1.
//   - Otherwise, output two integers x and y — the elements that satisfy the condition.
//     If multiple valid pairs exist, output any of them.
//
// Constraints:
//   - 1 ≤ t ≤ 2×10⁴
//   - 2 ≤ n ≤ 10⁵
//   - 1 ≤ a₁ < … < aₙ ≤ 10⁹
//   - Σn ≤ 10⁵
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
    INPUT_int(n);
    vector<ll> a(n);
    INPUT_ARRAY(a, n);

    bool found = false;

    for (int i = 0; i < n && !found; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if ((a[j] % a[i]) % 2 == 0) 
            {
                cout << a[i] << " " << a[j] << endl;
                found = true;
                break;
            }
        }
    }

    if (!found) cout << "-1" << endl;
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
   - We need to find two elements x < y such that (y mod x) is even.
   - Iterate over all possible pairs (a[i], a[j]) where i < j.
   - For each pair, compute (a[j] % a[i]) and check if it is even.
   - If a valid pair is found, print x = a[i] and y = a[j].
   - If no such pair exists after checking all, print -1.
   - Since the sequence is strictly increasing, x < y is always guaranteed.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
