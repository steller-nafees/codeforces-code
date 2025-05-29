//============================================================================
// 228A. Is your horseshoe on the other hoof? - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines the minimum number of horseshoes Valera needs to
//              buy such that all four are of different colors.
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

    int arr[4] ;

    int change = 0;
    for(int i= 0 ; i<4; i++)
    {
        cin>>arr[i];
    }
    for(int i= 0 ; i<4; i++)
    {
        int shoes = 0;
        for(int j=i; j<4; j++)
        {
            if(arr[i] == arr[j])// checking the frequency
                shoes++;
        }
        if(shoes > 1)//if frequency is higher than 1, need to change
            change++;
    }

    cout<<change<<endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Input four integers representing the colors of four horseshoes.
  - Count how many of them are duplicates by comparing each with the rest.
  - For every duplicate (frequency > 1), increment the counter.
  - The final result represents how many more distinct-colored shoes are needed.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
