#include <iostream>
using namespace std;


//Variables and Class
class studentinfo
{
    //Variables
private:

  int ID;
  float grade;
  char name[15];

public:

  void getStudentInformation (void);
  void putStudentInformation (void);
};

//This is where the information is shown
void
studentinfo::putStudentInformation (void)
{
  cout << "Student Information:" << endl;
  cout << "Name: " << name << endl;;
  cout << "Student ID: " << ID << endl;;
  cout << "Grade: " << grade << "%" << endl;
  cout << "" << endl;
}

//Place where you input the student information
void
studentinfo::getStudentInformation (void)
{
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter student ID: ";
  cin >> ID;
  cout << "Enter the percent that the student has: ";
  cin >> grade;

}




int
main ()
{
//Variables
  int amountofstudents;
  amountofstudents = 30;
  studentinfo std[amountofstudents];
  int TotalStudents, L;


  cout << "Enter the number of students in the class: ";
  cin >> TotalStudents;
  
//Loop to be able to put in information
  for (L = 0; L < TotalStudents; L++)
    {
      std[L].getStudentInformation ();
    }

//This is so the student details won't merge with the other lines when outputting
cout <<"" << endl;


//Loop to show information
  for (L = 0; L < TotalStudents; L++)
    {
      std[L].putStudentInformation ();
    }

  return 0;
}
