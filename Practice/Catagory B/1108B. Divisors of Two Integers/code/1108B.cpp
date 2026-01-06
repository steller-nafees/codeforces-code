//============================================================================
// Platform      : Codeforces 
// Problem Title : 1108B. Divisors of Two Integers
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : January 06, 2026 
//
// Problem Statement:
//   You are given a shuffled list containing all divisors of two positive
//   integers x and y (including 1 and the numbers themselves).
//   If a number is a divisor of both x and y, it appears twice in the list.
//   Your task is to restore any valid pair of integers (x, y) such that
//   the combined list of their divisors is exactly the given list.
//
// Input:
//   - The first line contains an integer n (2 ≤ n ≤ 128) —
//     the total number of divisors of x and y.
//   - The second line contains n integers d1, d2, …, dn (1 ≤ di ≤ 10⁴),
//     representing the divisors.
//
// Output:
//   - Print two positive integers x and y such that the merged list of
//     their divisors (with duplicates) matches the given list.
//
// Constraints:
//   - 2 ≤ n ≤ 128
//   - 1 ≤ di ≤ 10⁴
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
    vi(a,n);
    INPUT_ARRAY(a,n);

    SORT_ASC(a);
    int div1 = a[n-1];
    int seen = -1; 

    for(int i=n-1; i>= 0 ; i--)
    {
        if(a[i] != seen && div1 % a[i] == 0)   
        {
            seen = a[i];
            a[i] = -1; 
        }
    }
    SORT_ASC(a);
    int div2 = a[n-1] ;

    OUTPUT_2Values(div1,div2);
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
   - The largest number in the list must be one of the original numbers,
     because every number is divisible by itself.
   - Let the largest element be x.
   - All divisors of x must appear in the list; remove exactly one occurrence
     of each divisor of x.
   - The largest remaining number in the list will then be y.
   - This guarantees that the combined divisor list matches the input.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
