#include <iostream>
#include <conio.h>
using namespace std;
// Simple program to calculate price of item
int main()
{
    float org_price,p_markup,sales_tax_rate;
    cout << "Enter original price" << endl;
    cin >> org_price;
    cout << "Enter percentage of mark-up price" << endl;
    cin >> p_markup;
    cout << "Enter sales tax rate" << endl;
    cin >> sales_tax_rate;
    cout << "The original price : " << org_price << endl;
    cout << "The precentage of the markup price : " << p_markup << endl;
    cout << "The selling price : " << org_price*(p_markup/100) << endl;
    cout << "The sales tax rate is : " << sales_tax_rate << endl;
    cout << "The sales tax : " << org_price*(sales_tax_rate/100) << endl;
    cout << "The final price of the item is : " << org_price+(org_price*(markup/100))+(org_price*(sales_tax_rate/100)) << endl;
    _getch(); // To prevent auto-termination of the program
}
// Provided by a7medjamal (ZA_GHOST)
