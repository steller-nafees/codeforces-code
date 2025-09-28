//============================================================================
// 1692A. Marathon - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts how many participants finished the marathon faster
//              than the first participant.
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

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;

        if (b > a) count++;
        if (c > a) count++;
        if (d > a) count++;

        cout << count << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read 4 integers: a, b, c, d.
  - Count how many of b, c, or d are greater than a.
  - Output the count.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
