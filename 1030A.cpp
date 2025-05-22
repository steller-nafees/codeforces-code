//============================================================================
// 1030A. In Search of an Easy Problem - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines whether a problem is EASY or HARD based on student votes.
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

    int n, op;
    cin >> n;
    bool flag = true;
    while (n--)
    {
        cin >> op;
        if (op == 1)
        {
            flag = false;
            break;
        }
        else
        {
            continue;
        }
    }

    if (flag == true)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read `n` opinions.
  - If any of the opinions is 1, the problem is HARD.
  - If all opinions are 0, the problem is EASY.
  - Exit early on detecting a single 1 for optimization.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
