//============================================================================
// Problem  : 1873B - Good Kid (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   Slavic has an array of n digits, and his present is the product
//   of all these digits. He can add 1 to exactly one digit.
//   Task: Maximize the product after this operation.
//
// Input:
//   - t (1 ≤ t ≤ 10^4) : number of test cases
//   For each test case:
//     - n (1 ≤ n ≤ 9) : number of digits
//     - array a of length n, where 0 ≤ a[i] ≤ 9
//
// Output:
//   - For each test case, print the maximum product possible
//     after increasing exactly one digit by 1.
//
// Constraints:
//   - Small n (≤ 9), so brute force or greedy approaches are feasible
//   - Time limit per test: 1 second
//   - Memory limit per test: 256 MB
//============================================================================


/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  In the name of Allah, the Most Gracious, the Most Merciful
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
using ll = long long;

void solve()
{
    int n; cin>>n;
    vi(a,n);
    INPUT_ARRAY(a,n);
    SORT_ASC(a);

    ++a[0]; // Increment the smallest element since it maximizes the product
    int ans = 1;
    for(auto x: a) ans*=x;
    cout<<ans<<endl;
    
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*
   Solution Logic (for this implementation):

   1. Read the number of digits `n` and the array `a`.
   2. Sort the digits in ascending order.
   3. Increase the smallest digit by 1 (this gives the best
      multiplicative gain compared to increasing larger digits).
   4. Compute the product of all digits after this modification.
   5. Output the maximum product for each test case.

   Time complexity: O(n log n) due to sorting (but n ≤ 9, negligible).
   Memory complexity: O(n).
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
