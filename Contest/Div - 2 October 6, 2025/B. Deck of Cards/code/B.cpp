//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Deck of Cards
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 06, 2025 
//
// Problem Statement:
// Monocarp has a deck of cards numbered from 1 to n. Initially, the cards 
// are arranged from smallest to largest, with 1 on top and n at the bottom.
//
// Monocarp performed k actions on the deck. Each action was one of three types:
//   1. remove the top card;
//   2. remove the bottom card;
//   3. remove either the top or bottom card.
//
// Determine the fate of each card: whether it remains in the deck, has been 
// removed, or might be both.
//
// Input:
// The first line contains a single integer t (1≤t≤10^4) — the number of test cases.
// Each test case consists of two lines:
//   - First line: two integers n and k (1≤k≤n≤2⋅10^5)
//   - Second line: a string s of length k, consisting of characters 0, 1, or 2.
//
// Additional constraint: the sum of n over all test cases doesn't exceed 2⋅10^5.
//
// Output:
// For each test case, print a string of length n. The i-th character should be:
//   '+' if the i-th card is still in the deck,
//   '-' if it has been removed,
//   '?' if its state is unknown.
//
// Constraints:
//  - 1 ≤ k ≤ n ≤ 2⋅10^5
//  - 1 ≤ t ≤ 10^4
//  - Sum of n over all test cases ≤ 2⋅10^5
//  - Time limit: 2 seconds
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

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int c0 = 0, c2 = 0;
    for (char ch : s) {
        if (ch == '0') c0++;
        else if (ch == '2') c2++;
    }

    long long minL = c0;
    long long maxL = c0 + c2;
    long long remCard = n - k;

    string result = "";

    for (int i = 0; i < n; i++) {
        long long leftC = i - remCard + 1;
        long long rightC = i;

        if (leftC > rightC) {
            result += '-';
            continue;
        }

        bool alwaysRemain = (minL >= leftC && maxL <= rightC);
        bool noOverlap = (maxL < leftC || minL > rightC);

        if (alwaysRemain) result += '+';
        else if (noOverlap) result += '-';
        else result += '?';
    }

    cout << result << '\n';
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
  - Count the number of guaranteed top removals (0s) and uncertain removals (2s).
  - Compute the minimum and maximum positions each card can occupy after k actions.
  - For each card:
      * If it is definitely removed, mark '-'.
      * If it is definitely remaining, mark '+'.
      * Otherwise, mark '?'.
  - Construct the resulting string based on these rules.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
