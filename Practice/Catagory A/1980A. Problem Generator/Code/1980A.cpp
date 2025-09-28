//============================================================================
// Problem  : 1980A - Problem Generator (Codeforces)
// Author   : H. M. Na fees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   Vlad wants to hold m rounds next month. Each round requires exactly one
//   problem from each difficulty category: 'A', 'B', 'C', 'D', 'E', 'F', 'G'.
//
//   He has a bank of n problems, each belonging to one of these difficulty
//   categories. If there are not enough problems of some category, Vlad has
//   to create new ones.
//
//   Task: Find the minimum number of new problems Vlad must create in order
//   to hold m rounds.
//
// Input:
//   - t (1 ≤ t ≤ 1000): number of test cases
//   For each test case:
//     - n, m (1 ≤ n ≤ 50, 1 ≤ m ≤ 5)
//     - string s of length n consisting of characters 'A'..'G'
//
// Output:
//   - For each test case, print the minimum number of problems Vlad needs
//     to create.
//
// Constraints:
//   - Time limit: 1 second
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  In the name of Allah, the Most Gracious, the Most Merciful
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
    int n,m; cin>>n>>m;
    string s; cin>>s;

    int p[7] = {0};
    for(int i=0; i<n;i++)
    {
        p[s[i] - 'A']++;
    }
    int need = 0;
    for(int i=0; i<7;i++)
    {
        need += max(0, m-p[i]);
    }
    cout<<need<<endl;
}

int main()
{
    FAST_IO;
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic:
  - Each round needs one problem from each difficulty 'A'..'G'.
  - Count how many problems exist for each difficulty.
  - For each difficulty, if fewer than m problems exist, calculate how many
    are missing: max(0, m - count).
  - Sum across all difficulties → answer.
  - Time complexity: O(n + 7) per test case (very small).
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
