//============================================================================
// Problem  : 707A. Brain's Photos (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 21, 2025
//
// Description:
//   You are given a photo represented as an n × m matrix of characters. Each
//   character represents the color of a pixel and can be one of the following:
//     - 'C' (cyan), 'M' (magenta), 'Y' (yellow)  → colored
//     - 'W' (white), 'G' (grey), 'B' (black)    → black & white
//
//   A photo is considered:
//     • "#Black&White" if it contains only W, G, B.
//     • "#Color" if it contains at least one C, M, or Y.
//
// Input:
//   - n, m (1 ≤ n, m ≤ 100) : dimensions of the photo
//   - an n × m grid of characters ('C', 'M', 'Y', 'W', 'G', 'B')
//
// Output:
//   - Print "#Black&White" if the photo is black-and-white
//   - Print "#Color" otherwise
//
// Constraints:
//   - Time limit: 2 seconds
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

// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve()
{
    int n, m;
    cin >> n >> m;
    char p[n][m];
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> p[i][j];
            if (p[i][j] == 'C' || p[i][j] == 'M' || p[i][j] == 'Y')
            {
                flag = false;
            }
        }
    }

    if (flag)
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
  💡 Solution Logic:
  - Scan all pixels of the photo.
  - If any pixel is 'C', 'M', or 'Y', then the photo is colored → print "#Color".
  - Otherwise, all pixels are 'W', 'G', or 'B' → print "#Black&White".
  - Time complexity: O(n × m), which is efficient for n, m ≤ 100.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
