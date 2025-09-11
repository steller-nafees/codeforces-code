//============================================================================
// A. How Much Does Daytona Cost? (Codeforces 1878A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: For each test case, given an array of integers and a value k,
//              check if k appears in the array. If yes, print "YES",
//              otherwise print "NO".
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n,k; cin>>n>>k;
    vector<int>a(n);

    bool matched = false;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == k)
        {
            matched = true;
        }
    }
    cout<<(matched ? "YES" : "NO")<<endl;
}

int main()
{
    FAST_IO;
    int t; cin>>t;
    while(t--) solve();
    return 0;
}

/*
  💡 Solution Logic
  - Input number of test cases.
  - For each test case:
      • Read n (array size) and k (target value).
      • Scan the array to check if k exists.
      • Print "YES" if found, otherwise "NO".
  - Complexity: O(n) per test case.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
