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
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())


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
    int n;
    cin >> n;

    if (n % 2 == 0) {  // For even n
        if (n == 2) {
            cout << -1 << " " << 2 << endl; // Minimum known such array for n == 2
        } else {
            for (int i = 0; i < n - 2; i++) {
                // -1 and 3 are the minimum such pair that will follow the rules for any subarray
                if (i % 2 == 0)
                    cout << -1 << " ";
                else
                    cout << 3 << " ";
            }
            cout << -1 << " " << 2 << endl; // Finish with the minimum known such array for even n
        }
    } else {  // For odd n
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                cout << -1 << " ";
            else
                cout << 3 << " ";
        }
        cout << endl;
    }
}

int main()
{
    FAST_IO;

    int t;
    cin>>t;

    while(t--)
    {
        solve();
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
