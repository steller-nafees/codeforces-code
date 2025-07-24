//============================================================================
// 1926A - Vlad and the Best of Five - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines whether A or B appears more frequently in a string of length 5
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

void solve()
{
    string s;
    cin >> s;
    int a = 0, b = 0;

    for (char ch : s)
    {
        if (ch == 'A')
            a++;
        else
            b++;
    }

    if (a > b)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Each test case consists of a string of length 5, representing results of 5 rounds.
  - Each character is either 'A' or 'B'.
  - Count how many times A and B appear.
  - The player with more wins is declared the winner.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
