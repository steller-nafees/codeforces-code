//============================================================================
// 281A. Word Capitalization - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Converts the entire string to either uppercase or lowercase
//              depending on whether there are more uppercase or lowercase letters.
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

    string s;
    cin >> s;

    int upper=0, lower=0;
    for(int i=0; i<s.length() ; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
    }

    //Upper to Lower Case Convert
    if(upper > lower )
    {
        for(int i=0; i<s.length() ;i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                int a = s[i];
                a -= 32;//To Uppercase
                s[i] = a;
            }
        }
    }
    //lower to upper conversion
    else
    {
        for(int i=0; i<s.length() ;i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                int a = s[i];
                a += 32;//To Lowercase
                s[i] = a;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Count how many characters are uppercase and how many are lowercase.
  - If uppercase characters are more, convert the whole string to uppercase.
  - Otherwise, convert the whole string to lowercase.
  - ASCII arithmetic is used to perform the conversion manually.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
