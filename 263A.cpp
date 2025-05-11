//263A. Beautiful Matrix- Codeforces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,value;
    for(int i=1; i<=5;i++)
    {
        for(int j=1; j<=5 ;j++)
        {
            cin>>value ;
            if(value == 1)
            {
                a= i;
                b= j;
            }
        }
    }
    int moves = abs(a-3) + abs(b-3);
    cout<<moves<<endl;
    return 0;
}


/*

## 💡 Solution Logic

int moves = abs(a-3) + abs(b-3); because middle = (3,3)
*/
