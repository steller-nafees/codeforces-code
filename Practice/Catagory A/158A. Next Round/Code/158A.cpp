//============================================================================
// 158A. Next Round - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts number of participants who advance to the next round
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

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int p = 0;
    int score = arr[k - 1];

    for (int i = 0; i < n; i++) {
        if (arr[i] >= score && arr[i] > 0) {
            p++;
        } else if (arr[0] == 0) {
            p = 0;
            break;
        } else {
            break;
        }
    }

    cout << p << '\n';
    return 0;
}

/*
  ## 💡 Solution Logic
  Traverse the entire array, comparing each element with the score of the k-th position.
  If the score is non-zero and greater than or equal to the k-th score, count the participant.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
