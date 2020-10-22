#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
  //User enters monthly interest
  int monthly_invest;
  cout<< "Enter monthly investment: ";
  cin >> monthly_invest;

  //User enters APR. Calculation included for monthly interest multiplier 
  double apr;
  cout<< "Enter APR: ";
  cin >> apr;
  apr = pow((apr / 100 + 1) , 1.0/12);// APR instructions 

  //User enters desired amount of years to observe 
  int years;
  cout<< "Enter number of years : ";
  cin >> years;

  //Title Columns 
  cout << "Year#/Month#/Balance" << endl;

  //Total balance each month 
  double balance = 0;
   
  
   //Nested for loop how many years (i = what year currently on) 
   for(int i = 1; i <= years; i++)
   {
     for (int j = 1; j <= 12; j++)//What month currently on
     {
       balance = apr * balance + monthly_invest;//creates new balance with APR and monthly investment
       cout << i << " / "<< j << " / ";//prints i = years, and j = months
       cout << fixed << setprecision(2) << balance;//provides precision to two decimal places 
       cout << endl;
     }
     
   }

  
  return 0;
  
    
}