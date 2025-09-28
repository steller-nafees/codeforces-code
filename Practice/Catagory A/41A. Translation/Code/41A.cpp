//============================================================================
// 41A. Translation - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks whether one string is the reverse of another
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

    string s,t;
    cin>>s;
    cin.ignore();
    cin>>t;
    cin.ignore();

    if(s.length() != t.length())
    {
        cout<<"NO"<<endl;
        return 0;
    }

    int len = s.length();
    bool flag = true;

    for(int i=0; i<len; i++)
    {
        if(s[i] != t[len - 1 - i])
        {
            flag = false;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  - Check if the second string is the reverse of the first string.
  - Loop through both strings and compare `s[i]` with `t[len - 1 - i]`.
  - If all characters match in reverse, print "YES", otherwise "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
