#include <iostream>
using namespace std;

main()
{string movieName;
 float adultprice;
 float childprice;
 float noOfAdult;
 float noOfchild;
 float percentage;
 float totalamount;
 float afterdonation;
 cout << "Enter Movie Name: ";
 cin >> movieName;
 cout << "Enter Adult Ticket Price: ";
 cin >> adultprice;
 cout << "Enter Child Ticket Price: ";
 cin >> childprice;
 cout << "Number of Adult Ticket sold: ";
 cin >> noOfAdult;
 cout << "Number of Child Ticket sold: ";
 cin >> noOfchild;
 cout << "Enter percentage to donate: ";
 cin >> percentage;
 totalamount = (noOfchild*childprice)+(noOfAdult*adultprice);
 cout << "Total Amount Generated: ";
 cout << totalamount <<endl;
 afterdonation = totalamount - (totalamount*percentage)/100;
 cout << "Amount after donation: ";
 cout << afterdonation;

}
