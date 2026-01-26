//============================================================================
// Platform      : Codeforces 
// Problem Title : 2190A. Sorting Game
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : January 26, 2026 
//
// Problem Statement:
// Alice and Bob play a game on a binary string s of length n 
// (a string consisting only of characters 0 and 1). Alice moves first, and 
// the players take alternate turns.
//
// In one turn, a player chooses a sequence of indices i1,i2,…,im 
// (1≤i1<i2<…<im≤n) such that the characters at these positions form a 
// non-increasing sequence (that is, si1≥si2≥…≥sim). The player then rearranges 
// the characters at these positions to be sorted in non-decreasing order.
//
// Formally, let the chosen characters consist of z zeros and o ones 
// (where z+o=m). The move replaces the characters at positions i1,i2,…,im 
// with a sequence of z zeros followed by o ones. A move is valid if and only if 
// it strictly modifies the string s (which implies z≥1 and o≥1).
//
// The player who cannot make a valid move loses.
//
// Assuming both players play optimally, determine the winner. If Alice wins, 
// output a valid first move that is part of a winning strategy.
//
// Input:
//   The first line contains the number of test cases t (1≤t≤10^4). 
//   Each test case consists of two lines:
//     - The first line contains a single integer n (1≤n≤2⋅10^5) — the length of the string s.
//     - The second line contains the binary string s of length n.
//
// It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.
//
// Output:
//   For each test case:
//     - If Bob wins with optimal play, print a single line containing "Bob".
//     - Otherwise, print three lines:
//         1. "Alice"
//         2. An integer m (2≤m≤n)
//         3. m distinct integers i1,i2,…,im (1≤i1<i2<…<im≤n) representing a valid first move.
//
// Constraints:
//   - 1 ≤ t ≤ 10^4
//   - 1 ≤ n ≤ 2⋅10^5
//   - sum of n over all test cases ≤ 2⋅10^5
//   - s consists only of '0' and '1'
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
    INPUT_ll(n); 
    INPUT_string(s);

    string sorted_s = s; 

    vector<int> ind; 
    sort(sorted_s.begin(), sorted_s.end()); 

    for(int i=0; i<n; i++)
    {
        if(s[i] != sorted_s[i]) ind.push_back(i+1);         
    }

    if(ind.empty())
    {
       cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Alice"<<endl;
        cout<<ind.size()<<endl;
        for(int i = 0; i<(int)ind.size(); i++)
        {
            cout<<ind[i]; 
            if(i != (int)ind.size()-1) cout<<" ";
            else cout<<endl;
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
   Solution Logic:
  - Find the sorted version of the binary string.
  - Compare the original string and sorted string to find positions where characters differ.
  - If there are no differences, Bob wins.
  - Otherwise, Alice wins and can choose all differing indices as her first move.
  - Output "Alice", the number of differing indices, and the list of indices (1-based).
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
