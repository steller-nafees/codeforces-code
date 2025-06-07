//============================================================================
// 443A. Anton and Letters - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Counts the number of distinct lowercase English letters
//              from a given set formatted as a string with braces.
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

    char line[1001];
    cin.getline(line, 1001);

    int freq[26] = {0};
    int dist = 0;

    for(int i=1;line[i] != '}' ; i++)
    {
        if(line[i] >= 'a' && line[i] <= 'z')
        {
            freq[line[i] - 'a']++;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i] >= 1)
            dist++;
    }
    cout<<dist<<endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Input is a string of lowercase letters enclosed in curly braces.
  - Ignore commas, spaces, and braces.
  - Count how many unique letters appear using a frequency array.
  - Output the count of distinct letters.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
