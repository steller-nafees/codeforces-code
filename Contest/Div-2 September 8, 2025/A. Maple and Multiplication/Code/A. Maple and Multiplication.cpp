//============================================================================
// Codeforces Div-2 / September 9, 2025
// A. Maple and Multiplication
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 9, 2025
//
// Problem Statement:
// Maple has two positive integers a and b. She can perform the following operation
// any number of times (possibly zero) to make a equal to b:
//   • Choose any positive integer x, and multiply either a or b by x.
//
// Task:
// Determine the **minimum number of operations** required to make a equal to b.
// It is guaranteed that it is always possible.
//
// Input:
//  - The first line contains t (1 ≤ t ≤ 100), the number of test cases.
//  - Each test case consists of two integers a and b (1 ≤ a, b ≤ 1000)
//
// Output:
//  - For each test case, output a single integer: the minimum number of operations.
//
// Constraints:
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
    int a,b;
    cin >> a >> b;

    if(a == b)
    {
        cout<<0<<endl;
    }
    else if(a%b == 0 || b%a == 0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
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
  - If a == b, no operation is needed → 0.
  - If one number divides the other, multiply the smaller to match the larger → 1.
  - Otherwise, two multiplications always suffice (multiply each number to reach a common multiple) → 2.
  - This guarantees the **minimum number of operations** in all cases.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
