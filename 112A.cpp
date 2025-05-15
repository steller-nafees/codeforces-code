//============================================================================
// 112A. Petya and Strings - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University, CSE
// Description: Compares two strings lexicographically (case-insensitive)
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

int main() {
    FAST_IO;

    string str1, str2;
    cin >> str1 >> str2;

    int result = 0;
    for (int i = 0; i < str1.length(); i++) {
        char a = tolower(str1[i]);
        char b = tolower(str2[i]);
        if (a == b) {
            result = 0;
        } else if (a < b) {
            result = -1;
            break;
        } else {
            result = 1;
            break;
        }
    }

    cout << result << '\n';
    return 0;
}

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
