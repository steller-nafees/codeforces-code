//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Beautiful Average
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 17, 2025 
//
// Problem Statement:
//   You are given an array a of length n.
//
//   Your task is to find the maximum possible average value of any subarray
//   of the array a.
//
//   Formally, for any indices l, r such that 1 ≤ l ≤ r ≤ n,
//   define the average of the subarray a_l, a_{l+1}, …, a_r as:
//       avg(l, r) = (1 / (r - l + 1)) * Σ_{i=l}^{r} a_i
//
//   You need to output the maximum value of avg(l, r) over all possible pairs (l, r).
//
//   It can be shown that the answer is always an integer.
//
// Input:
//   The first line contains a single integer t (1 ≤ t ≤ 10⁴) — 
//   the number of test cases.
//   The first line of each test case contains a single integer n (1 ≤ n ≤ 10) — 
//   the length of the array.
//   The second line contains n integers a₁, a₂, …, aₙ (1 ≤ aᵢ ≤ 10) — 
//   the elements of the array.
//
// Output:
//   For each test case, print a single integer — the maximum average value 
//   of any subarray.
//
// Constraints:
//   - 1 ≤ t ≤ 10⁴
//   - 1 ≤ n ≤ 10
//   - 1 ≤ aᵢ ≤ 10
//   - Time limit: 1 second
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
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
    int n; cin>>n;
    vl(a,n);
    INPUT_ARRAY(a,n);
    SORT_DESC(a);

    cout<<a[0]<<endl;
}

int main()
{
    FAST_IO;

    int t; cin>>t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
  💡 Solution Logic:
  - The problem asks for the maximum average of any subarray.
  - Since all elements are positive and small (1 ≤ aᵢ ≤ 10),
    the maximum average is simply the maximum element itself.
  - Sorting the array in descending order and outputting the first element
    (a[0]) gives the highest possible average.
  - Time Complexity: O(n log n) per test case (negligible for small n ≤ 10).
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
