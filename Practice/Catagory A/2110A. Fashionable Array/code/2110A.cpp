//============================================================================
// Platform      : Codeforces 
// Problem Title : 2110A. Fashionable Array
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : November 01, 2025 
//
// Problem Statement:
//   In 2077, everything became fashionable among robots, even arrays...
//
//   We will call an array of integers fashionable if min(a) + max(a)
//   is divisible by 2 without a remainder, where min(a) is the minimum 
//   element and max(a) is the maximum element of the array.
//
//   You are given an array of integers a₁, a₂, …, aₙ.
//   In one operation, you can remove any element from the array.
//   Your task is to determine the minimum number of operations required 
//   to make the array fashionable.
//
// Input:
//   Each test contains multiple test cases.
//   The first line contains an integer t (1 ≤ t ≤ 10³) — the number of test cases.
//   The description of each test case follows:
//     - The first line contains one integer n (1 ≤ n ≤ 50) — the size of the array.
//     - The second line contains n integers a₁, a₂, …, aₙ (1 ≤ aᵢ ≤ 50) — elements of the array.
//
// Output:
//   For each test case, print one integer — the minimum number of operations 
//   required to make the array fashionable.
//
// Constraints:
//   - 1 ≤ t ≤ 10³
//   - 1 ≤ n ≤ 50
//   - 1 ≤ aᵢ ≤ 50
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
    vl(a,n);
    INPUT_ARRAY(a,n);

    SORT_ASC(a);

    ll max_a = a[n-1];
    ll min_a = a[0];

    ll remove_1 = 0, remove_2 = 0;

    for(int i=0 ; i<n; i++)
    {
        if((a[i] + max_a ) % 2 != 0)
            remove_1++;
        else
            break;
    }
    for(int i=n-1 ; i>= 0; i--)
    {
        if((a[i] + min_a ) % 2 != 0)
            remove_2++;
        else
            break;
    }
    cout<<min(remove_1,remove_2)<<endl;
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
   💡 Solution Logic:
   - To make the array fashionable, we need min(a) + max(a) to be even.
   - Sort the array to easily find minimum and maximum elements.
   - Check parity (even/odd) of elements relative to min and max:
       ▪ Count elements from the start (`remove_1`) that cannot pair evenly with max.
       ▪ Count elements from the end (`remove_2`) that cannot pair evenly with min.
   - The answer is the smaller of these two counts, since removing fewer elements 
     from either end is optimal.
   - Print the minimum number of removals required to make the array fashionable.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
