//============================================================================
// 469A. I Wanna Be the Guy - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University, CSE
// Description: Checks if a player can pass all levels in a game, knowing that
//              two friends share the levels they can pass. If their combined
//              knowledge covers all levels, the player can complete the game.
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

// Debug (disable before submission)
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

    int p;
    cin>>p;

    vector<int> levels;

    for(int i=0; i<p;i++)
    {
        int x;
        cin>>x;
        if(find(levels.begin(),levels.end(),x) == levels.end())
            levels.push_back(x);
    }

    int q;
    cin>>q;

    for(int i=0; i<q;i++)
    {
        int y;
        cin>>y;
        if(find(levels.begin(),levels.end(), y) == levels.end())//find returns end() as an pointer if value isn't there
            levels.push_back(y);
    }

    if(levels.size() == n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read total number of levels `n`.
  - Then read `p` and `q` levels from two friends.
  - Store all unique levels using a vector (avoiding duplicates with `find()`).
  - If the combined unique levels equal `n`, the player can complete the game.
  - Output "I become the guy." if possible, else "Oh, my keyboard!".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
