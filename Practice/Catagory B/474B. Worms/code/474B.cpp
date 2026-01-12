//============================================================================
// Platform      : Codeforces 
// Problem Title : 474B. Worms
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : January 12, 2026 
//
// Problem Statement:
//   Marmot brought Mole n ordered piles of worms where the i-th pile contains ai worms.
//   All worms are labeled consecutively starting from 1. The first pile contains
//   worms labeled from 1 to a1, the second pile from a1+1 to a1+a2, and so on.
//
//   Marmot tells Mole the labels of some juicy worms. For each worm label, Mole must
//   correctly determine which pile the worm belongs to.
//
// Input:
//   - The first line contains an integer n (1 ≤ n ≤ 10^5), the number of piles.
//   - The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10^3),
//     where ai represents the number of worms in the i-th pile.
//   - The third line contains an integer m (1 ≤ m ≤ 10^5), the number of queries.
//   - The fourth line contains m integers q1, q2, ..., qm,
//     where qi is the label of a worm.
//
// Output:
//   - Print m lines.
//   - Each line contains a single integer representing the pile number
//     that contains the worm with label qi.
//
// Constraints:
//   - 1 ≤ n ≤ 10^5
//   - 1 ≤ ai ≤ 10^3
//   - Sum of all ai ≤ 10^6
//   - 1 ≤ m ≤ 10^5
//   - 1 ≤ qi ≤ sum of all ai
//   - Time limit: 1 second
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
    INPUT_int(n);
    vi(worms,n);
    INPUT_ARRAY(worms, n);

    vi(prefixSum , n+1);

    prefixSum[0] = 0; 
    for(int i=0; i<n; i++)
    {
        prefixSum[i+1] = prefixSum[i] + worms[i];
    }

    INPUT_int(m);
    while(m--)
    {
        INPUT_ll(q);
        {
            int in = lower_bound(all(prefixSum), q) - prefixSum.begin();
            output(in);
        }
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
   - Compute a prefix sum array where prefixSum[i] represents the total number
     of worms from pile 1 to pile i.
   - Each worm label corresponds to a position in this prefix sum array.
   - For each query qi, use binary search (lower_bound) to find the first index
     where prefixSum[index] ≥ qi.
   - That index represents the pile number containing the worm.
   - This approach ensures efficient query handling in O(log n) time.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
