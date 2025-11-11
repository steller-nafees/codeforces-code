//============================================================================
// Platform      : Codeforces 
// Problem Title : 2163A. Souvlaki VS. Kalamaki
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 11, 2025 
//
// Problem Statement:
//   Two players, Souvlaki and Kalamaki, are given a sequence of n integers a1, a2, …, an.
//   They play a game consisting of (n − 1) rounds, numbered 1 to (n − 1).
//
//   - Souvlaki plays on odd-numbered rounds.
//   - Kalamaki plays on even-numbered rounds.
//
//   On the i-th round, the current player may either:
//     1. Skip their turn, OR
//     2. Swap the elements ai and ai+1.
//
//   After all rounds are over, Souvlaki wins if the final sequence is sorted in non-decreasing order
//   (that is, ai ≤ ai+1 for every 1 ≤ i < n). Otherwise, Kalamaki wins.
//
//   Before the game starts, Souvlaki is allowed to reorder the initial sequence a in any way he wants.
//   Determine whether he can reorder the sequence so that he has a guaranteed winning strategy.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases.
//   Each test case consists of:
//     - A single integer n (3 ≤ n ≤ 100).
//     - A sequence of n integers a1, a2, …, an (1 ≤ ai ≤ n).
//
// Output:
//   For each test case, print "YES" if Souvlaki can reorder the elements so that
//   he always wins regardless of Kalamaki’s moves, and "NO" otherwise.
//
// Constraints:
//   - 3 ≤ n ≤ 100
//   - 1 ≤ ai ≤ n
//   - Time limit: 1 second
//   - Memory limit: 256 megabytes
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
    vi(a,n);

    INPUT_ARRAY(a,n);

    SORT_ASC(a);

    bool ok = true;

    for(int i = 1; i< n - 1; i+= 2)
    {
        if(a[i] != a[i+1])
        {
            ok = false;
            break;
        }
    }

    cout<<(OUTPUT_CONDITION(ok))<<endl;

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
   - Souvlaki can rearrange the array before the game starts.
   - Since he plays on all odd rounds and can swap adjacent elements (ai, ai+1),
     the only possible way to guarantee a sorted array is if every pair of adjacent
     elements that will be swapped in odd rounds are equal.
   - After sorting the array, check every pair (a[i], a[i+1]) at odd indices (1, 3, 5, ...):
       • If a[i] == a[i+1] for all such pairs → print "YES"
       • Otherwise → print "NO"
   - This ensures that no matter how Kalamaki plays, Souvlaki will always end up
     with a non-decreasing array if the condition holds.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
