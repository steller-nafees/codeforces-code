//============================================================================
// Platform      : Codeforces 
// Problem Title : C1 - A Simple GCD Problem (Easy Version)
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 29, 2026 
//
// Problem Statement:
//   You are given two arrays a and b of length n.
//
//   For each index i (1 ≤ i ≤ n), you can perform the following operation at most once:
//     - Choose an integer m (m ≠ ai) such that 1 ≤ m ≤ bi, and set ai := m.
//
//   Let the resulting array be a′. The operation is valid only if:
//
//     For all 1 ≤ l < r ≤ n:
//       gcd(al, al+1, ..., ar) = gcd(a′l, a′l+1, ..., a′r)
//
//   In this easy version, bi = ai for all i.
//
//   Your task is to determine the maximum number of indices where you can perform
//   the operation while maintaining the above condition.
//
// Input:
//   - First line: integer t (number of test cases)
//   - For each test case:
//       - Integer n (2 ≤ n ≤ 2⋅10^5)
//       - Array a of size n (1 ≤ ai ≤ 10^9)
//       - Array b of size n (bi = ai)
//
// Output:
//   - For each test case, print the maximum number of operations.
//
// Constraints:
//   - 1 ≤ t ≤ 10^4
//   - 2 ≤ n ≤ 2⋅10^5
//   - Sum of n over all test cases ≤ 2⋅10^5
//   - Time limit: 2 seconds
//   - Memory limit: 512 MB
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


ll lcm (ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return (a/__gcd(a,b)) * b;
}

void solve()
{
    int n; cin >> n; 
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) 
    {
        ll b; cin >> b; // consume b, but we don't need it for the solution
    }
    int ans = 0;
    for(int i=0; i< n; i++)
    {
        ll d;
        if (i == 0)
        {
            d = __gcd(a[0], a[1]);
        }
        else if(i == n-1)
        {
            d = __gcd(a[n-2], a[n-1]);
        }
        else 
        {
            ll left = __gcd(a[i-1] , a[i]);
            ll right = __gcd(a[i], a[i+1]);
            d = lcm(left,right);
        }
        if (a[i] / d >= 2) ++ans;
    }
    cout << ans << endl;
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
   - Since bi = ai, we can only replace ai with a smaller value (m < ai).
   - The goal is to maximize the number of indices where we change ai,
     while keeping all subarray GCDs unchanged.

   - Key observation:
     The GCD of every subarray depends only on adjacent GCD relationships.

   - For each index i:
       • If i = 0:
           d = gcd(a[0], a[1])
       • If i = n-1:
           d = gcd(a[n-2], a[n-1])
       • Otherwise:
           left  = gcd(a[i-1], a[i])
           right = gcd(a[i], a[i+1])
           d = lcm(left, right)

   - Why LCM?
     Because ai must preserve both adjacent GCDs simultaneously,
     so it must be a multiple of both → hence LCM.

   - Now, we check:
         ai / d ≥ 2
     → meaning there exists another valid multiple m (≠ ai) within [1, ai]

   - If true, we can safely replace ai without changing any subarray GCD.

   - Count all such positions.

   - Time Complexity: O(n log A) per test case (due to gcd/lcm)
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/