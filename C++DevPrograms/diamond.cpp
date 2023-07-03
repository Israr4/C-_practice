#include<iostream>
using namespace std;
int main()
{
    int i, j, space;
    int x = 0;
    space = 6-1;
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=space; j++)    //this loop contain space from left side of windows with the help of cout<<" "
        {
            cout<<" ";  // jdr yeh spaces print ho gai ha udr kuch ni print ho ga usa sa aga print ho ga sab kuch
        }
        for(j=1; j<=(i+x); j++)  //left space ka aga staric print karana han              or j <= i + new      (int new = 0;            new ++)
        {
            cout<<"*";
        }
        space--;
        x ++;
        cout<<endl;
    }

    space = 1;
    static int z = 10;
    for(i = 1;i<=5;i++)
    {
        for( j= 1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1; j<=(z - i); j++)  //left space ka aga staric print karana han
        {
            cout<<"*";
            
        }
        space++;
        z --;
        cout<<endl;
    }


    
    return 0;
}






































// space = 1;
    // for(i=1; i<=(6-1); i++)
    // {
    //     for(j=1; j<=space; j++)
    //     {
    //         cout<<" ";
    //     }    
    //     space++;
    //     for(j=1; j<=(2*(6-i)-1); j++)
    //     {
    //         cout<<"*";
    //     }    
    //     cout<<endl;
    // }