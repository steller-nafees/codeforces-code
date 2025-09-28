//============================================================================
// 1742A. Sum - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given three integers, check if any two of them sum up to the third.
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
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int arr[3] = {x1, x2, x3};
        sort(arr, arr + 3);

        if ((arr[0] + arr[1]) == arr[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each test case, read 3 integers.
  - Sort them in non-decreasing order.
  - Check if the sum of the two smallest numbers equals the largest.
  - If yes, output "YES", otherwise output "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
