//============================================================================
// 155A. I_love_%username% - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts how many times the player breaks their record by scoring
//              better or worse than all previous performances.
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

    int n, min, max;
    cin >> n;

    int arr[n];
    int ama = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i == 0)
        {
            min = arr[i];
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
            ama++;
        }
        if(arr[i] > max)
        {
            max = arr[i];
            ama++;
        }
    }
    cout << ama << endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  - The first score is the initial record (both min and max).
  - Loop through the remaining scores:
      - If a new score is higher than all previous, update `max` and count it.
      - If it's lower than all previous, update `min` and count it.
  - Finally, print the number of times the player broke their own record.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
