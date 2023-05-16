#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Get the current date
    time_t now = time(0);
    tm* currentDate = localtime(&now);

    // Read the user's birth year
    int birthYear;
    cout << "Enter your birth year: ";
    cin >> birthYear;

    // Read the user's birth month
    int birthMonth;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;

    // Read the user's birth day
    int birthDay;
    cout << "Enter your birth day: ";
    cin >> birthDay;

    // Calculate the age
    int currentYear = currentDate->tm_year + 1900;
    int currentMonth = currentDate->tm_mon + 1;
    int currentDay = currentDate->tm_mday;

    int age = currentYear - birthYear;

    // Check if the birthday hasn't occurred yet this year
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    // Print the age
    cout << "Your age is: " << age << " years" << endl;

    return 0;
}

