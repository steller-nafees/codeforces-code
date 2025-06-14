//============================================================================
// 723A. The New Year: Meeting Friends - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given the coordinates of 3 friends, finds the minimum total
//              distance required for all friends to meet at one point.
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

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int arr[3] = {x1, x2, x3};
    sort(arr, arr + 3);

    cout << (arr[2] - arr[1]) + (arr[1] - arr[0]) << endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read three integers representing the positions of the friends.
  - Sort them to identify the smallest, middle, and largest positions.
  - The optimal meeting point is the middle one.
  - Total distance = (middle - smallest) + (largest - middle).
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
