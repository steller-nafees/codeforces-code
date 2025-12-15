//============================================================================
// Platform      : Codeforces 
// Problem Title : 1360B. Honest Coach
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : December 15, 2025 
//
// Problem Statement:
//   There are n athletes in front of you. Athletes are numbered from 1 to n from left to right. 
//   You know the strength of each athlete — the athlete number i has the strength si.
//
//   You want to split all athletes into two teams. Each team must have at least one athlete, 
//   and each athlete must be exactly in one team.
//
//   You want the strongest athlete from the first team to differ as little as possible from 
//   the weakest athlete from the second team. Formally, you want to split the athletes into two 
//   teams A and B so that the value |max(A)−min(B)| is as small as possible, where max(A) is the 
//   maximum strength of an athlete from team A, and min(B) is the minimum strength of an athlete from team B.
//
//   Print the minimum value |max(A)−min(B)|.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases. 
//   Each test case consists of two lines:
//     - The first line contains a positive integer n (2 ≤ n ≤ 50) — number of athletes.
//     - The second line contains n positive integers s1, s2, …, sn (1 ≤ si ≤ 1000) — the strength of each athlete.
//
// Output:
//   For each test case print one integer — the minimum value of |max(A)−min(B)| with the optimal split.
//
// Constraints:
//   - 1 ≤ t ≤ 1000
//   - 2 ≤ n ≤ 50
//   - 1 ≤ si ≤ 1000
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
    INPUT_int(n)
    vi(a,n);

    INPUT_ARRAY(a,n);
    SORT_ASC(a);

    int minDiff = INT_MAX;

    for (int i=1; i<n ; i++)
    {
        int diff = a[i] - a[i-1];
        minDiff = min(minDiff, diff);
    }
    output(minDiff);


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
  - Sort the strengths in ascending order.
  - The minimum difference between two consecutive strengths gives the optimal split
    because splitting between these two minimizes |max(A)−min(B)|.
  - Iterate through the sorted array and keep track of the minimum difference between adjacent elements.
  - Output the minimum difference.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
