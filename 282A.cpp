//============================================================================
// 282A. Bits++ - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Simulates increment/decrement operations based on input strings
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

    int x = 0;
    while (n--) {
        string str;
        cin >> str;

        if (str[1] == '+') {
            x++;
        } else if (str[1] == '-') {
            x--;
        }
    }

    cout << x << '\n';
    return 0;
}

/*
  ## 💡 Solution Logic
  Input consists of statements like "++X", "X++", "--X", "X--".
  Only the middle character matters:
    - If it's '+', increment `x`
    - If it's '-', decrement `x`
  Final value of `x` is the answer.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
