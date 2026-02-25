//============================================================================
// Platform      : Codeforces 
// Problem Title : 368B. Sereja and Suffixes
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : February 25, 2026 
//
// Problem Statement:
//   Sereja has an array a, consisting of n integers a1, a2, ..., an.
//   He wrote out m integers l1, l2, ..., lm (1 ≤ li ≤ n).
//   For each li he wants to know how many distinct numbers are present
//   in the positions li, li+1, ..., n.
//
//   In other words, for each query li, determine the number of distinct
//   elements in the suffix starting from index li to the end of the array.
//
// Input:
//   - First line: two integers n and m (1 ≤ n, m ≤ 10^5)
//   - Second line: n integers a1, a2, ..., an (1 ≤ ai ≤ 10^5)
//   - Next m lines: each line contains one integer li (1 ≤ li ≤ n)
//
// Output:
//   - Print m lines.
//   - For each query li, print the number of distinct elements in
//     the subarray a[li ... n].
//
// Constraints:
//   - 1 ≤ n, m ≤ 10^5
//   - 1 ≤ ai ≤ 10^5
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
    vi(a,n) ; INPUT_ARRAY(a,n); 

    vector<int> suffixDist(n+1, 0);
    vector<bool> visited(100001, false);

    int distinctCount = 0;

    for(int i=n-1; i >= 0 ; i--)
    {
        if(!visited[a[i]])
        {
            visited[a[i]] = true;
            distinctCount++;
        }
        suffixDist[i] = distinctCount;
    }

    while (m--)
    {
        int l; cin>> l;
        output(suffixDist[l-1]);
    }
    
}

int main()
{
    FAST_IO;

    solve();

    return 0;
}

/*
   Solution Logic:
   - We need to answer multiple queries asking for the number of distinct
     elements in the suffix starting from position li to n.
   - Instead of recomputing for every query (which would be too slow),
     we preprocess the array from right to left.
   - Maintain:
       • A boolean array 'visited' to track which numbers have appeared.
       • An integer 'distinctCount' to count distinct elements so far.
   - Traverse from index n-1 down to 0:
       • If a[i] has not been visited, mark it visited and increase count.
       • Store the current distinctCount in suffixDist[i].
   - Now suffixDist[i] contains the number of distinct elements
     from index i to n-1.
   - For each query l, simply output suffixDist[l-1].
   - Time Complexity: O(n + m)
   - Space Complexity: O(n)
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/