//============================================================================
// 1352A. Sum of Round Numbers - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Decomposes a number into a sum of round numbers (like 500, 30, 2).
//              Outputs the number of such summands and the summands themselves.
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
        vector<int> summands;
        int i = 1;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
                summands.push_back(digit * i);
            n /= 10;
            i *= 10;
        }

        cout << summands.size() << '\n';
        for (int value : summands)
            cout << value << ' ';
        cout << '\n';
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case, read an integer `n`.
  - Break it down digit by digit, starting from the unit's place.
  - If the digit is non-zero, form the round number (digit × place value) and store it.
  - Finally, print the count of round numbers and the numbers themselves.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
