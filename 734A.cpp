//============================================================================
// 734A. Anton and Danik - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines the winner based on number of games Anton and Danik won
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

int main() {
    FAST_IO;

    int n;
    cin>>n;

    string s;
    cin >> s;

    int d=0,a=0;
    for(int i=0 ; i<s.length(); i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        else if(s[i] == 'D')
        {
            d++;
        }
    }

    if(d>a)
    {
        cout<<"Danik"<<endl;
    }
    else if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}

/*
  ## 💡 Solution Logic
  Count the number of games Anton ('A') and Danik ('D') won from the input string.
  - If Anton won more, print "Anton".
  - If Danik won more, print "Danik".
  - If equal, print "Friendship".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
