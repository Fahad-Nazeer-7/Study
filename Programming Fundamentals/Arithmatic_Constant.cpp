#include <iostream>

using namespace std;

void Customers()
{
	cout << "\n\n\n\n";
	//initializing variables
	int Cust = 16500;
	const double weeklyCustPercent = 0.15;
	int weeklyCust = Cust * weeklyCustPercent; // result is in double and then it is converted to int
	cout << "Weekly Customers: " << weeklyCust << endl;
}
int main()
{
	//Declaring Variables
	const double tax_rate = 0.0675;
	const double tip_rate = 0.15;
	const double meal_cost = 88.67;
	double tax_amount = meal_cost * tax_rate;
	double tip_amount = meal_cost * tip_rate;
	double total_cost = meal_cost + tax_amount + tip_amount;
	cout << "Tip Amount: $" << tip_amount << endl;
	cout << "Tax Amount: $" << tax_amount << endl;
	cout << "Total Cost: $" << total_cost << endl;
	Customers();
	return 0;
}