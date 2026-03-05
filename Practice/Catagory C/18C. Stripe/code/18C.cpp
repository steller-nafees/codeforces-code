//============================================================================
// Platform      : Codeforces 
// Problem Title : 18C. Stripe
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 05, 2026 
//
// Problem Statement:
//   Bob has a stripe consisting of n squares arranged in a row. Each square
//   contains an integer (possibly negative). He wants to cut the stripe into
//   two non-empty parts such that the sum of integers in both parts is equal.
//
//   The cut can only be made between squares (along borders), and both
//   resulting parts must contain at least one square.
//
//   Determine the number of ways to cut the stripe so that the sum of the
//   left part equals the sum of the right part.
//
// Input:
//   - First line: integer n (1 ≤ n ≤ 10^5)
//   - Second line: n space-separated integers (|ai| ≤ 10^4)
//
// Output:
//   - Print a single integer — the number of valid ways to cut the stripe.
//
// Constraints:
//   - 1 ≤ n ≤ 100000
//   - |ai| ≤ 10000
//   - Time limit: 2 seconds
//   - Memory limit: 64 megabytes
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
    ll n ; cin >> n;

    vector<ll> a(n), prefSum(n+1);

    ll sum = 0;
    for(int i=0 ; i < n; i++)
    {
        cin >> a[i] ; 
        sum += a[i] ;
    }

    if(sum % 2 != 0)
    {
        cout << 0 << endl; 
    }
    else
    {
        prefSum[0] = a[0];
        for(int i = 1 ; i < n ; i++)
        {
            prefSum[i] = prefSum[i-1] + a[i] ; 
        }

        int count = 0;
        for(int i=0 ; i<n-1 ; i++)
        {
            if(prefSum[i] * 2 == sum) count++;
        }

        cout << count << endl;
    }
    
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
   - First, compute the total sum of all elements.
   - If the total sum is odd, it's impossible to split the array into two
     parts with equal sum, so the answer is 0.
   - Otherwise, we look for positions where the prefix sum equals half of
     the total sum.
   - We iterate from index 0 to n-2 (since both parts must be non-empty).
   - If prefixSum[i] * 2 == total sum, then cutting after index i
     creates two parts with equal sum.
   - Count such valid positions.
   - Time Complexity: O(n)
   - Space Complexity: O(n)
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/