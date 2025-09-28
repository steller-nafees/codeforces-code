//============================================================================
// 520A. Pangram - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks whether a given string is a pangram (contains every
//              letter of the English alphabet at least once).
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
    cin >> n;
    cin.ignore();

    string word;
    cin>>word;
    int freq[26] = {0};

    bool flag = true;
    for(int i=0; i < n; i++)
    {
        char ch = tolower(word[i]);
        int a = ch - 'a';
        freq[a]++;
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i] == 0)
        {
            flag = false;
            break;
        }
        else
        {
            flag = true;
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
  - Convert each character in the string to lowercase.
  - Count the frequency of each alphabet letter.
  - If any letter is missing (i.e., frequency is 0), it's not a pangram.
  - Output "YES" if all 26 letters are present; otherwise, "NO".
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
