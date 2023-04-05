#include<iostream>
using namespace std;
int main()
{
    int i, j, space;
    space = 6-1;
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=space; j++)    //this loop contain space from left side of windows with the help of cout<<" "
        {
            cout<<" ";  // jdr yeh spaces print ho gai ha udr kuch ni print ho ga usa sa aga print ho ga sab kuch
        }
        space--;
        for(j=1; j<=(2*i-1); j++)  //left space ka aga staric print karana han
        {
            cout<<"*";
        }
        cout<<endl;
    }

    space = 1;
    static int z = 10;
    for(int i = 1;i<=5;i++)
    {
        for(int j = 1;j<=space;j++)
        {
            cout<<" ";
        }
        space++;
        for(j=1; j<=(z - i); j++)  //left space ka aga staric print karana han
        {
            cout<<"*";
            
        }
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