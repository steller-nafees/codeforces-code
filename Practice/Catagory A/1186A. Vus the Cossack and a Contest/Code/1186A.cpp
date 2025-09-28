//============================================================================
// A. Vus the Cossack and a Contest (Codeforces 1186A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given n contestants, m pens, and k notebooks, determine
//              if each contestant can receive both one pen and one notebook.
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
    int n,m,k ;
    cin>>n>>m>>k;

    if(m < n || k < n)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
  ## 💡 Solution Logic
  - There are n contestants.
  - Each contestant needs 1 pen and 1 notebook.
  - Given m pens and k notebooks:
      • If m >= n AND k >= n → each contestant can get both items → print "YES".
      • Otherwise → not enough pens or notebooks → print "NO".
  - Complexity: O(1) per test case (constant time and memory).
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
