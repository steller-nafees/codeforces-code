//A. Helpful Maths - Codeforce

#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    int one =0, two = 0, three = 0;
    int index = 0;
    for(int i=0; i<s.length(); i++)
    {
        char a = s[i];
        if(a == '1')
            one++;
        else if(a == '2')
            two++;
        else if(a == '3')
            three++;
    }

    int x = one+two+three;

    for(int i= 0; i<x; i++)
    {
        if(one != 0)
        {
            cout<<"1";
            one--;
        }
        else if(two != 0)
        {
            cout<<"2";
            two--;
        }
        else if(three != 0)
        {
            cout<<"3";
            three--;
        }
        if(i != x - 1)
            cout<<"+";
    }
    return 0;
}


/*

## 💡 Solution Logic

take 3 inputs and sum should be equal or greater that 2 for increment in solved
*/
