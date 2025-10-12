//============================================================================
// Platform      : Codeforces 
// Problem Title : A. MEX Partition
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 12, 2025 
//
// Problem Statement:
//   Let a partition of a multiset B be a collection of multisets s1,s2,…,sk
//   such that each element appears the same number of times in B and across
//   all of s1,s2,…,sk.
//
//   A partition is called valid if the MEX of all multisets in the partition 
//   is the same. The score of a valid partition is the MEX of any multiset 
//   in the partition.
//
//   You are given a multiset A of size n. Find the minimum score over all 
//   valid partitions of A.
//
// Input:
//   Each test contains multiple test cases. 
//   The first line contains the number of test cases t (1 ≤ t ≤ 100).
//   Each test case contains:
//     - An integer n (1 ≤ n ≤ 100).
//     - A line with n integers A1, A2, …, An (0 ≤ Ai ≤ 100).
//
// Output:
//   For each test case, output the minimum score over all valid partitions.
//
// Constraints:
//   - 1 ≤ t ≤ 100
//   - 1 ≤ n ≤ 100
//   - 0 ≤ Ai ≤ 100
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
    int n;cin>>n;
    vector<int> a(102,0);
    for(int i=0;i<n;i++) 
    {
        int x ; cin>>x;
        a[x]++;
    }
    int mex = 0;
    while(a[mex] > 0) mex++;


    cout<<mex<<endl;
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
  - Count the frequency of each integer from 0 to 100.
  - Find the smallest non-negative integer (MEX) that does not appear in the array.
  - The minimum score of all valid partitions equals this MEX value.
  - Intuitively, since the MEX defines the missing smallest integer, 
    no partition can have a smaller consistent MEX than the smallest missing number.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
