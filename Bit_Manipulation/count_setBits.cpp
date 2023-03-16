#include<iostream>

using namespace std;


// n: input to count the number of set bits
int countSetBits(int N)
{
    long int count = 0;
    
    while (N > 0) {
        int lastBit = (N & 1);
        if (lastBit == 1) count ++;
        N /= 2;
    }
    return count;
}

int main()
{
    int n; cin >> n;
    cout << countSetBits(n) << endl;
    return 0;
}