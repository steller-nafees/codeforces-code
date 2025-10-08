//============================================================================
// Platform      : Codeforces 
// Problem Title : 1932A. Thorns and Coins
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 08, 2025 
//
// Problem Statement:
//   During your journey through computer universes, you stumbled upon a very 
//   interesting world. It is a path with n consecutive cells, each of which can 
//   either be empty, contain thorns, or a coin. In one move, you can move one or 
//   two cells along the path, provided that the destination cell does not contain 
//   thorns (and belongs to the path). If you move to a cell with a coin, you pick 
//   it up.
//
//   You want to collect as many coins as possible. Find the maximum number of 
//   coins you can collect in the discovered world if you start in the leftmost cell.
//
// Input:
//   The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.
//   Then the descriptions of the test cases follow.
//   Each test case contains:
//     - One integer n (1 ≤ n ≤ 50) — the length of the path.
//     - One string of n characters ('.', '@', '*') representing the path.
//   It is guaranteed that the first cell is always empty ('.').
//
// Output:
//   For each test case, output a single integer — the maximum number of coins you can collect.
//
// Constraints:
//   - 1 ≤ t ≤ 1000
//   - 1 ≤ n ≤ 50
//   - The first cell is always '.'
//   - Time limit: 1 second
//   - Memory limit: 512 megabytes
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
#define vc(a,n) vector<char> a(n);
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
    vc(a,n); INPUT_ARRAY(a,n);

    int coins = 0 ; 
    bool thorn = false;
    for(int i=1; i<n; i++)
    {
        if(a[i] == '@') coins++;
        else if(a[i] == '*' && a[i+1] == '*') 
        {
            thorn = true;
            break;
        }
        else continue;
    }
    cout<<coins<<endl;
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
  - We traverse through the path starting from the leftmost cell (always '.').
  - Each '@' represents a coin; when encountered, we collect it by incrementing the coin counter.
  - '*' represents a thorn; if two consecutive thorns ('**') appear, the path is blocked beyond that point,
    so we stop traversal.
  - '.' is an empty cell — we can freely move past it.
  - We continue counting coins until we reach two consecutive thorns, then print the total coins collected.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
