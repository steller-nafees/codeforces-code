//============================================================================
// 268A. Games - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts how many times the home uniform color of one team
//              matches the guest uniform color of another team.
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

    int n;
    cin >> n;
    int h[n], a[n];

    int change = 0;

    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (h[i] == a[j])
                change++;
        }
    }

    cout << change << endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  - Read the number of games and the list of (home, away) uniform colors.
  - For every pair (i, j), check if the home color of team i matches
    the away color of team j.
  - Increment the counter for each such match.
  - Output the total number of such uniform color clashes.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
