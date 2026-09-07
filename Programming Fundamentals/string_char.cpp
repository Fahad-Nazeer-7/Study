#include<iostream>
#include<string>
using namespace std;
int main()
{
    //asking for age
    int age;
    cout << "Enter your age: ";
    cin >> age;
	cin.ignore(5,'\n');
    //asking for name 
    string full_name;
    cout << "Enter your Full name: ";
    getline(cin, full_name);
    //asking for gender
    char gender;
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    
    
    
    
    
    cin.ignore(10,'\n');

    //just a char
    char k;
    cout << "Enter a character: ";
    cin.get(k);

    //print the information
    cout << "Your age is: " << age << endl;
    cout << "Your full name is: " << full_name << endl;
    cout << "Your gender is: " << gender << endl;
    cout << "Your character is: " << k << endl;
}