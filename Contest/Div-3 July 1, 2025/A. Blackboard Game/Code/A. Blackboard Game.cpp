//============================================================================
// Codeforces Div-3 June 8, 2025
// A. Blackboard Game - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines the winner of a game between Alice and Bob based
//              on valid (a + b ≡ 3 mod 4) pairing strategy from numbers 0 to n-1.
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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int mod[4] = {0};

        // Count how many numbers in each mod 4 category
        for (int i = 0; i < n; i++)
        {
            mod[i % 4]++;
        }

        // Valid pairs are (0,3) and (1,2)
        int pairs = min(mod[0], mod[3]) + min(mod[1], mod[2]);
        int used = pairs * 2; // each pair removes 2 numbers

        // If all numbers used → Bob made the last move
        if (used == n)
        {
            cout << "Bob" << endl;
        }
        else // Otherwise Alice has a move left
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read the number of test cases `t`.
  - For each test case, read `n` (number of integers from 0 to n-1).
  - Count how many numbers fall into each modulo 4 class: 0, 1, 2, 3.
  - Only pairs (0,3) and (1,2) are valid because (a + b) % 4 == 3.
  - Total pairs = min(mod[0], mod[3]) + min(mod[1], mod[2]).
  - Total used = pairs * 2.
  - If all `n` numbers are used, Bob wins (he makes the last move).
  - Otherwise, Alice wins (she gets one last move alone).
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
