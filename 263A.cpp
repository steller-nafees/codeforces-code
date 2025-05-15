//============================================================================
// 263A. Beautiful Matrix - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculate minimum moves to bring '1' to the center of a 5x5 matrix
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

    int row = 0, col = 0, val;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> val;
            if (val == 1) {
                row = i;
                col = j;
            }
        }
    }

    int moves = abs(row - 3) + abs(col - 3);
    cout << moves << '\n';

    return 0;
}

/*
  ## 💡 Solution Logic
  The matrix is 5x5, and the center is at (3, 3).
  Find the current position of the '1' and calculate the Manhattan distance
  to move it to the center using:
  moves = abs(row - 3) + abs(col - 3);
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
