#include <iostream>
#include <string>
using namespace std;

int main() {
    int numCourses; 
    double totalPoints = 0.0; 
    int totalCredits = 0; 

    cout << "ENTER THE NUMBER OF COURSES YOU'RE TAKING: ";
    cin >> numCourses;

    string subject[numCourses]; //  store course names
    string grade[numCourses]; //  store grades
    int credit[numCourses]; //  store credit hours

    
    for (int i = 0; i < numCourses; i++) {
        cout << "Enter the name of course number " << i + 1 << ": ";
        cin >> subject[i];
        cout << "Enter the grade in caps (A, B, C, D, F): ";
        cin >> grade[i];
        cout << "Enter credit hours: ";
        cin >> credit[i];

        
        int gradePoints = 0;
        if (grade[i] == "A") {
            gradePoints = 4;
        } else if (grade[i] == "B") {
            gradePoints = 3;
        } else if (grade[i] == "C") {
            gradePoints = 2;
        } else if (grade[i] == "D") {
            gradePoints = 1;
        } else if (grade[i] == "F") {
            gradePoints = 0;
        } else {
            cout << "Invalid grade entered." << endl;
            continue; 
        }

    
        totalPoints += gradePoints * credit[i];
        totalCredits += credit[i];
    }

    
    double gpa = 0.0;
    if (totalCredits > 0) {
        gpa = totalPoints / totalCredits;
    }


    cout << "Your GPA is: " << gpa << endl;

    return 0;
}