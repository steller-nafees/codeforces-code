//============================================================================
// 510A. Fox And Snake - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Prints a snake pattern in a grid based on the input dimensions.
//              The snake alternates direction on each even-numbered row.
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

    int n, m;
    cin >> n >> m;

    bool flip = true;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            if (flip == true)
            {
                for (int j = 1; j <= m - 1; j++)
                    cout << ".";
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 1; j <= m - 1; j++)
                    cout << ".";
            }
            flip = !flip; // Alternate direction
        }
        else
        {
            for (int k = 1; k <= m; k++)
                cout << "#";
        }
        cout << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For odd-numbered rows: print all `#` (full snake body).
  - For even-numbered rows:
      - Alternate tail direction using `flip`.
      - If `flip` is true: dots followed by `#` (right tail).
      - If `flip` is false: `#` followed by dots (left tail).
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
