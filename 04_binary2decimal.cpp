#include <iostream>
#include <math.h>
using namespace std;
void printbinary(unsigned int n);

int main()
{
    printbinary(5);
    /*     int n;
    cin >> n;

    float ans = 0;
    int i = 0;


    while (n!=0)
    {

        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
 */

    return 0;
}


// function to convert decimal to binary
void printbinary(unsigned int n)
{
    for (int i = 31; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
}