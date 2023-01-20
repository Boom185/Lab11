#include<iostream>
using namespace std;

int main(){
    char grade; // Declare variable to store student's grade
    int total = 0; // Declare variable to store the total number of students
    int count[5] = {}; // Declare array to count A, B, C, D, and F grades and initialize all elements to 0

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    do{
        cout << "Student [" << total + 1 << "]: ";
        cin >> grade; // The loop must be terminated when grade = '0'
        if(grade == 'A'){ // if grade is A
            count[0]++; // increment count of A grade
            total++; // increment total number of students
        }else if(grade == 'B'){ // if grade is B
            count[1]++; // increment count of B grade
            total++; // increment total number of students
        }else if(grade == 'C'){ // if grade is C
            count[2]++; // increment count of C grade
            total++; // increment total number of students
        }else if(grade == 'D'){ // if grade is D
            count[3]++; // increment count of D grade
            total++; // increment total number of students
        }else if(grade == 'F'){ // if grade is F
            count[4]++; // increment count of F grade
            total++; // increment total number of students
        }else if(grade == '0'){ // if grade is 0, the loop will terminate
            break;
        }else { // grade is wrong input
            cout << "Wrong input. Please input again." << endl;
        }
    }while(true);

    cout << "In total " << total << " students." << endl;
    cout << "A = " << count[0] <<", ";
    cout << "B = " << count[1] <<", ";
    cout << "C = " << count[2] <<", ";
    cout << "D = " << count[3] <<", ";
    cout << "F = " << count[4] << endl;
    return 0;
}
