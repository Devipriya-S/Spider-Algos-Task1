//Program 4 - Complete the pattern task
#include <iostream>
using namespace std;
#include <stdio.h>

void pattern(int n)
{
    int mid =(n/2+1), j;
    
    for(int i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
	    //mid variable is used to determine when to print "*" and space.
            if((j<=mid)||((n-mid+1)<=j)||(i==1)||(i==n))
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<"\n";
        if(i>(n/2))
             mid++;
        else
             mid--;
    }
}

int main()
{
    int t;
    cin>>t;
    int n[t];
    for (int i=0; i<t; i++)
        cin>>n[i];
    for(int i=0; i<t; i++)
    {
        pattern(n[i]); //call for each input variable
    }

    return 0;
}