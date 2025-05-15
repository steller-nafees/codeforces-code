//============================================================================
// 4A. Watermelon - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Check if watermelon weight can be split into two even parts
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

    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  To divide the watermelon into two positive even numbers:
  - The weight `w` must be even.
  - The weight `w` must be greater than 2 (since 2 cannot be split into two positive even parts).
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
