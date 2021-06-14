#include <iostream>

using namespace std;

int main()
{

    int requiredAge{18};
    int minimumAge{15};
    char answer{};
    bool accidents{false};
    bool ssn{false};
    bool parentalConsent{false};

    int appAge{};

    cout << "How old is the applicant?";
    cin >> appAge;

    if (appAge < requiredAge)
    {

        cout << "Does the applicant have parental consent?";
        cin >> answer;

        if (answer == 'y')
        {
            parentalConsent = true;
        }
    }

    cout << "Does the applicant have any accidents on record? Only (y/n)";
    cin >> answer;
    if (answer == 'y')
    {
        accidents = true;
    }

    cout << "Does the applicant have a valid ssn? Only (y/n)";
    cin >> answer;

    if (answer == 'y')
    {
        ssn = true;
    }

    cout << "The result of accidents is: " << accidents << endl;
    if (accidents == false && ssn == true && (appAge >= requiredAge || appAge > minimumAge && parentalConsent == true))
    {

        cout << "Congratulations! The applicant may work for us.";
    }
    else
    {
        cout << "Sorry, the applicant does not meet our requirements.";
    }

    return 0;
}