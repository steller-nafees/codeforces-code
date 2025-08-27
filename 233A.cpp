//============================================================================
// Problem  : 233A - Perfect Permutation (Codeforces)
// Author   : H. M. Na fees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   A permutation p of size n is called *perfect* if for every i (1 ≤ i ≤ n),
//   p[p[i]] = i and p[i] ≠ i.
//
//   Task: Given n, print any perfect permutation of length n,
//   or -1 if no such permutation exists.
//
// Input:
//   - n (1 ≤ n ≤ 100)
//
// Output:
//   - A perfect permutation of size n, or -1 if impossible.
//
// Constraints:
//   - Time limit: 1 second
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  In the name of Allah, the Most Gracious, the Most Merciful
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                cout << i + 2;
            else
                cout << i;
            cout << " ";
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
  💡 Solution Logic:
  - A perfect permutation exists only if n is even.
  - Construction:
      • Pair up indices (1 with 2, 3 with 4, …).
      • Swap each pair → this ensures p[p[i]] = i and no element maps to itself.
  - If n is odd → impossible → print -1.
  - Time complexity: O(n).
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
