#include <iostream>
using namespace std;

main()
{float vegcoins;
 float fruitcoins;
 float vegKg;
 float fruitKg;
 float vegCost;
 float fruitCost;
 float total;
 float rupees;
 float totalinrupees;
 rupees = 1.94;
 cout << "Enter vegetables for coins: ";
 cin >> vegcoins;
 cout << "Enter fruits for coins: ";
 cin >> fruitcoins;
 cout << "Enter vegatables for kg: ";
 cin >> vegKg;
 cout << "Enter fruits for kg: ";
 cin >> fruitKg;
 vegCost = vegcoins*vegKg;
 cout << "Vegetable cost is: ";
 cout << vegCost  <<endl;
 fruitCost = fruitcoins*fruitKg;
 cout << "Fruit cost is: ";
 cout << fruitCost  <<endl;
 total = vegCost+fruitCost;
 cout << "Total cost is: ";
 cout << total  <<endl;
 totalinrupees = total*rupees;
 cout << "Total in rupees: ";
 cout << totalinrupees <<endl;
}
