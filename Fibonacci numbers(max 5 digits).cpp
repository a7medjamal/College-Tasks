#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//Fibonacci numbers (max 5 digits)
int main()
{
    int last=0,next=1,sum = 0;
    while(sum < 99999)
    {
        cout << sum << " ";
        last = next;
        next = sum;
        sum = last+next;
    }
    _getch();
}
//Provided by a7medjamal (ZA_GHOST)
