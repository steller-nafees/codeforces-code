//============================================================================
// Platform      : Codeforces 
// Problem Title : 1996A - Legs
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 20, 2025 
//
// Problem Statement:
//   It's another beautiful day on Farmer John's farm.
//   After Farmer John arrived at his farm, he counted n legs. It is known 
//   only chickens and cows live on the farm, and a chicken has 2 legs while 
//   a cow has 4.
//   
//   Your task is to find the minimum number of animals Farmer John can have 
//   on his farm assuming he counted the legs of all animals.
//
// Input:
//   The first line contains single integer t (1 ≤ t ≤ 103) — the number of test cases.
//   Each test case contains an integer n (2 ≤ n ≤ 2⋅103, n is even) — the total number of legs.
//
// Output:
//   For each test case, output a single integer — the minimum number of animals.
//
// Constraints:
//   - 1 ≤ t ≤ 103
//   - 2 ≤ n ≤ 2⋅103
//   - n is even
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
    int temp = n; 

    int legs = 0, rem = 0;

    legs += (temp/4); 
    rem = temp % 4;

    if(rem >= 2){
        legs += (rem / 2);
    }
    cout<<legs<<endl;
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
  - Each cow has 4 legs and each chicken has 2 legs.
  - To minimize the total number of animals, use as many cows as possible.
  - Compute how many cows fit into n legs: cows = n / 4.
  - Compute the remaining legs: rem = n % 4.
  - If rem ≥ 2, add one chicken (or more if needed) to cover remaining legs.
  - The sum of cows and chickens gives the minimum number of animals.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
