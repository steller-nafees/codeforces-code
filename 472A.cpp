//============================================================================
// 472A. Design Tutorial: Learn from Math - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Performs bitwise XOR on corresponding binary digits of two
//              equal-length binary strings and prints the result.
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

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

int main()
{
    FAST_IO;

    ll n;
    cin>>n;

    int x = 8, y = 9; // 8,9 are first consecutive composite numbers

    if(n & 1)
        cout<<y<<" "<<n-y<<endl;
    else
        cout<<x<<" "<<n-x<<endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read two binary strings `a` and `b` of the same length.
  - Traverse each character of both strings:
      - If the characters differ (i.e., one is 0, the other is 1), output '1'.
      - If they are the same (both 0 or both 1), output '0'.
  - This simulates a bitwise XOR between each pair of digits.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
