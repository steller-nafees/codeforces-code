//============================================================================
// 467A. George and Accommodation - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts how many rooms have space for at least one more person
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
    int rooms = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if ((q - p) >= 2)
            rooms++;
    }

    cout << rooms << endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  - For each room, read the current number of people `p` and the room capacity `q`.
  - If the room has at least 2 spots available (i.e., `q - p >= 2`), George can stay there.
  - Count how many such rooms exist.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
