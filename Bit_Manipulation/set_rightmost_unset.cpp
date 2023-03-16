#include<iostream>

using namespace std;

int setBit(int N) {
    // Write Your Code here
    int last_bit;
    int i = 0;
    int x = N;
    
    while (x > 0) {
        last_bit = x & 1;
        
        if (last_bit == 1) {
            x = x >> 1;
            if (x == 0) {
                break;
            }
            i++;
        } else {
            break;
        }
    }
    N = N | (1 << i);
    
    return N;
}


int main()
{
    int n; cin >> n;
    cout << setBit(n) << endl;

    return 0;
}