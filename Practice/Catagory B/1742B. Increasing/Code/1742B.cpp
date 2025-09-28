//============================================================================
// 1742B. Increasing - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines if all elements in the array are distinct.
//              If so, the array can be rearranged in strictly increasing order.
//              Outputs "YES" if all elements are unique, "NO" otherwise.
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

void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    bool duplicate = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            duplicate = true;
            break;
        }
    }

    if (!duplicate)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    FAST_IO;

    int t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Sort the array to bring duplicates together.
  - Traverse the sorted array:
      - If any two consecutive elements are equal, the array is not strictly increasing.
  - Output "NO" if duplicates exist, otherwise "YES".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
