//============================================================================
// Codeforces Round # (Div. 3)
// B. The Secret Number
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: August 21, 2025
//
// Problem Statement:
// Vadim has thought of a number x. To ensure that no one can guess it, he
// appended a positive number of zeros to the right of it, obtaining a new
// number y. Then he spread the number n = x + y.
// For a given n, find all possible x.
//
// Input:
//  - The first line contains t (1 ≤ t ≤ 10^4), number of test cases.
//  - Each test case consists of one integer n (11 ≤ n ≤ 10^18).
//
// Output:
//  - For each test case, if no valid x exists, print 0.
//  - Otherwise, print the count of possible x, followed by all valid x
//    in ascending order.
//
// Constraints:
//  - Time limit: 2 seconds
//  - Memory limit: 256 MB
//
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
    ull n; cin >> n;
    vector<ull> ans;

    ull a = 10;
    for (int k = 1; k <= 18; k++)
    {
        ull d = a + 1;
        if (n % d == 0)
        {
            ans.push_back(n / d);
        }
        if (k < 18)
            a *= 10;
    }

    if (ans.empty())
        cout << 0 << "\n";
    else
    {
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            if (i > 0) cout << " ";
            cout << ans[i];
        }
        cout << "\n";
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
  💡 Solution Logic:
  - Vadim forms n = x + y, where y = x * (10^k), k ≥ 1.
  - Then n = x * (10^k + 1).
  - So for each k (1 ≤ k ≤ 18), check if (10^k + 1) divides n.
  - If yes, then x = n / (10^k + 1) is valid.
  - Collect all valid x, sort them, and print.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
