//Program 3 - Determine the final amount
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int n, r, x, y;
    cin>>n>>r>>x>>y;
    int workshop[n+1], pizza[n+1];
    long t=r;
    
    for(int i=0; i<n; i++)
    {
        cin>>workshop[i];
    }
    for(int i=0; i<n; i++)
    {   
	cin>>pizza[i];
	//if workshop happened on the day, check if pizza was eaten to make workshop successful. 
	//Then add the amount x else subtract y.
        if(workshop[i])
        {
            if(pizza[i]) 
                t+=x;
            else 
                t-=y;
        }    
    }
    //if final amount is greater than initial amount then "promoted" else "demoted"
    if (t>r)
        cout<<"promoted";
    else if (t<r)
        cout<<"demoted";
    else
        cout<<"no change";
}
