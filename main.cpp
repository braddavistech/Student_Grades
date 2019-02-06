//
//  main.cpp
//  StudentGrades
//
//  Created by Brad Davis on 2/6/19.
//  Copyright © 2019 Brad Davis. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct individualStudent {
    string name;
    string rollNo;
    int total;
    float perc;
};

void print(individualStudent &studentList) {
        cout << "\n*Details of student*\n";
        cout << "  Name: "<< studentList.name << "\n  Roll Number: " << studentList.rollNo << "\n  Total Points Earned: " << studentList.total << "\n  Current Grade: " << studentList.perc << "\n\n";
}


int main(int argc, const char * argv[]) {
    
    int n, assignments;
    std::vector<individualStudent> studentList;

    cout << "\nEnter total number of students: \n";
    cin >> n;
    cout << "\nEnter number of assignments: \n";
    cin >> assignments;
    string nameArray[n], rollArray[n], name, rollNo;
    
    int total, indivGrade, i, a;
    float perc;
    
    
    for(i=0; i< n; i++){
        cout << "\n\n*Enter details of student " << (i+1) << "*\n";
        cout << "\nEnter name: \n" ;
        cin >> name;
        cout << "\nEnter roll number: \n";
        cin >> rollNo;
        total = 0;
        for(a=1; a<=assignments; a++){
            cout << "\nEnter grade out of 100 for assignment " << a << ": \n";
            cin >> indivGrade;
            total += indivGrade;
        }
        perc=(float)total/(assignments*100)*100;
        individualStudent newStudent;
        newStudent.name = name;
        newStudent.rollNo = rollNo;
        newStudent.total = total;
        newStudent.perc = perc;
        studentList.push_back(newStudent);
    }
    
    cout << endl;
    
    for(i=0;i< n; i++){
        print(studentList[i]);
    }

    
    return 0;
}
