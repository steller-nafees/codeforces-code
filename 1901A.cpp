//============================================================================
// Problem   : 1901A - Line Trip
// Platform  : Codeforces (Educational Round 158, Div. 2)
// Author    : H. M. Nafees N. Islam
// Institute : North South University (NSU), Department of CSE
// Date      : August 23, 2025
//
// Description:
//   You need to travel from point 0 to point x on a number line and return
//   to 0. Your car consumes 1 liter of fuel per unit distance. There are n
//   gas stations at positions a[0], a[1], ..., a[n-1] (none at 0 or x).
//   At each station, you fully refuel. The car starts with a full tank.
//
//   Task: Determine the minimum tank capacity needed to make the round trip.
//
// Input:
//   t                  — number of test cases (1 ≤ t ≤ 1000)
//   For each test case:
//     n, x             — number of gas stations, destination (1 ≤ n ≤ 50; 2 ≤ x ≤ 100)
//     a[0..n-1]        — sorted positions of gas stations: 0 < a₁ < … < aₙ < x
//
// Output:
//   For each test case, output a single integer: the minimal tank capacity.
//
// Constraints:
//   – Time limit: 2 seconds
//   – Memory limit: 256 MB
//
// Solution Logic:
//   The required tank size is the maximum distance between consecutive points:
//     • from 0 to the first gas station,
//     • between successive gas stations,
//     • from the last gas station to x,
//     • and also the return from x back to the last station,
//       which is equivalent to considering 2*(x − a[n−1]).
//   So the answer is:
//       max( a[0], max over i of (a[i] − a[i−1]), 2 * (x − a[n−1]) )
//
// Complexity:
//   – Time: O(n) per test case
//   – Memory: O(n)
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
using ll = long long;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    INPUT_ARRAY(a, n);

    int maxDest = max(a[0], (2 * (x - a[n-1])));
    for(int i = 1; i < n; i++)
    {
        maxDest = max(maxDest, a[i] - a[i-1]);
    }
    cout << maxDest << endl;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
  💡 Key Insight:
  - Check all consecutive gaps (start, middle, end).
  - Final answer = maximum of those gaps (with last one doubled).
  - Ensures enough fuel capacity for both forward and return trip.

  Alhamdulillah! Problem solved successfully.
  الحمد لله الذي بنعمته تتم الصالحات
*/
