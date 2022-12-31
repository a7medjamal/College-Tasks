#include <iostream>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;

//Check if number is prime or not
int main()
{
    cout << "Enter number" << endl;
    long long num;
    cin >> num;
    for (long long i = 2;i <= num/2;i++)
    {
        if (num % i == 0) // check if number is divisible or not
        {
            cout << "Not prime, divisible by " << i << endl;
            break;
        }
    }
    cout << "Number is prime" << endl;
    _getch();
}
//Provided by a7medjamal (ZA_GHOST)
