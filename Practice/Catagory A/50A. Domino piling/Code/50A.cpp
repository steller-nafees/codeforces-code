//============================================================================
// 50A. Domino Piling - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculate the maximum number of 2x1 dominoes that can fit in an MxN board
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

    int M, N;
    cin >> M >> N;

    int squares = M * N;
    int dominoes = squares / 2;

    cout << dominoes << '\n';

    return 0;
}

/*
  ## 💡 Solution Logic
  Each domino covers exactly 2 squares.
  The maximum number of dominoes that fit on the board is the integer division of total squares by 2.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
