//============================================================================
// 1676A. Lucky?
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks if the sum of the first three digits of a 6-digit number
//              equals the sum of the last three digits. If yes, prints "YES"; else "NO".
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
        string num;
        cin >> num;
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < 6; i++)
        {
            if (i <= 2)
                sum1 += num[i] - '0';
            else
                sum2 += num[i] - '0';
        }

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case:
    - Read a 6-digit string.
    - Sum the first 3 digits and last 3 digits separately.
    - Compare the two sums and print "YES" if equal, otherwise "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
