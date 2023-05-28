/***********************************************************************

   Assignment on Semester Result Processing using Object Oriented C++
                            Name: Nishat Mahmud
                              ID: B190305003
                     Course Code: 1201

***********************************************************************/




#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <stdbool.h>
#include <iomanip>
using namespace std;


class Course
{
public:
    string courseCode[8] = { "CSE-1101", "CSE-1102", "CSE-1103", "CSE-1105", "CSE-1107", "CSE-1108", "CSE-1109", "CSE-1111" };
    double credit, Marks, GP;
    string LG;
    bool Pass = true;

    double calculateGP();
    string calculateGrade();
};


/* Converts student marks to grade point */
double Course :: calculateGP()
{

    if(Marks >= 80 && Marks <= 100)
    {
        GP = 4;
    }

    else if(Marks >= 75 && Marks <= 79)
    {
        GP = 3.75;
    }

    else if(Marks >= 70 && Marks <= 74)
    {
        GP = 3.5;
    }

    else if(Marks >= 65 && Marks <= 69)
    {
        GP = 3.25;
    }

    else if(Marks >= 60 && Marks <= 64)
    {
        GP = 3;
    }

    else if(Marks >= 55 && Marks <= 59)
    {
        GP = 2.75;
    }

    else if(Marks >= 50 && Marks <= 54)
    {
        GP = 2.5;
    }

    else if(Marks >= 45 && Marks <= 49)
    {
        GP = 2.25;
    }

    else if(Marks >= 40 && Marks <= 44)
    {
        GP = 2;
    }

    else if(Marks < 40)
    {
        GP = 0;
        Pass = false;
    }

    return GP;
}


/* Converts student marks to letter grade */
string Course :: calculateGrade()
{

    if(Marks >= 80 && Marks <= 100)
    {
        LG = "A+";
    }

    else if(Marks >= 75 && Marks <= 79)
    {
        LG = "A";
    }

    else if(Marks >= 70 && Marks <= 74)
    {
        LG = "A-";
    }

    else if(Marks >= 65 && Marks <= 69)
    {
        LG = "B+";
    }

    else if(Marks >= 60 && Marks <= 64)
    {
        LG = "B";
    }

    else if(Marks >= 55 && Marks <= 59)
    {
        LG = "B-";
    }

    else if(Marks >= 50 && Marks <= 54)
    {
        LG = "C+";
    }

    else if(Marks >= 45 && Marks <= 49)
    {
        LG = "C";
    }

    else if(Marks >= 40 && Marks <= 44)
    {
        LG = "D";
    }

    else if(Marks < 40)
    {
        LG = "F";
    }

    return LG;
}



class Student
{
    char Name[40];
    string ID, LG, Result;
    double TGP, GPA, TCP, ECP;
    Course courseList[8];
    int counter;

public:
    void getData();
    void credit();
    double calculateTGP();
    double calculateTCP();
    double calculateGPA();
    double calculateECP();
    string calculateLG();
    double counterFunc();
    string calculateResult();
    void displayResult();


};


/* Input from user */
void Student :: getData()
{
    cout << setw(75) << "| SEMESTER RESULT PROCESSING SYSTEM |" << endl;
    cout << setw(75) << "-------------------------------------" << endl << endl <<endl;
    cout << setw(68) << "-----|USER INPUT|-----" << endl << endl;
    cout << setw(60) << "Enter Student Name: ";
    gets(Name);
    cout << setw(60) << "Enter Student ID: ";
    cin >> ID;
    credit();

    cout << endl << setw(75) << "Enter Marks for Individual Courses."<<endl;
    for(int i=0; i<8; i++)
    {
        double marksIndividual;
        Course obj;

        while(true)
        {
            cout << showpoint << fixed << setprecision(1) << setw(37) << "" << obj.courseCode[i] << " (Credit " << courseList[i].credit << ")" << setw(2) << ": ";
            cin >> marksIndividual;
            if(marksIndividual >=0 && marksIndividual <= 100)
            {
                break;
            }
            else
            {
                cout << setw(90) << "Wrong marks input! Marks should be from 0 to 100. Please input again..." << endl << endl;
            }
        }

        courseList[i].Marks = marksIndividual;
    }
}


/* Initialization of courses credit point */
void Student :: credit()
{
    courseList[0].credit = 3;
    courseList[1].credit = 1.5;
    courseList[2].credit = 3;
    courseList[3].credit = 3;
    courseList[4].credit = 3;
    courseList[5].credit = 1;
    courseList[6].credit = 3;
    courseList[7].credit = 3;
}


