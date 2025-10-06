//============================================================================
// Platform      : Codeforces 
// Problem Title : A. Candies for Nephews
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 06, 2025 
//
// Problem Statement:
// Monocarp has three nephews. New Year is coming, and Monocarp has n
// candies that he will gift to his nephews.
//
// To ensure that none of the nephews feels left out, Monocarp wants to give 
// each of the three nephews the same number of candies.
//
// Determine the minimum number of candies that Monocarp needs to buy 
// additionally so that he can give each of the three nephews the same 
// number of candies. Note that all n candies that Monocarp initially has 
// will be given to the nephews.
//
// Input:
// The first line contains an integer t (1≤t≤100) — the number of test cases.
// Each test case consists of one line containing one integer n (1≤n≤100) — 
// the number of candies that Monocarp initially has.
//
// Output:
// For each test case, print one integer — the minimum number of candies that 
// Monocarp needs to buy additionally so that he can give each of the three 
// nephews the same number of candies.
//
// Constraints:
//  - 1 ≤ t ≤ 100
//  - 1 ≤ n ≤ 100
//  - Time limit: 1 second
//  - Memory limit: 256 MB
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
    if(n%3 == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<< 3 - (n%3) <<endl;
    }
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
  - If n is divisible by 3, no additional candies are needed.
  - Otherwise, the remainder when n is divided by 3 indicates how many 
    candies are missing to reach the next multiple of 3.
  - The minimum additional candies = 3 - (n % 3).
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
