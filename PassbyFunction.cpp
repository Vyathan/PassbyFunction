// Programmer: Matt Brundage II
// Date: 4/18/21
// Filename: PassbyFunction.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double totalCst, qty, price, dscnt;

    //Request User Input
    cout << "Please Enter Product Price: ";
    cin >> price;
    cout << "Please Enter Product Quantity: ";
    cin >> qty;

    //Calculate Result
    totalCst = price * qty;

    //Calculate Discount
    if(totalCst > 100.00)
    {
        dscnt = (totalCst * .05);
        totalCst = totalCst - dscnt;
    }

    //Display Result
    cout << "The total cost of this product is: $" << totalCst << " and the individual cost is: $" << price << endl;

    return 0;

    //Display complete message
    cout << "Cost Program Completed." << endl;
    
}   //End Program
