//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Maximum Neighborhood
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 28, 2025 
//
// Problem Statement:
//   You are given an n×n grid where values are filled row-wise:
//     - Row 1 contains 1 to n
//     - Row 2 contains n+1 to 2n
//     - ...
//     - Row n contains (n² − n + 1) to n²
//
//   The cost of a cell = its value + the values of all side-adjacent neighbors.
//   Two cells are neighbors if they share a side (up, down, left, right).
//
//   Your task is to determine the **maximum cost** over all cells in the grid.
//
// Input:
//   - The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases.
//   - Each test case contains one integer n (1 ≤ n ≤ 100).
//
// Output:
//   For each test case, print the maximum cost among all cells.
//
// Constraints:
//   - 1 ≤ n ≤ 100
//   - 1 ≤ t ≤ 100
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
#define output_Case(res, i) cout<<"Case "<<i<<": "<<res<<endl;
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
#define uo_map(a,keytype, valuetype) unordered_map<keytype,valuetype> a;
#define umap_input(a,n,dtype) for(int i = 0;i<n;i++){dtype x;cin>>x;a[x]++;}
#define umap_freqCount(a, freq) for(auto x : a){freq[x]++;}
#define SET(s,dType)set<dType>s
#define INSERT(s, x) s.insert(x)
#define EXISTS(s, x) (s.find(x) != s.end())
#define SIZE(s)(int)s.size()
#define CLEAR(s)s.clear()
// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

vector<bool> sieve(int n) 
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) 
    {
        if (isPrime[i]) 
        {
            for (int j = i * i; j <= n; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

void solve()
{
    INPUT_int(n);
    ll maxC = 0; 
    for(int i = 1; i <= n; i++) 
    { 
        for(int j = 1; j <= n; j++) 
        { 
            ll val = (i - 1LL) * n + j; 
            ll cost = val; 
            if(i > 1) cost += (i - 2LL) * n + j; 
            if(i < n) cost += i * n + j; 
            if(j > 1) cost += (i - 1LL) * n + (j - 1); 
            if(j < n) cost += (i - 1LL) * n + (j + 1); 
            if(cost > maxC) maxC = cost; 
        } 
    }
    output(maxC);
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
   - The grid is not explicitly built; instead, each cell’s value is computed by formula:
         value(r, c) = (r − 1) * n + c
   - For every cell (r, c), the code:
        • Computes its own value.
        • Adds values of neighbors (up, down, left, right) if they exist.
   - The cost of each cell = value + neighbors’ values.
   - A full O(n²) scan is performed to find the maximum cost over all cells.
   - The result is printed for each test case.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
