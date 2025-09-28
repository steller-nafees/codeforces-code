//============================================================================
// 703A - Mishka and Game - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines whether Mishka or Chris wins more rounds, or if it's a tie
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
    int n; cin >> n;

    int win_m = 0, win_c = 0;

    for (int i = 1; i <= n; i++)
    {
        int m, c;
        cin >> m >> c;

        if (m > c)
            win_m++;
        else if (c > m)
            win_c++;
        else
            continue;//Draw
    }

    if (win_m > win_c)
        cout << "Mishka" << endl;
    else if (win_c > win_m)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
  ## 💡 Solution Logic
  - Read number of rounds `n`.
  - For each round, compare Mishka's and Chris's scores.
  - Count who wins more rounds.
  - Output:
      - "Mishka" if Mishka wins more
      - "Chris" if Chris wins more
      - "Friendship is magic!^^" if equal
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
