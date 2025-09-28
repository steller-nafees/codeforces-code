//============================================================================
// 344A. Magnets - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Count the number of groups of magnets based on pole orientation
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

int main() {
    FAST_IO;

    int n;
    cin >> n;

    int group = 0;
    string prevMagnet;

    while (n--)
    {
        string magnet;
        cin >> magnet;
        cin.ignore();

        if (magnet != prevMagnet)
        {
            group++;
        }

        prevMagnet = magnet;
    }

    cout << group << endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  Each time the orientation of the magnet changes compared to the previous one,
  it forms a new group. The first magnet always starts a group.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
