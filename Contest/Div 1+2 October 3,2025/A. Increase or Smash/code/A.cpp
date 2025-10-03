//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Increase or Smash
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 03, 2025 
//
// Problem Statement:
//   Geumjae has an array a consisting of n zeros. His goal is to transform it 
//   into a given target array using a minimum number of operations.
//
//   He can perform the following two types of operations any number of times, 
//   in any order:
//
//     1. Increase: Choose any positive integer x. Increase all elements of 
//        the array a by x. In other words, he chooses a positive integer x, 
//        and for each i (1≤i≤n), he replaces ai with ai+x.
//
//     2. Smash: Set some elements (possibly none or all) of the array a to 0. 
//        In other words, for each i (1≤i≤n), he either replaces ai with 0 
//        or leaves it as before.
//
//   Given the final target state of the array a, find the minimum total number 
//   of operations (both Increase and Smash) Geumjae needs to perform.
//
//   It can be shown that for any given final array, a sequence of operations 
//   always exists.
//
// Input:
//   The first line contains the number of test cases t (1≤t≤1000).
//   Each test case has two lines:
//     - First line: single integer n (1≤n≤100) — the number of elements in array a.
//     - Second line: n integers a1, a2, …, an (1≤ai≤100) — the target array.
//
// Output:
//   For each test case, output a single integer — the minimum number of operations required.
//
// Constraints:
//   - Time limit: 1 second
//   - Memory limit: 1024 MB
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
    int n; cin>>n;
    vi(a,n); INPUT_ARRAY(a,n);
    
    unordered_set<int> s(a.begin(), a.end());

    int k = (int)s.size();
    cout<<2*k - 1<<endl;
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
  - For each test case, read the target array.
  - Identify all distinct positive numbers in the array.
  - Each distinct number contributes at least one Increase operation.
  - Smash operations are needed to reset elements to zero when required.
  - Minimum total operations can be calculated as 2*k - 1, where k is the 
    number of distinct positive elements.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
