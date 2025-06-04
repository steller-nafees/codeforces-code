//============================================================================
// 144A. Arrival of the General - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds the minimum number of moves required to bring the tallest
//              soldier to the front and the shortest soldier to the end of the line.
//              Adjusts the count if their positions overlap.
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

    int n;
    cin>>n;

    int sec =0;
    int a[n];

    int max_h = 0;
    int min_h = 0;

    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] > a[max_h])
        {
            max_h = i;
        }
        if(a[i] <= a[min_h])
        {
            min_h = i;
        }
    }

    int ans = n-1 - min_h + max_h;
    if(max_h > min_h)//they crossed each other. means when they are neighbour their position is changes so subtract 1. like for tall short one get changed
        ans--;
    cout<<ans<<endl;

    return 0;
}


/*
  ## 💡 Solution Logic
  - Read the number of soldiers and their heights.
  - Identify the index of the tallest (leftmost max) and shortest (rightmost min).
  - Calculate moves: max_h to front (`max_h`), min_h to back (`n - 1 - min_h`).
  - If the tallest is ahead of the shortest (i.e., max_h > min_h), subtract 1 move to avoid overlap.
  - Output the total moves.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
