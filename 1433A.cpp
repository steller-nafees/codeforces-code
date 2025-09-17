//============================================================================
// A. Boring Apartments (Codeforces 1433A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: For each given apartment number x, compute the "boring score":
//              • Each valid apartment is formed by repeating one digit (1–9).
//              • The score = number of key presses required to dial x
//                on an old phone keypad, based on its length and digit.
//              Formula: (d - 1) * 10 + [1,3,6,10] depending on the length.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int x;
    cin >> x;
    int digit = 0, ans = 0;

    if (x % 1111 == 0) {          // length 4 (e.g., 1111, 2222)
        digit = x / 1111;
        ans = (digit - 1) * 10 + 10;
    }
    else if (x % 111 == 0) {      // length 3 (e.g., 111, 222)
        digit = x / 111;
        ans = (digit - 1) * 10 + 6;
    }
    else if (x % 11 == 0) {       // length 2 (e.g., 11, 22)
        digit = x / 11;
        ans = (digit - 1) * 10 + 3;
    }
    else {                        // length 1 (1–9)
        digit = x;
        ans = (digit - 1) * 10 + 1;
    }

    cout << ans << '\n';
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic for 1433A
  - Input the number of test cases `t`.
  - For each test case:
      • Read the apartment number `x`.
      • Determine its repeated digit and length.
      • Apply formula:
            (digit - 1) * 10 + presses_for_length
        where presses_for_length = {1,3,6,10} for lengths {1,2,3,4}.
      • Output the boring score.
  - Complexity: O(1) per test case.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
