//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Circle of Apple Trees
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 10, 2025 
//
// Problem Statement:
//   There are n apple trees arranged in a circle. Each tree bears exactly one 
//   apple, and the beauty of the apple on the i-th tree is given by b_i for all 
//   1 ≤ i ≤ n. You start in front of tree 1.
//
//   At each tree, you may choose to either eat the apple or skip it. After making 
//   your choice, you move to the next tree: from tree i, you move to tree i+1 
//   for 1 ≤ i ≤ n−1, and from tree n, you move back to tree 1. This process 
//   continues indefinitely.
//
//   You may only eat an apple if its beauty is strictly greater than the beauty 
//   of the last apple you ate. You may skip apples and choose to eat them in a 
//   subsequent cycle.
//
//   Determine the maximum number of apples you can eat if you make optimal 
//   decisions.
//
// Input:
//   The first line contains the number of test cases t (1 ≤ t ≤ 500).
//   Each test case consists of two lines:
//     - The first line contains a single integer n (1 ≤ n ≤ 100), the number of 
//       apple trees.
//     - The second line contains n integers b_1, b_2, ..., b_n (1 ≤ b_i ≤ n), 
//       the beauty of the apples.
//
// Output:
//   For each test case, output a single integer representing the maximum number 
//   of apples you can eat.
//
// Constraints:
//   - 1 ≤ t ≤ 500
//   - 1 ≤ n ≤ 100
//   - 1 ≤ b_i ≤ n
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
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
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
    int n; 
    cin >> n;
    set<int> s;

    for(int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        s.insert(x);
    }

    // The maximum number of apples is the number of distinct beauties
    cout << s.size() << endl;
}

int main()
{
    FAST_IO;

    int t; 
    cin >> t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
  💡 Solution Logic:
  - The key observation is that you can eat at most one apple for each distinct 
    beauty because you can only eat apples in strictly increasing order of beauty.
  - Therefore, the maximum number of apples is equal to the number of distinct 
    values in the beauty array.
  - Use a set to count distinct beauties and output its size.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
