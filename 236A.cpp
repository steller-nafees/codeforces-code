
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int let[26] = {0};
    int a;

    for(int i=0 ; i<s.length(); i++)
    {
        a = s[i] - 'a';
        let[a]++;
    }

    int letter=0;
    for(int i=0; i<26; i++)
    {
        if(let[i] != 0)
        {
            letter++;
        }
    }

    if(letter%2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }



    return 0;
}



