#include<iostream>
using namespace std;
int main()
{
	//initializing the datatypes
	const int hourly_rate = 25;
	int hours_worked;
	int overtime_hours;
	const int overtime_rate = 1.5 * hourly_rate;
	const double state_tax = 0.04;
	const double federal_tax = 0.12;
	const double social_security_tax = 0.062;
	double gross_pay;
	double state_tax_amount;
	double federal_tax_amount;
	double social_security_tax_amount;
	double total_deduction;
	double net_pay;

	//taking input from user
	cout << "Enter the number of hours worked: ";
	cin >> hours_worked;
	cout << "\nEnter the number of overtime hours worked: ";
	cin >> overtime_hours;

	//calculating the gross pay, tax amounts, total deduction and net pay
	gross_pay = (hours_worked * hourly_rate) + (overtime_hours * overtime_rate);
	state_tax_amount = gross_pay * state_tax;
	federal_tax_amount = gross_pay * federal_tax;
	social_security_tax_amount = gross_pay * social_security_tax;
	total_deduction = state_tax_amount + federal_tax_amount + social_security_tax_amount;
	net_pay = gross_pay - total_deduction;

	//displaying the results
	cout << "Gross Pay: $" << gross_pay << endl;
	cout << "State Tax Amount: $" << state_tax_amount << endl;
	cout << "Federal Tax Amount: $" << federal_tax_amount << endl;
	cout << "Social Security Tax Amount: $" << social_security_tax_amount << endl;
	cout << "Total Deduction: $" << total_deduction << endl;
	cout << "Net Pay: $" << net_pay << endl;

	return 0;
}