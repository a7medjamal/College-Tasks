#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int cm,cmtoinch,inches,yards,feet,inch;
    cout << "Enter length in centimeters"
    cin >> cm;
    //convert cm to inche
    cmtoinch = (cm*0.393701);
    //output converted length
    cout << "Length in inches : " << cmtoinch << endl;
    inch = cmtoinch%12;
    yard = (cmtoinch/12)/3;
    feet = (b/12)%3;
    cout << "Length : " << yards << " yard(s), " << feet << " feet(foot), and " << inch << " inch(es)." << endl;
    _getch();  // To prevent auto-termination of the program
}
// Provided by a7medjamal (ZA_GHOST)
