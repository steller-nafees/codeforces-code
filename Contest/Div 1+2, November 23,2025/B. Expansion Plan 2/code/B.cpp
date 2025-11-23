//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Expansion Plan 2
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 23, 2025 
//
// Problem Statement:
//   You are analyzing an infinite grid with coordinates (X,Y).
//   Initially, only the cell at (0,0) is black.
//   You are given a string of expansion operations consisting of "4" and "8":
//     - "4": orthogonally adjacent cells to a black cell become black
//     - "8": orthogonally or diagonally adjacent cells to a black cell become black
//   Given coordinates (x,y), determine if the cell is black after all operations.
//
// Input:
//   - The first line contains an integer t — number of test cases (1 ≤ t ≤ 10^4)
//   - Each test case has:
//       - A line with integers n, x, y (1 ≤ n ≤ 2*10^5, -10^9 ≤ x,y ≤ 10^9)
//       - A string s of length n with characters "4" or "8"
//
// Output:
//   - For each test case, print YES if cell (x,y) is black, NO otherwise
//
// Constraints:
//   - Sum of n over all test cases does not exceed 2*10^5
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
#define uo_map(a,keytype, valuetype) unordered_map<keytype,valuetype> a;
#define umap_input(a,n,dtype) for(int i = 0; i<n; i++){dtype x; cin>>x; a[x]++;}
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

void solve()
{
    INPUT_ll(n);
    INPUT_ll(x);
    INPUT_ll(y);

    INPUT_string(s);
    ll ch4 = 0, ch8= 0;
    for(char ch : s)
    {
        if(ch == '4') ch4++;
        if(ch == '8') ch8++;
    }

    ll AX = llabs(x) , AY = llabs(y);
    ll D = AX + AY;

    bool ok = ((max(AX,AY) <= (ch4 + ch8) ) && (D <= ch4 + 2 * ch8));
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
  Solution Logic:
  - Count the number of '4' (orthogonal) and '8' (diagonal) expansions.
  - Compute absolute coordinates AX = |x|, AY = |y|.
  - Maximum orthogonal reach: max(AX, AY) <= ch4 + ch8
  - Maximum total reach (Manhattan distance) with diagonals: D = AX + AY <= ch4 + 2*ch8
  - If both conditions hold, cell (x,y) is black, otherwise not.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
