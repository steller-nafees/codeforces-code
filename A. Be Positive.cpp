//============================================================================
//============================================================================
// Codeforces Problem: A. Be Positive
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Date: September 25, 2025
//
// Problem Statement:
// Given an array a of n elements, where each element is −1, 0, or 1, you can
// perform the following operation any number of times: choose an index i and
// increase a[i] by 1.
//
// The goal is to make the product of all elements strictly positive
// (a1 * a2 * ... * an > 0) using the minimum number of operations.
//
// Input:
//  - The first line contains an integer t (1 ≤ t ≤ 10^4), the number of test cases.
//  - Each test case consists of:
//      • An integer n (1 ≤ n ≤ 8), the length of the array a.
//      • n integers a1, a2, ..., an (−1 ≤ ai ≤ 1).
//
// Output:
//  - For each test case, output a single integer: the minimum number of
//    operations required to make the product strictly positive.
//
// Constraints:
//  - It is guaranteed that it is always possible to achieve a strictly positive product.
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
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
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
    int n; cin >> n;
    vi(a,n);

    
    int m1 = 0, z = 0;
    for(int i = 0; i<n; i++) 
    {
      cin >> a[i];
      if(a[i] == -1)
        m1++;
      if(a[i] == 0)
        z++;
    }
    int ans = z + (m1 % 2) * 2;
    cout<< ans << endl;

    
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
  - Count the number of zeros (z) and the number of -1's (m1) in the array.
  - Each zero requires 1 operation to become 1.
  - If the number of -1's is odd, one of them must be incremented twice (-1 -> 0 -> 1) to make the product positive.
  - Therefore, the minimum number of operations is:
      operations = z + (m1 % 2) * 2
  - This guarantees the product of the array will be strictly positive with minimal operations.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
