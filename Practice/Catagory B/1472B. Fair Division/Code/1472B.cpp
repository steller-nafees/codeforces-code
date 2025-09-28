//============================================================================
// Problem  : 1472B - Fair Division (Codeforces)
// Author   : H. M. Nafees N. Islam
// Institute: North South University (NSU), Department of CSE
// Date     : August 23, 2025
//
// Description:
//   Alice and Bob received n candies, each weighing either 1 or 2 grams.
//   They want to divide all candies fairly so that the total weight
//   of Alice's candies equals the total weight of Bob's candies.
//
//   Task: Determine whether it is possible to divide the candies fairly.
//
// Input:
//   - t (1 ≤ t ≤ 10^4) : number of test cases
//   For each test case:
//     - n (1 ≤ n ≤ 100) : number of candies
//     - array a of length n, where each a[i] is either 1 or 2 (weight of each candy)
//
// Output:
//   - For each test case, print "YES" if a fair division is possible,
//     otherwise "NO".
//
// Constraints:
//   - Total sum of n over all test cases ≤ 10^5
//   - Time limit per test: 2 seconds
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

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    for(auto i : a)
    {
        if(one <= two)
            one += i;
        else
            two += i;
    }
    cout<<((one == two) ? "YES" : "NO")<<endl;
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
   Solution Logic (based on this implementation):

   1. Read the number of candies `n` and their weights into array `a`.
   2. Sort the array in descending order so that heavier candies (2s) are considered first.
   3. Initialize two sums, `one` and `two`, to represent the total weight of the two groups.
   4. For each candy in the sorted array:
        - Add the candy to the group with the smaller current total.
        - This is a greedy approach to balance the two groups as we go.
   5. After all candies are distributed, compare the two group totals:
        - If `one == two`, print "YES" (fair division possible).
        - Otherwise, print "NO" (fair division not possible).
   6. Time complexity: O(n log n) due to sorting, plus O(n) for distribution.
   7. Memory complexity: O(n) for storing the array of candies.
*/

/*
  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
