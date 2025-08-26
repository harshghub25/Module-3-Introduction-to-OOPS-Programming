#include <iostream>
using namespace std;

int main() {
    // --- VARIABLES ---
    int age = 20;             // integer variable
    float pi = 3.14;          // floating-point variable
    char grade = 'A';         // character variable
    string name = "Harshad";  // string variable

    // --- CONSTANTS ---
    const double GRAVITY = 9.81;   // constant double (cannot be changed)
    const int DAYS_IN_WEEK = 7;    // constant integer

    // --- OPERATIONS ---
    int nextYearAge = age + 1;         // arithmetic with variable
    float circleArea = pi * 5 * 5;     // area of circle with radius 5
    double weight = 60 * GRAVITY;      // force = mass * gravity

    // --- OUTPUT ---
    cout << "Name: " << name << endl;
    cout << "Age now: " << age << ", Age next year: " << nextYearAge << endl;
    cout << "Grade: " << grade << endl;
    cout << "Value of pi: " << pi << endl;
    cout << "Area of circle (r=5): " << circleArea << endl;
    cout << "Weight of 60kg mass on Earth: " << weight << " N" << endl;
    cout << "Days in a week: " << DAYS_IN_WEEK << endl;

   

    return 0;
}
