//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Addition on a Segment
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 28, 2025 
//
// Problem Statement:
//   You start with an array a of length n, initially filled with zeros.
//   You must perform exactly n operations. In each operation, you choose
//   a segment [l, r] (1 ≤ l ≤ r ≤ n) and add 1 to every element in that range.
//
//   After all n operations, you are given an array b. There must exist
//   some way to reorder the elements of the final array a so that it
//   becomes exactly equal to b.
//
//   Your task: find the maximum possible segment length (r − l + 1)
//   used in ANY of the n operations, under the condition that such a
//   reordering is possible.
//
// Input:
//   - The first line contains t (1 ≤ t ≤ 10⁴), the number of test cases.
//   - For each test case:
//       • One integer n (1 ≤ n ≤ 2·10⁵)
//       • n integers bᵢ (0 ≤ bᵢ ≤ n)
//
// Output:
//   - For each test case, print one integer: the maximum possible
//     value of (r − l + 1).
//
// Constraints:
//   - At least one valid sequence of operations exists.
//   - Sum of all n over all test cases ≤ 2·10⁵
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
#define umap_input(a,n,dtype) for(int i = 0; i<n; i++){dtype x; cin>>x; a[x]++;}
#define umap_freqCount(a, freq) for(auto x : a){freq[x]++;}
#define SET(s,dType)set<dType>s
#define INSERT(s, x) s.insert(x)
#define EXISTS(s, x) (s.find(s) != s.end())
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
    ll s = 0;
    int z = 0;
    for (int i = 0; i < n; ++i) 
    {
        INPUT_int(b);
        s += b;
        if (b == 0) z++;
    }
    int p = n - z;
    ll k = s - n + 1;
    ll ans = min((ll)p, k);
    output(ans);
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
   - The final array a must contain exactly n increments total because
     we perform n segment operations.
   - Let:
        s = sum(b),  
        z = count of zeros in b,
        p = number of positive elements = n - z.
   - In any valid construction, the *maximum segment length* cannot exceed:
        • the number of positions that need increments (p),
        • or the total number of "extra degrees of freedom", computed as:
              k = S - n + 1
   - Therefore, the answer is:
         min(p, k)
   - The code directly computes S, counts zeros, derives p and k,
     and prints the minimum.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
