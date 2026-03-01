//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Eating Game
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 01, 2026 
//
// Problem Statement:
//   There are n players sitting at a circular table. The i-th player has ai dishes.
//   They take turns eating exactly one dish if they still have any.
//   After player i finishes their turn, player (i mod n) + 1 takes the next turn.
//   Any player can start first.
//
//   The player who eats the very last dish wins the game.
//   Determine how many players can possibly be winners.
//
// Input:
//   First line contains integer t (1 ≤ t ≤ 5000) — number of test cases.
//   For each test case:
//     - First line contains integer n (1 ≤ n ≤ 10).
//     - Second line contains n integers ai (1 ≤ ai ≤ 10).
//
// Output:
//   For each test case, print a single integer — 
//   the number of players that can possibly be winners.
//
// Constraints:
//   - 1 ≤ t ≤ 5000
//   - 1 ≤ n ≤ 10
//   - 1 ≤ ai ≤ 10
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
    int n; cin>> n;
    vi(a,n) ; INPUT_ARRAY(a,n);

    int max = *max_element(all(a));

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == max) count++;
    }
    cout << count << "\n";
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
   - Let total dishes be S = a1 + a2 + ... + an.
   - Since players eat exactly one dish per turn in circular order,
     the game will always last exactly S turns.
   - The winner is the player who eats on the S-th turn.
   - Because any player can start first, we can rotate the starting position.
   - A player can be winner if there exists some rotation where
     they get the last valid turn.
   - This is only possible for players having the maximum number of dishes.
   - Therefore, the answer is simply:
       Count of players whose ai equals the maximum value.
   - Time Complexity: O(n) per test case.
   - Space Complexity: O(n).
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/