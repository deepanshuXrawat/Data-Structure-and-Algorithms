#include <iostream>
#include <math.h>
using namespace std;
void printbinary(unsigned int n);

int main()
{
    // printbinary(5);

    // decimal to binary
    int n;
    cout << "Enter a decimal no: ";
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
    cout << endl;
    
    
    // binary to decimal
    
    int a;
    cout << "Enter a binary no: ";
    cin >> a;

    int b = 0;
    int res = 0;

    while (a != 0)
    {
        if (a & 1)
        {
            res = res + pow(2, b);

        }
        a = a/10;
        b++;
        
    }
    cout << res;
    



}


// function to convert decimal to binary
void printbinary(unsigned int n)
{
    for (int i = 31; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
}