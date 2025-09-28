//============================================================================
// 1703A. YES or YES? - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks whether the input string is exactly "yes" (case-insensitive).
//              If yes, prints "YES", otherwise prints "NO".
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

// Debug (disable before submission)
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
        string s;
        cin >> s;

        // Convert to lowercase
        for (char &c : s)
            c = tolower(c);

        if (s == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read the number of test cases.
  - For each test case:
      - Read the input string.
      - Convert all characters to lowercase.
      - Check if the result is "yes".
      - If true, print "YES", otherwise "NO".
  - This ensures a case-insensitive check for the word "yes".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
