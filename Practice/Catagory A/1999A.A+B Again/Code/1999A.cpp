//============================================================================
// Problem: 1999A - A+B? (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Sums two digits from a given 2-character string in each test case
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
        string n;
        cin >> n;

        int a = n[0] - '0';  // Convert first character to integer
        int b = n[1] - '0';  // Convert second character to integer

        cout << a + b << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case, read a 2-character string `n` (e.g., "47").
  - Convert each character to a digit using `char - '0'`.
  - Output the sum of the two digits.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
