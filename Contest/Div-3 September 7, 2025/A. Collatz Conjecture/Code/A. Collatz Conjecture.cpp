//============================================================================
// Codeforces Div-3 - September 9, 2025
// A. Collatz Conjecture
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 9, 2025
//
// Problem Statement:
// You are given an integer x after k iterations of the Collatz procedure:
//   • If the current number is even, divide it by 2.
//   • If the current number is odd, multiply by 3 and add 1.
// You forgot the initial value. Output any possible initial value of x
// that, after k iterations, results in the given final number.
//
// Input:
//  - t (1 ≤ t ≤ 400), number of test cases
//  For each test case:
//    - k (number of iterations), x (final value after k iterations)
//
// Output:
//  - For each test case, output any valid initial value.
//
// Constraints:
//  - 1 ≤ k, x ≤ 20
//  - Time limit: 1 second
//  - Memory limit: 256 MB
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
    ll k, x;
    cin >> k >> x;

    // Multiply by 2 k times to reverse k even steps
    for(int i = 0; i < k; i++)
    {
        x *= 2;
    }
    cout << x << endl;
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
  - To reverse the Collatz procedure for k steps:
    • If we always choose the even branch, we simply divide by 2 each step.
    • Therefore, multiplying the final number x by 2^k gives a valid initial value.
  - Since the problem allows **any valid initial value**, this method always works.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
