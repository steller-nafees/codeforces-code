//============================================================================
// Platform      : Codeforces 
// Problem Title : 1844A - Subtraction Game
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 25, 2025 
//
// Problem Statement:
//   You are given two positive integers a and b (a < b).
//
//   For some positive integer n, two players play a game starting with a pile 
//   of n stones. They take turns removing exactly a or exactly b stones 
//   from the pile. The player who cannot make a move loses.
//
//   Your task is to find a positive integer n such that the second player 
//   to move in this game has a winning strategy — meaning no matter what the 
//   first player does, the second player can always force a win.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases.
//   Each of the following t lines contains two integers a and b (1 ≤ a < b ≤ 100).
//
// Output:
//   For each test case, output any positive integer n (1 ≤ n ≤ 10⁶)
//   such that the second player to move wins.
//
// Constraints:
//   - 1 ≤ t ≤ 100
//   - 1 ≤ a < b ≤ 100
//   - 1 ≤ n ≤ 10⁶
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
    INPUT_ll(a);
    INPUT_ll(b);

    cout<<a+b<<endl;

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
   - We are asked to find an integer n such that the *second* player has a winning strategy.
   - In this game, a player can remove either 'a' or 'b' stones on their turn.
   - If n = a + b, then regardless of what the first player does:
       • If they remove 'a', n becomes 'b' stones, allowing the second player to remove 'b' and win.
       • If they remove 'b', n becomes 'a' stones, allowing the second player to remove 'a' and win.
   - Therefore, n = a + b guarantees that the *second player* always wins.
   - For each test case, we simply output a + b.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
