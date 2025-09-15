/*
بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
Start with the name of Allah
*/
//============================================================================
// A. Sublime Sequence (Codeforces 2148A)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: For each test case, calculate the sum of a sequence of length n
// alternating between x and -x, starting with x.
//============================================================================
#include <bits/stdc++.h>
using namespace std;
// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
// Type aliases
using ll = long long;
using ull = unsigned long long;
void solve()
{
    int n,x ;
    cin>> x>>n;
    if(n%2 == 0)
        cout<<0<<endl;
    else
        cout<<x<<endl;
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
Input the number of test cases.
For each test case:
• Read the integers x and n.
• The sequence is x, -x, x, -x, ...
• If n is even, all x and -x pairs cancel each other out,
so the sum is 0.
• If n is odd, there will be one leftover x after all pairs
cancel out, so the sum is x.
• The code correctly checks if n is even or odd and prints the
corresponding sum.
Complexity: O(1) per test case.
*/
/*
Alhamdulillah, problem solved successfully!
الحمد لله الذي بنعمته تتم الصالحات
*/
