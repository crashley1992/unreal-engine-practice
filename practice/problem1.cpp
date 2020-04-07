//Frank has a cleaning company and each 
//small room costs 25 bucks
//large room 35
//tax is 6 %
//allow users to input the number of each room, calculate the total cost with tax
//display number of rooms cleaned, cost of small/large room, tax, and total cost with tax

#include <iostream>

using namespace std;

int main()
{
   int small_room_amount;
   int large_room_amount;
   float tax_rate = 0.06;

   cout << "Welcome to Frank's Carpet Cleaning Service/n" << endl;
   cout << "Please enter the amount of rooms small rooms you need cleaned" << endl;
   cin >> small_room_amount;
   cout << "Please enter the amount of large rooms you need cleaned" << endl;
   cin >> large_room_amount;

   int small_room_cost {25};
   int large_room_cost {35};
   float pre_tax = (small_room_amount * small_room_cost) + (large_room_amount * large_room_cost);
   float tax_cost = pre_tax * tax_rate;
   float final_cost = pre_tax + tax_cost;

   cout << "===========================================================" << endl;
   cout << "Estimate for carpet cleaning service" << endl;
   cout << "number of small rooms " << small_room_amount << endl;
   cout << "number of large rooms " << large_room_amount << endl;
   cout << "price of small room " << small_room_cost << endl;
   cout << "price of large room " << large_room_cost << endl;
   cout << "pre-tax cost: " << pre_tax << endl;
   cout << "tax: " << tax_cost << endl;
   cout << "total cost: " << final_cost << endl;

   cout << pre_tax << endl;


   return 0;
}
