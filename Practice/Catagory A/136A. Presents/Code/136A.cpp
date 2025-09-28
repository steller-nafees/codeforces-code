//============================================================================
// 136A. Presents - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given a permutation of friends and the number who gave presents,
//              find for each person who gave them a gift.
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

    int n, p;
    cin >> n;

    int arr[n + 1]; // 1-based indexing

    for (int i = 1; i <= n; i++) {
        cin >> p;
        arr[p] = i; // person p received gift from person i
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Input: array where `i-th` person gives a gift to person `p_i`.
  - Goal: output for each person `j`, who gave them the gift.
  - Invert the permutation: for input `p_i = j`, set `arr[j] = i`.
  - Finally, print the `arr[1...n]` representing who gifted each person.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
