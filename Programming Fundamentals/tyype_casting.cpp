#include<iostream>
using namespace std;
int main()
{
    //defining variables for 5 test scores
    int score1, score2, score3, score4, score5;

    //prompting user to enter 5 test scores
    cout << "Enter 1st test score: ";
    cin >> score1;
    cout << "\nEnter 2nd test score: ";
    cin >> score2;
    cout << "\nEnter 3rd test score: ";
    cin >> score3;
    cout << "\nEnter 4th test score: ";
    cin >> score4;
    cout << "\nEnter 5th test score: ";
    cin >> score5;

    //taking average of the 5 test scores
    double average = (static_cast<double>(score1 )+static_cast<double>(score2 )+static_cast<double>(score3 )+static_cast<double>(score4 )+static_cast<double>(score5 ))/ 5;
    
    //rounding the average to 1 decimal place
    average = round(average * 10) / 10; 
    cout << "The average of the 5 test scores is: " << average << endl;
    return 0;
}