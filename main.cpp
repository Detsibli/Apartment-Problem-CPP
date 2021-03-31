//(Apartment problem)
//A real estate office handles, say, 50 apartment units.
//When the rent is, say, $600 per month, all the units are occupied.
//However, for each, say, $40 increase in rent, one unit becomes vacant.
//Moreover, each occupied unit requries an average of $27 per month one maintanence.
//How many units should be rented to maximize the profit?
//Write a program that prompts the user to enter:
//a. The total number of units.
//b. The rent to oocupy all the units.
//c. The increase in rent that results in a vacant unit.
//d. Amount to maintain a rented unit.

#include <iostream>
using namespace std;

int main()
{
    double Rent, rentIncrease, Maintanence, maxProfit;
    int Profit, Units, Avaliable, Vacant;

   cout << "Please enter the number of apartments: ";
   cin >> Units;
   cout << endl;

   cout << "Please enter the amount of rent for each apartment: ";
   cin >> Rent;
   cout << endl;

   cout << "Please enter maintanence expense for each renterd apartment: ";
   cin >> Maintanence;
   cout << endl;

   cout << "Please enter the amount of rent increase per apartment: ";
   cin >> rentIncrease;
   cout << endl;

   while ((Units - Vacant) > 0)
   {
       Profit = (Units - Vacant) * (Rent - Maintanence);

       if (Profit > maxProfit)
       {
           maxProfit = Profit;
           Avaliable = (Units - Vacant);
       }

       Vacant++;

       Rent += rentIncrease;
   }

   cout << "The maximum number of units to rent are: " << Avaliable << endl;
   cout << "The maximum amount of profit is: $" << maxProfit << endl;
   return 0;
}
