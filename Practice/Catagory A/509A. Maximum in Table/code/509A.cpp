//============================================================================
// Platform      : Codeforces 
// Problem Title : 509A. Maximum in Table
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : February 02, 2026 
//
// Problem Statement:
// An n × n table a is defined as follows:
//  - The first row and the first column contain ones, i.e. a[i][1] = a[1][i] = 1
//    for all i = 1, 2, ..., n.
//  - Each of the remaining cells contains the sum of the number directly above
//    it and the number directly to its left.
//    Formally: a[i][j] = a[i-1][j] + a[i][j-1].
//
// Given n, determine the maximum value present in the n × n table.
//
// Input:
//  - A single integer n (1 ≤ n ≤ 10) representing the size of the table.
//
// Output:
//  - Print a single integer representing the maximum value in the table.
//
// Constraints:
//  - 1 ≤ n ≤ 10
//  - Time limit: 2 seconds
//  - Memory limit: 256 MB
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

// input & frequency
#define umap_input_freq(mp, n, dtype) \
for(int i = 0; i < n; i++){ dtype x; cin >> x; mp[x]++; }

// convert map to vector (for sorting)
#define map_to_vec(mp, vec) \
vector<pair<decltype(mp.begin()->first), decltype(mp.begin()->second)>> vec(mp.begin(), mp.end());

// sort by key
#define sort_key_asc(vec) sort(vec.begin(), vec.end());
#define sort_key_desc(vec) sort(vec.rbegin(), vec.rend());

// sort by value
#define sort_val_asc(vec) \
sort(vec.begin(), vec.end(), [](auto &a, auto &b){ return a.second < b.second; });

#define sort_val_desc(vec) \
sort(vec.begin(), vec.end(), [](auto &a, auto &b){ return a.second > b.second; });

// print
#define print_map(mp) \
for(auto &x : mp) cout << x.first << " " << x.second << "\n";

#define print_vec(vec) \
for(auto &x : vec) cout << x.first << " " << x.second << "\n";

// pair type
#define pii pair<int,int>
#define pll pair<long long,long long>

// input
#define pair_input(p) cin >> p.first >> p.second
#define pair_input_vec(v, n) \
for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second

// sort by first
#define sort_pair_first_asc(v) sort(v.begin(), v.end())
#define sort_pair_first_desc(v) sort(v.rbegin(), v.rend())

// sort by second
#define sort_pair_second_asc(v) \
sort(v.begin(), v.end(), [](auto &a, auto &b){ return a.second < b.second; });

#define sort_pair_second_desc(v) \
sort(v.begin(), v.end(), [](auto &a, auto &b){ return a.second > b.second; });

// print
#define print_pair(p) cout << p.first << " " << p.second << "\n"
#define print_pair_vec(v) \
for(auto &x : v) cout << x.first << " " << x.second << "\n";

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
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n,1));

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            mat[i][j] = mat[i-1][j] + mat[i][j-1];
        }
    }

    output(mat[n-1][n-1]);
}

int main()
{
    FAST_IO;

    //int t; cin>>t; 
    //while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    solve();

    return 0;
}

/*
   Solution Logic:
   - Initialize an n × n matrix where the first row and first column are filled with 1.
   - For each remaining cell (i, j), compute its value as the sum of the cell above
     (i-1, j) and the cell to the left (i, j-1).
   - This dynamic programming process fills the table according to the problem rules.
   - Since values increase as we move to the bottom-right, the maximum value in the
     table will always be at position (n-1, n-1).
   - Output that value.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
