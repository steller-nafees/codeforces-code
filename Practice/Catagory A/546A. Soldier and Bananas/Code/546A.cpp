//============================================================================
// 546A. Soldier and Bananas - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates how much money the soldier needs to borrow
// to buy all bananas
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

int main()
{
    FAST_IO;

    int k,n,w;
    cin>>k>>n>>w;

    int price = 0, borrow = 0;

    for(int i=1; i<=w; i++)
    {
        price += i*k;
    }

    if(price > n)
    {
        borrow = price - n;
    }
    else
    {
        borrow = 0;
    }
    cout<<borrow<<endl;


    return 0;
}

/*
  ## 💡 Solution Logic
  - The total cost to buy `w` bananas with the price of the i-th banana being `i*k` is the sum:
      total += i*first banana price
  - If the soldier doesn't have enough money (`n`), he needs to borrow the difference:
      borrow = max(0, total - n)
*/


/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
