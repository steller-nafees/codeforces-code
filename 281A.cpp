//281A.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; // apple
    cin>>s;

    int first=0;
    int letter = s[0];//letter = b= 98

    if(letter >= 97 && letter <= 122)
    {
        first = letter - 32; //Word - apple; a=98, A=65 ; first = 32
        s[0] = first;
    }

    cout<<s<<endl;


}

/*
Solved ALHAMDULILLAH
*/
