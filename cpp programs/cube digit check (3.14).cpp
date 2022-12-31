#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int low,high,cube,d;
    cout << "Enter low then High :"<<endl;
    cin>>low>>high;
    for (int i=low; i<high; i++)
    {
    cube=0;
    int j = i;
    while(j>0)
    {
       d=j%10;
       cube+=d*d*d;
       j/=10;
    }
    if (cube==i)
      cout<< i <<" ";
    }
    return 0;
}
//Provided by a7medjamal (ZA_Ghost)
