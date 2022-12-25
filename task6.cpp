#include <iostream>
using namespace std;

main()
{
 float size;
 float cost;
 float area;
 float costPerPound;
 float costPerSquareFeet;
 cout << "Enter Bag Size in Pounds: ";
 cin >> size;
 cout << "Enter cost of the Bag: ";
 cin >> cost;
 cout << "Enter area covered by each bag in square feet: ";
 cin >> area;
 costPerPound = cost/size;
 cout << "Cost of the fertilizer per pound: ";
 cout << costPerPound <<endl;
 costPerSquareFeet = size*area;
 cout << "Cost of fertilizing the area per square feet: ";
 cout << costPerSquareFeet;
}
