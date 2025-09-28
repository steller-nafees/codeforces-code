//============================================================================
// Problem  : 1791B - Following Directions (Codeforces)
// Author   : H. M. Na fees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   You are given a sequence of moves (U, D, L, R) starting from (0,0).
//   For each test case, check if the path ever passes through point (1,1).
//
// Input:
//   - t (1 ≤ t ≤ 1000)  → number of test cases
//   - For each test case:
//       • n (1 ≤ n ≤ 50)  → length of the move string
//       • s → string of moves (U, D, L, R)
//
// Output:
//   - "YES" if the path passes through (1,1).
//   - "NO" otherwise.
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
#define OUTPUT_CONDITION(x) (x?"YES" : "NO")
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string s; cin>>s;
    int a1=0, a2=0;
    bool passed = false;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'U')
            a2++;
        else if(s[i] == 'D')
            a2--;
        else if(s[i] == 'R')
            a1++;
        else if(s[i] == 'L')
            a1--;

        if(a1 == 1 && a2 == 1)
        {
            passed = true;
            break;
        }
    }

    cout<<OUTPUT_CONDITION(passed)<<endl;
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
  - Start from (0,0).
  - Simulate moves one by one:
      • U → y++
      • D → y--
      • R → x++
      • L → x--
  - If at any point (x, y) == (1,1) → answer is "YES".
  - If never reached, answer is "NO".
  - Time complexity: O(n) per test case.
*/


/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
