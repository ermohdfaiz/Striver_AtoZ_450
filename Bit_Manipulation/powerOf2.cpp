/*Given a non-negative integer N.
The task is to check if N is a power of 2.
More formally, check if N can be expressed as 2x for some x.*/

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if (n == 0) {
            return false;
        }
        if ((n & (n-1)) == 0) {
            return true;
        } else {
            return false;
        }    
        
    }
};

int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}