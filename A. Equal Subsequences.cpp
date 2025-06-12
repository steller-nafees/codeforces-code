//============================================================================
// Codeforces Div-2 June 12, 2025
// A. Equal Subsequences - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Constructs a binary string of length `n` such that it contains
//              exactly `k` ones ('1'), and the rest are zeros ('0').
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
        int n, k;
        cin >> n >> k;

        if (n == k)
        {
            for (int i = 1; i <= k; i++)
                cout << '1';
        }
        else
        {
            for (int i = 1; i <= n - k; i++)
                cout << '0';
            for (int i = 1; i <= k; i++)
                cout << '1';
        }

        cout << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case:
    - Read `n` (length of binary string) and `k` (number of 1s).
    - If `n == k`, output a string with only '1's.
    - Otherwise:
      - Output `(n - k)` zeros followed by `k` ones.
  - Ensures that the binary string meets the requirement exactly.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
