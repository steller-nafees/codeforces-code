//============================================================================
// 617A. Elephant - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates the minimum number of steps the elephant needs
//              to reach his friend by taking 1 to 5 steps at a time.
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

    ll x;
    cin>>x;
    cout<<(x+4)/5<<endl;


    return 0;
}

/*
  ## 💡 Solution Logic
  As max move is 5 , so to get minimum step we need to divide with 5
  Now divisor cannot exceed n-1(n is the the number using to divide another)
  so divisor won't exceed 4. To round we add 4
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
