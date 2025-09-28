//============================================================================
// Codeforces Div-3 June 17, 2025
// A. Letter Home - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates the minimum number of steps required to visit all
//              specified positions on the X-axis starting from position `s`.
//              In each move, you can go to pos+1 or pos−1. The goal is to
//              visit all positions given in the array at least once in the
//              minimum number of steps.
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
        int n, s;
        cin >> n >> s;

        vector<int> x(n);
        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        int min_x = x[0];
        int max_x = x[n - 1];

        int steps = (max_x - min_x) + min(abs(s - min_x), abs(max_x - s));
        cout << steps << endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read number of test cases `t`.
  - For each test case:
      - Read `n` (number of required positions) and `s` (starting position).
      - Read array `x` of required positions (sorted and distinct).
      - Calculate `min_x` and `max_x` (first and last position to visit).
      - Minimum steps = (max_x - min_x) + min(|s - min_x|, |s - max_x|)
        → Go to closer end and walk across the entire segment.
  - Print the result for each test case.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
