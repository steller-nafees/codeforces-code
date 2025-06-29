//============================================================================
// 1512A. Spy Detected! - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Identify the position of the unique number (the "spy")
//              in a list where all other numbers are the same.
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
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Logic to detect the unique (spy) number
        if (a[0] == a[1]) {
            for (int i = 2; i < n; i++) {
                if (a[i] != a[0]) {
                    cout << i + 1 << '\n';
                    break;
                }
            }
        } else {
            if (a[0] == a[2]) {
                cout << 2 << '\n'; // Second one is unique
            } else {
                cout << 1 << '\n'; // First one is unique
            }
        }
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read the number of test cases.
  - For each test case:
      - Input `n` numbers.
      - All numbers except one are equal.
      - If the first two numbers are equal, search for the one that differs.
      - If not, compare with the third number to determine which of the first three is unique.
  - Print the 1-based index of the unique number (the "spy").

  ✅ Time Complexity: O(n) per test case (but early break optimizes it).
  ✅ Space Complexity: O(n) for storing the array.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
