//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int day = 0'
    int totalTexts = 0;
    int dailyTexts = 0.0;
    for (day = 1; day < 8; day += 1)
{
    cout << "how many test messages did you send on day "
        << day << "?";
    cin >> dailyTexts;
    totalTexts += dailyTexts;
}    //end for

average = static_cast<double>(totalTexts) / (day - 1);
    cout << fixed << setpricsion(0);
    cout << endl << "You sent approximately "
        << average << " text messages per day. " << endl;
    return 0;
} //end of main function
