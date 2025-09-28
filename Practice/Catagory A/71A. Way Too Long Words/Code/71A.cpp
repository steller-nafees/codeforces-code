//============================================================================
// A. Way Too Long Words - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Abbreviate words longer than 10 characters in a specific format
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

    while (n--) {
        string w;
        cin >> w;

        int len = (int)w.length();
        if (len > 10) {
            cout << w[0] << len - 2 << w[len - 1] << '\n';
        } else {
            cout << w << '\n';
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  For words longer than 10 characters, output the abbreviation:
    - First letter
    - Number of letters between first and last (length - 2)
    - Last letter
  Otherwise, print the word as-is.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
