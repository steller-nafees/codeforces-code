//============================================================================
// A. Raising Bacteria - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Count the number of set bits in the integer (number of bacteria doublings)
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

int main() {
    FAST_IO;

    int x;
    cin >> x;

    // __builtin_popcount(x) returns the number of set bits (1s) in the binary representation of x
    cout << __builtin_popcount(x) << '\n';

    return 0;
}

/*
  ## 💡 Solution Logic
  Each '1' bit in the binary representation corresponds to a bacteria doubling event.
  Counting the set bits gives the total number of doublings required.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
