//A. Teams - Codeforce

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1;
    cin.ignore();
    cin>>str2;

    int result = 0;
    for(int i=0; i<str1.length(); i++)
    {
        char a = tolower(str1[i]);
        char b = tolower(str2[i]);
        if(a == b)
        {
            result = 0;
        }
        else if(a < b)
        {
            result = -1;
            break;
        }
        else
        {
            result = 1;
            break;
        }
    }

    cout<<result<<endl;

    return 0;
}


/*

## 💡 Solution Logic

take 3 inputs and sum should be equal or greater that 2 for increment in solved
*/
