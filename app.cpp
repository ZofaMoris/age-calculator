#include <iostream>
 using namespace std;
int main()
{
    int age;
    int year;
    int month;
    int day;
    cout << "enter your birth day: ";
    cin >> day; 
    cout << "enter birth month: "; 
    cin >> month;
    cout << "enter birth year: ";
    cin >> year;
    cout << "your birth date is: " << day << "/" << month << "/" << year;     
    age =( (2024 - year) * 365.25 ) + (month * 30) + day; 
    cout << "\nage in years: " << age / 365.25;
    cout << "\nage in days: " << age; 
    cout << "\nage in hours: " << age * 24;
    return 0;
}
//george 3abeet