//============================================================================
// Platform      : Codeforces 
// Problem Title : B - Your Name
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 28, 2025 
//
// Problem Statement:
//   khba is writing his girlfriend's name. He has n cubes, each with one 
//   lowercase Latin letter written on it, arranged in a row forming a string s. 
//   His girlfriend's name is also a string t consisting of n lowercase letters.
//
//   To prove his love, he must check whether it is possible to rearrange the 
//   letters of string s so that it becomes her name t.
//
// Input:
//   - The first line contains an integer q (1 ≤ q ≤ 1000) — the number of test cases.
//   - Each test case consists of:
//       • An integer n (1 ≤ n ≤ 20)
//       • Two distinct strings s and t, each consisting of n lowercase Latin letters.
//
// Output:
//   - For each test case, print "YES" if the letters of s can be rearranged 
//     to form t; otherwise, print "NO".
//
// Constraints:
//   - 1 ≤ q ≤ 1000
//   - 1 ≤ n ≤ 20
//   - Strings s and t contain only lowercase Latin letters.
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
    INPUT_ll(n);
    INPUT_string(s);
    INPUT_string(t);

    SORT_ASC(s);
    SORT_ASC(t);
    if (s == t) 
    {
        cout << "YES" << endl;
    } 
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    FAST_IO;

    int t; cin >> t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
   Solution Logic:
  - For each test case:
      1. Read integer n, and two strings s and t.
      2. Sort both strings alphabetically.
      3. If the sorted strings are equal, print "YES" — meaning s can be 
         rearranged to form t.
      4. Otherwise, print "NO".
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
