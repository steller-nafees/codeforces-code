//============================================================================
// Platform      : Codeforces 
// Problem Title : 1881A. Don't Try to Count
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : February 14, 2026 
//
// Problem Statement:
//   Given a string x of length n and a string s of length m
//   (where n * m ≤ 25), consisting of lowercase Latin letters,
//   you can apply operations on x.
//
//   In one operation, you append the current value of x
//   to the end of x itself.
//
//   Example:
//      "aba" → "abaaba" → "abaabaabaaba"
//
//   Find the minimum number of operations required so that
//   s appears in x as a substring. If impossible, print -1.
//
// Input:
//   t — number of test cases (1 ≤ t ≤ 10^4)
//   For each test case:
//     n m (1 ≤ n * m ≤ 25)
//     string x
//     string s
//
// Output:
//   For each test case, print the minimum number of operations
//   required, or -1 if impossible.
//
// Constraints:
//   - 1 ≤ t ≤ 10^4
//   - 1 ≤ n * m ≤ 25
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
#define MIN_HEAP(pq) priority_queue<int, vector<int>, greater<int>>pq;
#define MAX_HEAP(pq) priority_queue<int>pq;
#define PQ_INPUT(pq) for(int i = 0; i<n; i++){INPUT_int(x);pq.push(x);}
#define PQ_SUM(pq,sum) ll sum = 0;while(!pq.empty()){sum += pq.top();pq.pop();}
#define Output_precision(pr,res) cout << fixed << setprecision(pr) << res << endl;

// create maps
#define umap(name, keytype, valuetype) unordered_map<keytype, valuetype> name;
#define omap(name, keytype, valuetype) map<keytype, valuetype> name;

// pair type
#define pii pair<int,int>
#define pll pair<long long,long long>

/* ================================================ */
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
    int n,m ; cin >> n >> m;
    string x,s; cin >> x >> s;

    int opt = 0; 

    while ((int)x.size() < m)
    {
        x += x; 
        opt++;
    }

    if(x.find(s) != string::npos)
    {
        cout << opt << endl;
    }
    else
    {
        x += x;
        opt++;
        if(x.find(s) != string::npos)
        {
            cout << opt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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
   - Each operation doubles the string x (x = x + x).
   - We keep doubling x until its length becomes at least m.
   - If s appears in x, print the number of operations.
   - Otherwise, perform one extra doubling because s might
     overlap across the boundary of two concatenated copies.
   - If still not found, output -1.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
