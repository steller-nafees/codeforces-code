//============================================================================
// Platform      : Codeforces 
// Problem Title : 1426A. Floor Number
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 23, 2025 
//
// Problem Statement:
//   Vasya goes to visit his classmate Petya. Vasya knows that Petya's apartment
//   number is n.
//
//   There is only one entrance in Petya's house and the distribution of apartments
//   is the following: the first floor contains 2 apartments, every other floor
//   contains x apartments each. Apartments are numbered starting from one, from
//   the first floor. I.e. apartments on the first floor have numbers 1 and 2,
//   apartments on the second floor have numbers from 3 to (x + 2), apartments on
//   the third floor have numbers from (x + 3) to (2⋅x + 2), and so on.
//
//   Your task is to find the number of floor on which Petya lives. Assume that
//   the house is always high enough to fit at least n apartments.
//
//   You have to answer t independent test cases.
//
// Input:
//   The first line of the input contains one integer t (1 ≤ t ≤ 1000) — 
//   the number of test cases. Then t test cases follow.
//   The only line of each test case contains two integers n and x (1 ≤ n, x ≤ 1000)
//   — the number of Petya's apartment and the number of apartments on each floor
//   of the house except the first one.
//
// Output:
//   For each test case, print the answer: the number of floor on which Petya lives.
//
// Constraints:
//   - 1 ≤ t ≤ 1000
//   - 1 ≤ n, x ≤ 1000
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
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
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
    INPUT_int(n);
    INPUT_int(x);

    int floor = 0;
    if(n <= 2)
    {
        floor = 1;
    }
    else
    {
        n -= 2; // exclude first two rooms
        floor = 1 + (n + (x-1))/x ; //ceil division
    }
    cout<<floor<<endl;
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
    Solution Logic:
   - The first floor always contains apartments 1 and 2.
   - For apartments greater than 2, we subtract the first two (n -= 2).
   - Each subsequent floor contains x apartments.
   - The floor number is then: 1 + ceil(n / x).
   - This can be computed as: floor = 1 + (n + (x - 1)) / x.
   - Print the result for each test case.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
