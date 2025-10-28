//============================================================================
// Platform      : Codeforces
// Problem Title : C. Isamatdin and His Magic Wand!
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 28, 2025
//
// Problem Statement:
//   Isamatdin has n toys arranged in a row. The i-th toy has an integer a_i. 
//   He wanted to sort them because otherwise, his mother would scold him.
//   
//   However, Isamatdin never liked arranging toys in order, so his friend 
//   JahonaliX gave him a magic wand to help. Unfortunately, JahonaliX made a 
//   small mistake while creating the wand.
//
//   But Isamatdin couldn't wait any longer and decided to use the broken wand 
//   anyway. The wand can only swap two toys if their integers have different 
//   parity (one is even, the other is odd). In other words, you can swap toys 
//   in positions (i,j) only if a_i mod 2 ≠ a_j mod 2.
//
//   Now he wants to know the lexicographically smallest arrangement he can 
//   achieve using this broken wand.
//
//   A sequence p is lexicographically smaller than a sequence q if there exists 
//   an index i such that p_j = q_j for all j < i, and p_i < q_i.
//
// Input:
//   - The first line contains the number of test cases t (1 ≤ t ≤ 10^4). 
//   - For each test case:
//       * The first line contains a single integer n (1 ≤ n ≤ 2⋅10^5) — the number of toys.
//       * The second line contains n integers a_1, a_2, ..., a_n (1 ≤ a_i ≤ 10^9).
//   - It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.
//
// Output:
//   For each test case, output n integers — the lexicographically smallest sequence 
//   that can be obtained using the described operation.
//
// Constraints:
//   - 1 ≤ t ≤ 10^4
//   - 1 ≤ n ≤ 2⋅10^5
//   - 1 ≤ a_i ≤ 10^9
//   - Sum of n over all test cases ≤ 2⋅10^5
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
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
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
    vi(a,n);

    int countOdd = 0;
    for(int i=0 ; i<n; i++)
    {
        cin>>a[i];
        if(a[i] %2 != 0) countOdd++;
    }
    if( countOdd >= 1 && countOdd < n )
    {
        SORT_ASC(a);
    }
    for(int i=0 ; i < n; i++)
    {
        if( i > 0 ) cout<<" ";
        cout<<a[i];
    }
    cout<<endl;
}

int main()
{
  FAST_IO;

  int t;
  cin >> t;
  while (t--)
    solve();

  // For single test case, comment the above 3 lines and uncomment below line
  // solve();

  return 0;
}

/*
   Solution Logic:
  - Count the number of odd numbers in the array.
  - If there is at least one odd and at least one even number, the magic wand 
    allows swaps between odd and even numbers, so we can sort the array fully.
  - Otherwise, the array already cannot be rearranged further, so output as is.
  - Print the resulting array for each test case.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
