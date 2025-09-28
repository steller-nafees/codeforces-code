//============================================================================
// Codeforces Div-3 August 10, 2025
// B. Alternating Series - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Given n, construct the lexicographically smallest "good" array.
//              An array is good if:
//                1. Adjacent elements have opposite signs.
//                2. Every subarray of length ≥ 2 has a positive sum.
//              Among all good arrays of length n, output the lexicographically
//              smallest sequence by absolute values.
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
  💡 Solution Logic:
  - For odd indices (1-based), choose -1 (negative).
  - For even indices, choose 3 (positive) except the last element for even n.
  - This alternating pattern (-1, 3, -1, 3, ...) satisfies:
      • Adjacent product < 0 (sign alternates).
      • Any subarray of length ≥ 2 has a positive sum.
  - For even n:
      • Fill first n-2 positions with (-1, 3, ...) and end with (-1, 2).
        This ensures minimal lexicographic absolute values while keeping the
        "good" property.
  - For odd n:
      • Simply alternate (-1, 3) for all n positions.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
