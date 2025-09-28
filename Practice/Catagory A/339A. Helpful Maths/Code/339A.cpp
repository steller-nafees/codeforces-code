//============================================================================
// 339A. Helpful Maths - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Sort numbers separated by '+' and print them in ascending order
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

    string s;
    cin >> s;

    int one = 0, two = 0, three = 0;

    for (char ch : s) {
        if (ch == '1') one++;
        else if (ch == '2') two++;
        else if (ch == '3') three++;
    }

    int total = one + two + three;

    for (int i = 0; i < total; i++) {
        if (one > 0) {
            cout << "1";
            one--;
        } else if (two > 0) {
            cout << "2";
            two--;
        } else {
            cout << "3";
            three--;
        }
        if (i != total - 1) cout << "+";
    }
    cout << '\n';

    return 0;
}

/*
  ## 💡 Solution Logic
  Count how many times '1', '2', and '3' appear.
  Then print them in ascending order separated by '+'.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