/* Calculated as the summation of all the subjects (credit point * grade point) */
double Student :: calculateTGP()
{
    TGP = 0;
    for(int i=0; i<8; i++)
    {
        TGP += courseList[i].credit * courseList[i].calculateGP();
    }
    return TGP;
}


/* Calculated as the summation of all the courses credit point */
double Student :: calculateTCP()
{
    TCP = 0;
    for(int i=0; i<8; i++)
    {
        TCP += courseList[i].credit;
    }
    return TCP;
}


/* Calculated as (TGP / TCP) */
double Student :: calculateGPA()
{
    GPA = 0;
    GPA = calculateTGP() / calculateTCP();
    return GPA;
}


/* Calculated as the summation of all the passed subjects credit point */
double Student :: calculateECP()
{
    ECP = 0;
    for(int i=0; i<8; i++)
    {
        if(courseList[i].Pass)
        {
            ECP += courseList[i].credit;

        }
    }
    return ECP;
}


/* Will be calculated from the function calculateGrade() */
string Student :: calculateLG()
{
    if(GPA == 4)
    {
        LG = "A+";
    }
    else if(GPA >= 3.75 && GPA <= 3.99)
    {
        LG = "A";
    }
    else if(GPA >= 3.5 && GPA <= 3.74)
    {
        LG = "A-";
    }
    else if(GPA >= 3.25 && GPA <= 3.49)
    {
        LG = "B+";
    }
    else if(GPA >= 3 && GPA <= 3.24)
    {
        LG = "B";
    }
    else if(GPA >= 2.75 && GPA <= 2.99)
    {
        LG = "B-";
    }
    else if(GPA >= 2.5 && GPA <= 2.74)
    {
        LG = "C+";
    }
    else if(GPA >= 2.25 && GPA <= 2.49)
    {
        LG = "C";
    }
    else if(GPA >= 2 && GPA <= 2.24)
    {
        LG = "D";
    }
    else if(GPA < 2)
    {
        LG = "F";
    }
    return LG;
}


/* Checks if student fails at least one course */
double Student :: counterFunc()
{
    counter = 8;
    for(int i=0; i<8; i++)
    {
        if(courseList[i].Pass)
        {
            counter = counter - 1;
        }
    }
    return counter;
}


/* if GPA < 2.0 then “Not Promoted”, else if GPA >= 2.0 with filed in subjects then “Conditionally Promoted”, else “Promoted” */
string Student :: calculateResult()
{
    if(GPA < 2)
    {
        Result = "Not Promoted";
    }
    else if(GPA >= 2 && counterFunc() != 0)
    {
        Result = "Conditionally Promoted";
    }
    else
    {
        Result = "Promoted";
    }
    return Result;
}


/* Display the processed result based on the given input of a student */
void Student :: displayResult()
{
    Course obj;
    cout << setw(72) << endl << endl << endl << endl << "-----|PROCESSED RESULT|-----" << endl;
    cout << setw(60) << endl << "Student Name: " << Name << endl;
    cout << setw(60) << "Student ID: " << ID << endl;
    cout << endl << showpoint << fixed << setprecision(2) << setw(90) << "Obtained Grade Point and Letter Grade for Individual Courses." << endl;

    for(int i=0; i<8; i++)
    {
        cout << setw(50) << "" << obj.courseCode[i] << ": " << courseList[i].calculateGP() << " (" << courseList[i].calculateGrade() << ")" << endl;
    }

    cout << endl << showpoint << fixed << setprecision(2) << setw(60) << "Total Grade Point: " << calculateTGP() << endl;
    cout << showpoint << fixed << setprecision(2) << setw(60) << "Total Grade Point Average: " << calculateGPA() << endl;
    cout << setw(60) << "Letter Grade: " << calculateLG() << endl;
    cout << showpoint << fixed << setprecision(1) << setw(60) << "Total Credit Point: " << calculateTCP() << endl;
    cout << showpoint << fixed << setprecision(1) << setw(60) << "Earned Credit Point: " << calculateECP() << endl;
    cout << setw(60) << "Comment: " << calculateResult() << endl;
    cout << setw(85) << endl << endl << endl << endl << "Thank you for using this program. Press any key to exit." << endl;
}



int main()
{
    Student ob = Student();
    ob.getData();
    ob.displayResult();
    getch();
}
