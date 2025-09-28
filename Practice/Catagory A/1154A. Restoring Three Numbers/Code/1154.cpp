//============================================================================
// 1154A. Restoring Three Numbers - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given four integers (sums of some triplets), restore the original
//              three numbers that were used to create these sums.
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
    ll a[4];
    for(int i=0; i<4; i++)
        cin >> a[i];
    sort(a, a + 4);

    for(int i = 0; i < 3; i++)
    {
        cout << a[3] - a[i] << " ";
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  - Given 4 integers where the largest is the sum of the 3 unknowns: a, b, c.
  - Let the sorted array be: [x1, x2, x3, sum]
  - Then: a = sum - x3, b = sum - x2, c = sum - x1
  - Output a, b, and c.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
