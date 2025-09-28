//============================================================================
// 1829B. Blank Space - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds the length of the longest contiguous sequence of zeros
//              in a binary array (where 0 = blank space and 1 = occupied).
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

    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> len;
        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zero++;
            }
            else if (a[i] == 1)
            {
                len.push_back(zero);
                zero = 0;
            }
        }

        // Push trailing zeros, if any
        len.push_back(zero);

        if (!len.empty())
            cout << *max_element(len.begin(), len.end()) << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}


/*
  ## 💡 Solution Logic
  - For each test case:
    - Traverse the array while tracking the length of contiguous 0's (blank spaces).
    - Store each run of zeros in a list when broken by a 1.
    - Push the final run at the end.
    - Output the maximum value from all zero runs.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
