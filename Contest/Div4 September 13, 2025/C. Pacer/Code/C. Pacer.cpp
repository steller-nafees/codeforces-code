/*
بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
Start with the name of Allah
*/
//============================================================================
// C. Pacer (Codeforces 2148C)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Find the maximum points Farmer John can get in the FitnessGram
// Pacer Test, given a schedule of required locations at specific
// times.
//============================================================================
#include <bits/stdc++.h>
using namespace std;
// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
// Type aliases
using ll = long long;
using ull = unsigned long long;
void solve()
{
    ll m;
    int n;
    cin>>n>>m;
    vectora(n);
    vectorb(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    ll ans =0;
    ll ct = 0;
    int cs = 0;
    for(int i=0; i<n; i++)
    {
        ll delta = a[i] - ct;
        ll reqSide = abs(b[i] - cs);
        if(reqSide > delta)
        {
            ans = -1; // This case is theoretically impossible with given constraints
        }
        else
        {
            ans += reqSide + ((delta - reqSide)/2) * 2;
            ct = a[i];
            cs = b[i];
        }
    }
// For the remaining time from the last requirement to minute m,
// FJ can run every minute to maximize points.
    ans+=(m - ct);
    cout<<ans<<endl;
}
int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
💡 Solution Logic
Input the number of test cases t.
For each test case:
• Read the number of requirements n and total minutes m.
• Read the n requirements, each containing a time a[i] and a required side b[i].
• The problem is solved by iterating through the requirements and greedily
maximizing the number of runs in each time interval.
• Start at time 0 and side 0.
• For each interval between requirements (or from the start):
• Calculate the time elapsed (delta).
• Calculate the minimum number of runs (reqSide) needed to change
from the current side to the required side.
• The remaining time can be used for round trips, with each round trip
taking 2 minutes and giving 2 points.
• The total points for the interval is reqSide plus the maximum
number of additional round trips.
• After the last requirement, Farmer John can run every remaining minute
until minute m, so add m - ct points.
• The code correctly implements this greedy strategy.
Complexity: O(n) per test case, dominated by reading the requirements and the single loop.
*/
/*
Alhamdulillah, problem solved successfully!
الحمد لله الذي بنعمته تتم الصالحات
*/
