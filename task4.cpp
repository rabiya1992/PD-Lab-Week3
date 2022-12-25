#include <iostream>
using namespace std;

main()
{string name;
 float subject1;
 float subject2;
 float subject3;
 float subject4;
 float subject5;
 float percentage;
 cout << "Enter Your Name: ";
 cin >> name;
 cout << "Enter subject 01 marks: ";
 cin >> subject1;
 cout << "Enter subject 02 marks: ";
 cin >> subject2;
 cout << "Enter subject 03 marks: ";
 cin >> subject3;
 cout << "Enter subject 04 marks: ";
 cin >> subject4;
 cout << "Enter subject 05 marks: ";
 cin >> subject5;
 percentage = ((subject1+subject2+subject3+subject4+subject5)*100)/500;
 cout << "Your Percentage: ";
 cout << percentage;



}
