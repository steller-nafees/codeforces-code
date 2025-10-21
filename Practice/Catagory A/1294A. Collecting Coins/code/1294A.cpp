//============================================================================
// Platform      : Codeforces 
// Problem Title : 1294A. Collecting Coins
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 21, 2025 
//
// Problem Statement:
//   Polycarp has three sisters: Alice, Barbara, and Cerene. They are collecting coins.
//   Currently, Alice has a coins, Barbara has b coins, and Cerene has c coins. 
//   Polycarp returned from a trip with n coins and wants to distribute all of them
//   so that all sisters have the same number of coins.
//
//   That is, he wants to give A, B, and C coins to Alice, Barbara, and Cerene
//   respectively (A + B + C = n) such that a + A = b + B = c + C.
//
// Input:
//   The first line contains one integer t (1 ≤ t ≤ 10⁴) — the number of test cases.
//   Each test case contains four integers a, b, c, and n (1 ≤ a, b, c, n ≤ 10⁸).
//
// Output:
//   For each test case, print "YES" if Polycarp can distribute all n coins equally,
//   otherwise print "NO".
//
// Constraints:
//   - 1 ≤ a, b, c, n ≤ 10⁸
//   - 1 ≤ t ≤ 10⁴
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
    ll a,b,c,n; cin>>a>>b>>c>>n;
    ll coins = a + b + c + n; 
    if(coins % 3 != 0){
        cout<<"NO"<<endl; 
        return; 
    }
    else
    { 
        if(a > coins/3 || b > coins/3 || c > coins/3){
            cout<<"NO"<<endl; 
            return; 
        }
        else{
            cout<<"YES"<<endl; 
            return; 
        }
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
  - Read the integers a, b, c, and n for each test case.
  - Calculate the total number of coins: total = a + b + c + n.
  - To make all sisters have an equal number of coins, total must be divisible by 3.
  - Compute target = total / 3 (the equal number of coins each sister should have).
  - Check if any of the current values (a, b, c) exceed target — if so, it's impossible.
  - Otherwise, print "YES"; else, print "NO".
*/

 /*
   Alhamdulillah, problem solved successfully!
   الحمد لله الذي بنعمته تتم الصالحات
 */
