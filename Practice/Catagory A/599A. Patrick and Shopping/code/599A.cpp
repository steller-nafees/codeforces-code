//============================================================================
// Platform      : Codeforces 
// Problem Title : 599A - Patrick and Shopping
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 11, 2025 
//
// Problem Statement:
//   Today Patrick waits for a visit from his friend Spongebob. To prepare for 
//   the visit, Patrick needs to buy some goodies in two stores located near 
//   his house. There is a d1 meter long road between his house and the first 
//   shop and a d2 meter long road between his house and the second shop. Also, 
//   there is a road of length d3 directly connecting these two shops to each 
//   other. Help Patrick calculate the minimum distance that he needs to walk in 
//   order to go to both shops and return to his house.
//
//   Patrick always starts at his house. He should visit both shops moving only 
//   along the three existing roads and return back to his house. He doesn't mind 
//   visiting the same shop or passing the same road multiple times. The only goal 
//   is to minimize the total distance traveled.
//
// Input:
//   Three integers d1, d2, d3 (1 ≤ d1, d2, d3 ≤ 10^8) — the lengths of the paths.
//
// Output:
//   Print the minimum distance that Patrick will have to walk in order to visit 
//   both shops and return to his house.
//
// Constraints:
//   - 1 ≤ d1, d2, d3 ≤ 10^8
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
    ll d1,d2,d3; 
    cin >> d1 >> d2 >> d3;

    // Consider all possible minimal paths:
    long long a = d1 + d2 + d3;       // Home -> Shop1 -> Shop2 -> Home
    long long b = 2*(d1 + d2);        // Home -> Shop1 -> Home -> Shop2 -> Home
    long long c = 2*(d1 + d3);        // Home -> Shop1 -> Shop2 -> Shop1 -> Home
    long long e = 2*(d2 + d3);        // Home -> Shop2 -> Shop1 -> Shop2 -> Home

    ll ans = min({a, b, c, e});

    cout << ans << endl;  
}

int main()
{
    FAST_IO;

    //int t; cin>>t; 
    //while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Patrick can walk along the three roads connecting his house and the two shops.
  - There are four possible paths to consider:
      1. Visit each shop separately and return home: 2*d1 + 2*d2
      2. Go home -> shop1 -> shop2 -> home: d1 + d2 + d3
      3. Go home -> shop1 -> shop2 -> shop1 -> home: 2*(d1 + d3)
      4. Go home -> shop2 -> shop1 -> shop2 -> home: 2*(d2 + d3)
  - Compute all four distances and choose the minimum as the answer.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
