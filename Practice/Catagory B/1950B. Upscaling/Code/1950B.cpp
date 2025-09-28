//============================================================================
// B. Upscaling (Codeforces 1950B)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given an integer n, output a 2n×2n checkerboard made of
//              2×2 squares alternating '#' and '.', with the top-left cell being '#'.
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

void solve()
{
    int n;
    cin >> n;
    string s = "";
    for (ll i = 0; i < n; i++)
    {
        s = "";
        for (ll j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
                s += "##";   // 2x2 block of '#'
            else
                s += "..";   // 2x2 block of '.'
        }
        // print each row twice to form vertical part of 2x2 block
        cout << s << endl;
        cout << s << endl;
    }
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Solution Logic
  - We need to output a 2n×2n checkerboard of 2×2 blocks.
  - Build each row string `s` of length 2n:
      • If (i+j) is even → add "##"
      • If (i+j) is odd  → add ".."
  - Print each row twice to make the 2×2 block structure.
  - Complexity: O((2n)^2) per test case, efficient for n ≤ 20.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
