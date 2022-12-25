#include <iostream>
using namespace std;

main()
{float time;
 float acceleration;
 float initialVelocity;
 float finalVelocity;
 cout << "Enter Time: ";
 cin >> time;
 cout << "Enter Acceleration: ";
 cin >> acceleration;
 cout << "Enter Intial Velocity: ";
 cin >> initialVelocity;
 finalVelocity = (acceleration*time)+initialVelocity;
 cout << "Final Velocity: ";
 cout << finalVelocity;
 

}
