//============================================================================
// Codeforces Div-3 June 8, 2025
// B. No Casino in the Mountains - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds the maximum number of hikes of length k possible on
//              good weather days (0), with mandatory 1 day break between hikes.
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

    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int hikes = 0;

        // Iterate through possible hike start days
        // For example, if n=7 and k=3, valid start indices are 0,1,2,3,4
        for (int i = 0; i <= n - k; )
        {
            bool ok = true;
            // Check if next k days have good weather (0)
            for (int j = 0; j < k; j++)
            {
                if (a[i + j] == 1) // bad weather found, hike not possible
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                hikes++;         // Count this hike
                i += (k + 1);    // Skip k days of hike + 1 mandatory rest day
            }
            else
                i++;             // Try next day as potential start
        }
        cout << hikes << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic:
  - Read number of test cases.
  - For each test case, read number of days `n` and hike length `k`.
  - Read weather array: 0 for good weather, 1 for rain.
  - Iterate over days to find all valid starting points where
    the next `k` days have good weather.
  - For each valid hike, increment count and skip k + 1 days
    (hike + mandatory rest).
  - Print the total number of hikes possible.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
