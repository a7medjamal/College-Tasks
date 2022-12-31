#include <iostream>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;

//Find GCD using Brute-Force approach
int main()
{
    int n1,n2;
    cout << "Enter two numbers" << endl;
    cin >> n1 >> n2;
    int i = 1;
    int mn = min(n1,n2);
    int gcd = 0;
    while(i <= mn)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
        i++;
    }
    cout << "GCD is : " << gcd << endl;
    _getch();
}
//Provided by a7medjamal (ZA_GHOST)
