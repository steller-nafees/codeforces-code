//============================================================================
// 2125B - Left and Down - Codeforces Contest Div-2 22nd July,2025
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description:
//   There is a robot located at cell (a, b) on an infinite grid.
//   Misha wants to move it to (0, 0) by a series of moves.
//   In each move, Misha chooses integers dx and dy (0 ≤ dx, dy ≤ k)
//   and moves the robot dx cells left and dy cells down.
//   The cost of each distinct pair (dx, dy) used is 1 for the first time,
//   and 0 if reused.
//   Pairs (dx, dy) and (dy, dx) are considered different if dx ≠ dy.
//   The task is to find the minimum total cost to bring the robot
//   to (0, 0).
//
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using ll = long long;

// Custom gcd implementation for compatibility
ll gcd(ll a, ll b)
{
    while (b)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;

    ll g = gcd(a, b);
    ll steps = max((a + k - 1) / k, (b + k - 1) / k);

    // If the gcd is at least the number of steps needed,
    // one distinct pair is enough (cost = 1), else 2.
    if (g >= steps)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
    FAST_IO;

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}

/*
  ## 💡 Solution Logic:
  - We want to move the robot from (a,b) to (0,0) with moves (dx, dy),
    where 0 ≤ dx, dy ≤ k.
  - The cost is the number of distinct (dx, dy) pairs used.
  - The minimum number of moves required in x and y directions are
    ceil(a/k) and ceil(b/k) respectively.
  - The total moves needed is the max of these two.
  - gcd(a,b) represents the largest step size that divides both a and b,
    meaning we can use one single pair multiple times if gcd ≥ moves needed.
  - If gcd < moves needed, we need at least two distinct pairs.
  - Hence, the answer is either 1 or 2.
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
