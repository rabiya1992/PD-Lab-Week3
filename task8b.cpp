#include <iostream>
using namespace std;

main()
{int user;
 int number;
 int rem1;
 int rem2;
 int rem3;
 int rem4;
 int div1;
 int div2;
 int div3;
 int div4;
 int addition;
 number = 10;
 cout << "Enter four digit number: ";
 cin >> user;
 rem1 = user%10;
 div1 = user/10;
 rem2 = div1%10;
 div2 = div1%10;
 rem3 = div2%10;
 div3 = div2/10;
 rem4 = div3%10;
 addition = rem1+rem2+rem3+rem4;
 cout << "Sum is: ";
 cout << addition;
} 

 