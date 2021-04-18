//Programmer: Matt Brundage II
//Date: 4/18/21
//Filename: PassbyFunction.cpp

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototype
void displayResult();
void displayCost();

int main()
{
    double totalCst, qty, price, dscnt;

    //Request User Input
    cout << "Please Enter Product Price: ";
    cin >> price;
    cout << "Please Enter Product Quantity: ";
    cin >> qty;

    //Call displayResult Function
    displayResult();

    //Call displayCost Fuction
    displayCost();

    return 0;

    //Display complete message
    cout << "Cost Program Completed." << endl;

}   //End Program

//*****Function Definitions*****//
void displayResult()
{
    totalCst = price * qty;

    //Calculate Discount
    if(totalCst > 100.00)
    {
        dscnt = (totalCst * .05);
        totalCst = totalCst - dscnt;
    }
}//End displayResult

void displayCost()
{
     //Display Result
    cout << fixed << setprecision(2);
    cout << "The total cost of this product is: $" << totalCst << " and the individual cost is: $" << price << endl;
}//End displayCost