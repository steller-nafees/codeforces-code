//============================================================================
// Problem: 1850A - To My Critics (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Check if the sum of any two of the three integers is at least 10
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
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b) >= 10 || (a + c) >= 10 || (b + c) >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read the number of test cases `t`.
  - For each test case:
    - Read three integers `a`, `b`, and `c`.
    - Check if any two of them add up to 10 or more.
    - If so, print "YES"; otherwise, print "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
