#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    unordered_map<string, double> scoreMap = {
        {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};

    string subject, score;
    double grade;
    double totalScore = 0.0, totalGrade = 0.0;

    for (int i = 0; i < 20; ++i)
    {
        cin >> subject >> grade >> score;
        if (score != "P")
        {
            totalGrade += grade;
            totalScore += scoreMap[score] * grade;
        }
    }

    cout << fixed << setprecision(6) << totalScore / totalGrade << '\n';
    return 0;
}
