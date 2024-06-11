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
    cout << "\nday of birth is ";
    if (age % 7 == 0)
    {
     cout << "monday";
    }
      else if (age % 7 == 1)
     {
      cout << "tuesday";
     }
     else if (age % 7 == 2)
     {
        cout << "wednesday";
     }
     else if (age % 7 == 3)
     {
        cout << "thursday";
     }
     else if (age % 7 == 4)
     {
       cout << "friday"; 
     }
     else if (age % 7 == 5)
     {
        cout << "saterday";
     }
     else 
     {
        cout << "sunday";
     }
    return 0;
}