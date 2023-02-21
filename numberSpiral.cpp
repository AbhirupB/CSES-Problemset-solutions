#include<bits/stdc++.h>
using namespace std;

/*
observation based Q.
In this matrix that values are between 1 to n x n and 1 is always in the top left square.
Here, we see that odd columns and even rows have decreasing numbers and vice-versa.
Computation:
ODD COLUMN: max value is y*y
EVEN COLUMN: max value is y-1*y-1
ODD ROW: max value is x-1*x-1
EVEN ROW: max value is x*x
*/ 

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y, ans;
        cin>>x>>y;
        if(x<y){
            if(y % 2 != 0)
                ans = (y*y)-x+1;
            else
                ans = ((y-1)*(y-1))+x;
            cout<<ans<<"\n";
        }
        else{
            if(x % 2 != 0)
                ans = ((x-1)*(x-1))+y;
            else    
                ans = (x*x)-y+1;
            cout<<ans<<"\n";
        }
    }
}