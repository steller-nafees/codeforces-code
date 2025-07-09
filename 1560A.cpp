//============================================================================
// Problem: 1560A - Dislike of Threes (Codeforces)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds the k-th positive integer not divisible by 3 and not ending in 3.
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
        int k;
        cin >> k;
        int i = 0, j = 0;
        while (j != k)
        {
            i++;
            if (i % 3 != 0 && i % 10 != 3)
            {
                j++;
            }
        }
        cout << i << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read the number of test cases `t`.
  - For each test case:
    - Read an integer `k`.
    - Starting from 1, count how many integers satisfy:
        - Not divisible by 3
        - Do not end in digit 3
    - Stop when the count reaches `k`.
    - Output the k-th liked number.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
