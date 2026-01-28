//============================================================================
// Platform      : Codeforces 
// Problem Title : 2184A. Social Experiment
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : January 28, 2026 
//
// Problem Statement:
// Right now, the largest social experiment in the history of Codeforces is
// taking place, involving n people. They are required to form teams of 2–3
// people, after which each team chooses one of two civilizations to participate
// in the social experiment.
//
// The organizers want to know what the possible difference in the number of
// people in the civilizations could be. Find the minimum possible difference.
//
// Input:
// - The first line contains an integer t (1 ≤ t ≤ 10^4), the number of test cases.
// - Each test case contains a single integer n (2 ≤ n ≤ 10^4), the number of people.
//
// Output:
// - For each test case, output the minimum possible difference.
//
// Constraints:
//  - Time limit: 1 second
//  - Memory limit: 256 MB
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
#define STR_TO_INT(s) stoi(s)
#define STR_TO_LL(s) stoll(s)
#define INT_TO_STR(x) to_string(x)
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

    int res = 0;
    if(n == 2) res = 2; 
    else if (n == 3 ) res = 3;
    else if(n % 2 == 0 )
    {
        res = 0;
    }
    else
    {
        res = (n % 2);
    }

    output(res);
}

int main()
{
    FAST_IO;

    int t; 
    cin >> t; 
    while (t--) solve();

    // For single test case, comment the above lines and uncomment below
    // solve();

    return 0;
}

/*
   Solution Logic:
   - People are grouped into teams of size 2 or 3.
   - Each team joins one of two civilizations.
   - If n is divisible by 2 or 3, teams can be distributed evenly,
     resulting in zero difference.
   - Otherwise, we calculate the minimum number of people required
     to make n divisible by 2 or 3.
   - That minimum extra count represents the smallest possible difference.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
