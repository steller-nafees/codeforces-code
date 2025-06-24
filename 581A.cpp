//============================================================================
// 581A. Vasya the Hipster - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University, CSE
// Description: Determines how many days Vasya can wear different colored
//              socks (red and blue), and how many days he can wear same color
//              socks after that.
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

    int a, b;
    cin >> a >> b;

    if (a >= b)
    {
        a -= b;
        a /= 2;
        cout << b << " " << a;
    }
    else
    {
        b -= a;
        b /= 2;
        cout << a << " " << b;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Given two integers `a` and `b` representing red and blue socks.
  - Each day Vasya wears **one red and one blue sock** (hipster day).
  - The number of such days is `min(a, b)`.
  - After that, he can wear only same color socks.
    - The remaining socks are from the color that had more initially.
    - So, `(max(a, b) - min(a, b)) / 2` more days possible.
  - Output two integers:
    - Number of hipster days (different color socks).
    - Number of remaining days with same color socks.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
