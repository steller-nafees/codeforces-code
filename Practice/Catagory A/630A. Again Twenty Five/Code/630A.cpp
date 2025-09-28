//============================================================================
// 630A. Again Twenty Five! - Codeforces 
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Outputs the last two digits of 5 raised to the power of n.
//              For any n ≥ 2, 5^n ends in 25 due to mathematical properties.
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
    cin >> n;

    // No matter what n is (as long as n ≥ 2), 5^n ends in 25
    cout << 25 << endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - The problem asks for the last two digits of 5^n.
  - For n = 0 or 1: 5^0 = 1, 5^1 = 5.
  - For n ≥ 2: 5^n always ends in **25**.
    - 5^2 = 25
    - 5^3 = 125
    - 5^4 = 625
    - ...
  - Thus, we simply print `25` for any input n ≥ 2.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
