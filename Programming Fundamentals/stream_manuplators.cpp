#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{

    cout << "\t\tWelcome to our Store\n" << endl;



    //defining variables for first product
    string item1;
    int item1_quantity;
    double item1_unit_price = 20.50;

    //taking input for first product
    cout << "Enter the name of the product: ";
    cin >> item1;
    cout << "Enter the quantity of the product: ";
    cin >> item1_quantity;

    //defining variables for second product
    string item2;
    int item2_quantity;
    double item2_unit_price = 15.75;

    //taking input for second product
    cout << "Enter the name of the product: ";
    cin >> item2;
    cout << "Enter the quantity of the product: ";
    cin >> item2_quantity;

    //defining variables for third product
    string item3;
    int item3_quantity;
    double item3_unit_price = 25.00;

    //taking input for third product
    cout << "Enter the name of the product: ";
    cin >> item3;
    cout << "Enter the quantity of the product: ";
    cin >> item3_quantity;

    //displaying the purchased products
    cout << "\t\tYou Purchased" << endl;
    cout << "******************************************************" << endl;
    cout << right << setw(15) << "Product Name";
    cout << left << setw(15) << "Quantity";
    cout << left << setw(15) << "Unit Price";
    cout << left << setw(15) << "Toltal Price" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << right << setw(15) << item1 << left << setw(15) << item1_quantity << left << setw(15) << item1_unit_price << left << setw(15) << item1_quantity * item1_unit_price << endl;
    cout << right << setw(15) << item2 << left << setw(15) << item2_quantity << left << setw(15) << item2_unit_price << left << setw(15) << item2_quantity * item2_unit_price << endl;
    cout << right << setw(15) << item3 << left << setw(15) << item3_quantity << left << setw(15) << item3_unit_price << left << setw(15) << item3_quantity * item3_unit_price << endl;

    const double sales_tax_rate = 0.07;
    double sales_tax = (item1_quantity * item1_unit_price * sales_tax_rate) + (item2_quantity * item2_unit_price * sales_tax_rate) + (item3_quantity * item3_unit_price * sales_tax_rate);
    cout << "Sales Tax: $" << sales_tax << endl;

    double Final_total = (item1_quantity * item1_unit_price) + (item2_quantity * item2_unit_price) + (item3_quantity * item3_unit_price) + sales_tax;
    cout << "Final Total: $" << Final_total << endl;

    cout << "******************************************************" << endl;
    return 0;
}