//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Bitwise Reversion
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 10, 2025 
//
// Problem Statement:
//   You are given three non-negative integers x, y, and z. Determine whether 
//   there exist three non-negative integers a, b, and c satisfying the following 
//   three conditions:
//
//       a & b = x
//       b & c = y
//       a & c = z
//
//   where & denotes the bitwise AND operation.
//
// Input:
//   Each test contains multiple test cases. The first line contains the number 
//   of test cases t (1 ≤ t ≤ 10^4). Each test case consists of one line 
//   containing three integers x, y, and z (0 ≤ x, y, z ≤ 10^9).
//
// Output:
//   For each test case, output "YES" if there exists three non-negative integers 
//   a, b, and c satisfying the conditions, and "NO" otherwise.
//
// Constraints:
//   - 1 ≤ t ≤ 10^4
//   - 0 ≤ x, y, z ≤ 10^9
//   - Time limit: 1.5 seconds
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
    int x,y,z ; cin>>x>>y>>z;

    bool valid = true ;

    for(int i=0; i<31; i++)
    {
        int bitX = (x>>i) & 1;
        int bitY = (y>>i) & 1;
        int bitZ = (z>>i) & 1;

        if((bitX == 1 &&  bitY == 1 && bitZ == 0) || (bitX == 1 &&  bitY == 0 && bitZ == 1) || (bitX == 0 &&  bitY == 1 && bitZ == 1))
        {
            valid = false;
            break;
        }
    }
    cout<<(OUTPUT_CONDITION(valid))<<endl;
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
  - For each bit position, consider the bits of x, y, z.
  - If exactly two bits among (x_i, y_i, z_i) are 1, it is impossible to find 
    a_i, b_i, c_i satisfying the AND conditions simultaneously.
  - Otherwise, it is always possible to construct such a, b, c.
  - Iterate through all bits from 0 to 30 and check the above condition.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
