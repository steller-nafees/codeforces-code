//============================================================================
// 677A. Vanya and Fence - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates the minimum width of the road Vanya and friends
//              can walk through without bending down based on their heights.
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

int main()
{
    FAST_IO;
    int n, h;
    cin >> n >> h;

    int width = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
            width += 2;
        else
            width++;
    }

    cout << width << endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - For each friend’s height:
      - If height > `h`, they need width = 2 to bend.
      - Otherwise, width = 1.
  - Sum the total width required.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
