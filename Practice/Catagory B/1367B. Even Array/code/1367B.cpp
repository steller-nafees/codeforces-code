//============================================================================
// Platform      : Codeforces 
// Problem Title : 1367B - Even Array
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 15, 2025 
//
// Problem Statement:
//   You are given an array a[0…n−1] of length n consisting of non-negative integers. 
//   An array is called good if the parity of each index matches the parity of the 
//   element at that index. Formally, an array is good if for all i (0 ≤ i ≤ n−1), 
//   imod2 = a[i]mod2 holds.
//
//   In one move, you can swap any two elements of the array (not necessarily adjacent).
//   You must find the minimum number of moves needed to make the array good, 
//   or determine that it’s impossible.
//
// Input:
//   The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.
//   Each test case starts with an integer n (1 ≤ n ≤ 40) — the array length.
//   The next line contains n integers a0, a1, …, an−1 (0 ≤ ai ≤ 1000) — the array elements.
//
// Output:
//   For each test case, print a single integer — the minimum number of moves required 
//   to make the array good, or -1 if it's impossible.
//
// Constraints:
//   - 1 ≤ t ≤ 1000
//   - 1 ≤ n ≤ 40
//   - 0 ≤ ai ≤ 1000
//   - Time limit: 2 seconds
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
    vi(a,n); 
    INPUT_ARRAY(a,n);

    int odd = 0, even = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 != i%2 )
        {
            if(i%2 == 0) even++;
            else odd++;
        }
    }
    if(odd == even) cout<<odd<<endl;
    else cout<<-1<<endl;
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
  - The goal is to make every element's parity match its index parity.
  - Iterate through the array and count mismatches:
      • If an even index contains an odd number → increment `even`.
      • If an odd index contains an even number → increment `odd`.
  - If the count of mismatched even and odd indices is equal, 
    each swap between such positions fixes two mismatches, 
    so the answer is the number of mismatched pairs (`odd` or `even`).
  - Otherwise, it's impossible to fix, and the answer is -1.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
