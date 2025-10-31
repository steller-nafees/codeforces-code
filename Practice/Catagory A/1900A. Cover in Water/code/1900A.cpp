//============================================================================
// Platform      : Codeforces 
// Problem Title : 1900A. Cover in Water
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 31, 2025 
//
// Problem Statement:
//   Filip has a row of cells, some of which are blocked ('#') and some are 
//   empty ('.'). He wants all empty cells to be filled with water.
//
//   He can perform two actions:
//     1 — place water in an empty cell.
//     2 — remove water from a cell and place it in another empty cell.
//
//   Additionally, if at any point cell i (2 ≤ i ≤ n−1) is empty and both 
//   neighboring cells (i−1 and i+1) contain water, it automatically becomes 
//   filled with water.
//
//   The goal is to determine the minimum number of action-1 operations 
//   (placing water directly) required to fill all empty cells. 
//   There’s no need to minimize the number of action-2 operations.
//
// Input:
//   Each test contains multiple test cases.
//   The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases.
//   Each test case consists of:
//     - An integer n (1 ≤ n ≤ 100) — the number of cells.
//     - A string s of length n, where '.' denotes an empty cell and '#' a blocked one.
//
// Output:
//   For each test case, print one integer — the minimal number of action-1 
//   operations needed to fill all empty cells.
//
// Constraints:
//   - 1 ≤ t ≤ 100
//   - 1 ≤ n ≤ 100
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
    INPUT_string(s);

    int countDot = 0;

    for(char ch : s)
    {
        if(ch == '.')
            countDot++;
    }

    if(countDot == 0)
        cout << 0 << endl;
    else
    {
        bool flag = false;
        for(int i = 0; i < n - 2; i++)
        {
            if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                flag = true;
                break;
            }
        }

        if(flag)
            cout << 2 << endl;
        else
            cout << countDot << endl;
    }
}

int main()
{
    FAST_IO;

    int t; cin >> t;
    while (t--) solve();

    // For single test case, comment the above 3 lines and uncomment below line
    // solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Count the number of empty cells ('.') in the string.
  - If there are no empty cells, print 0 — no water needed.
  - If there are three consecutive empty cells ("..."), Filip can fill all 
    of them with at most 2 direct actions (action 1). Thus, the answer is 2.
  - Otherwise, each empty cell must be filled by a separate direct action.
  - So the answer is:
        • 0 if there are no empty cells
        • 2 if there are three consecutive dots
        • otherwise, equal to the number of dots
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
