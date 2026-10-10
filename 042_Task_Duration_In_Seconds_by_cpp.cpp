#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
    cout << "Please Enter Number Of Days, Number Of Hours, Number Of Minutes and Number Of Seconds to calculate Total Seconds!\n"
        << "Number Of Days: ";cin >> NumberOfDays;
    cout << "Number Of Hours: ";cin >> NumberOfHours;
    cout << "Number Of Minutes: ";cin >> NumberOfMinutes;
    cout << "Number Of Seconds: ";cin >> NumberOfSeconds;

    unsigned int TotalSeocnds = round(
        (NumberOfDays * 24 * 60 * 60) + 
        (NumberOfHours * 60 * 60) + 
        (NumberOfMinutes * 60) + 
        NumberOfSeconds);

	cout << "Total Seconds = " << TotalSeocnds << endl;
}