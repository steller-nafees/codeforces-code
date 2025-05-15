//============================================================================
// 236A. Boy or Girl - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks the number of distinct characters to determine the output
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

    int freq[26] = {0};
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    int distinct = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i]) distinct++;
    }

    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!" << '\n';
    else
        cout << "IGNORE HIM!" << '\n';

    return 0;
}

/*
  ## 💡 Solution Logic
  Count the number of distinct letters in the input string.
  If it's even, print "CHAT WITH HER!", else print "IGNORE HIM!".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
