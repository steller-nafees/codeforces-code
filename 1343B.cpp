//============================================================================
// 1343B. Balanced Array (Codeforces Round 634 Div. 3)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description:
//   Given an even integer n, construct an array of length n such that:
//     - The sum of the first n/2 elements equals the sum of the last n/2.
//     - All elements are distinct positive integers.
//   Approach:
//     - If n is not divisible by 4, output "NO" (impossible).
//     - Otherwise:
//         * Print "YES".
//         * First half: even numbers (2, 4, ..., n).
//         * Second half: odd numbers (1, 3, ..., n-3) plus one special odd
//           chosen to balance the sums.
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

void solve()
{
    int n; cin >> n;
    long long sumEvens = 0, sumOdds = 0;


    if (n % 4 == 0)
    {
        cout << "YES" << endl;

        // First half: even numbers, also compute sum
        for (int i = 1; i <= n / 2; i++)
        {
            cout << i * 2 << " ";
            sumEvens += i * 2;
        }

        // Second half: first (n/2 - 1) odds
        for (int i = 1; i < n / 2; i++)
        {
            cout << i * 2 - 1 << " ";
            sumOdds += (i * 2 - 1);

        }

        // Last odd balances the array
        int last = sumEvens - sumOdds;
        cout << last << endl;
    }
    else
    {
        cout << "NO"<<endl;
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
  💡 Solution Logic
  - Works only if n is divisible by 4.
  - First half = n/2 even numbers → sum = n/2 * (n/2 + 1).
  - Second half = (n/2 - 1) odd numbers + one last odd.
  - last odd = sumEvens - sumodds).
  - Ensures equal sums and distinct positive integers.
  - Time complexity: O(n) per test case.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
