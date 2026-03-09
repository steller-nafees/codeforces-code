//============================================================================
// Platform      : Codeforces 
// Problem Title : 1201C. Maximum Median
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 09, 2026 
//
// Problem Statement:
// You are given an array a of n integers, where n is odd. You can perform the
// following operation:
//
// Choose any element of the array (for example ai) and increase it by 1
// (replace ai with ai + 1).
//
// You want to make the median of the array as large as possible using
// at most k operations.
//
// The median of an odd-sized array is defined as the middle element after
// sorting the array in non-decreasing order.
//
// Example:
// The median of [1,5,2,3,5] is 3 after sorting → [1,2,3,5,5].
//
// Input:
// The first line contains two integers n and k
// (1 ≤ n ≤ 2⋅10^5, n is odd, 1 ≤ k ≤ 10^9) —
// the number of elements in the array and the maximum number of operations.
//
// The second line contains n integers
// a1, a2, …, an (1 ≤ ai ≤ 10^9).
//
// Output:
// Print a single integer — the maximum possible median after performing
// at most k operations.
//
// Constraints:
//  - 1 ≤ n ≤ 2⋅10^5
//  - n is odd
//  - 1 ≤ k ≤ 10^9
//  - 1 ≤ ai ≤ 10^9
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
    ll n,k; cin >> n >> k;
    vector<ll> a(n); 

    for(int i=0; i<n; i++) cin >> a[i];

    sort(all(a));

    ll med = n/2 ; 
    ll low = a[med] , high = a[med] + k, ans = a[med]; 

    while(low <= high)
    {
        ll mid = (low + high) / 2;

        ll need = 0;

        for(int i=med ; i < n; i++)
        {
            if(a[i] < mid) need += (mid - a[i]);
        }

        if( need <= k)
        {
            ans = mid; 
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;

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
  - First, sort the array so the median position becomes fixed.
  - Since n is odd, the median index is n/2.
  - We want to maximize the median value using at most k increments.
  
  - Use Binary Search on the answer:
      • Low = current median value.
      • High = current median + k (maximum possible increase).

  - For each candidate value mid:
      • Calculate how many operations are needed to raise all elements
        from the median index to the end of the array to at least mid.
      • If an element is smaller than mid, add (mid - a[i]) to the
        required operations.

  - If the total operations needed ≤ k:
      • It is possible to make the median = mid.
      • Store mid as the answer and try a larger value.

  - Otherwise:
      • Reduce the search space.

  - The final stored value is the maximum possible median.

  Time Complexity:
      O(n log k)

  Space Complexity:
      O(n)
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/