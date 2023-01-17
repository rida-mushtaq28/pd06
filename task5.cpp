#include <iostream>
using namespace std;
float cost(string day ,string fruit,float quantity);
main ()
{
    string day,fruit;
    float quantity;
    cout << "enter day :";
    cin >> day;
    cout << "enter fruit :";
    cin >> fruit ;
    cout << "enter quantity :";
    cin >> quantity;
    float price=cost(day ,fruit,quantity);
    cout << "cost will be :"<< price << endl;

}

  float cost(string day ,string fruit,float quantity)
   {
     float price;
    if ((day=="sunday"|| day== "saturday") && fruit=="banana")
      {
        price=(quantity*2.70);
      }

      if ((day=="sunday" || day== "saturday") && fruit=="apple")
      {
        price=(quantity*1.25);
      }

      if ((day=="sunday" || day== "saturday") && fruit=="orange")
      {
        price=(quantity*0.90);
      }

      if ((day=="sunday" || day== "saturday") && fruit=="grapefruit")
      {
        price=(quantity*1.60);
      }

      if ((day=="sunday" || day== "saturday") && fruit=="kiwi")
      {
        price=(quantity*3.00);
     }

      if ((day=="sunday" || day== "saturday") && fruit=="pineapple")
      {
        price=(quantity*5.60);
      }

      if ((day=="sunday" || day== "saturday") && fruit=="grape")
      {
        price=quantity*(4.20);
      }

      else
      {
        if(fruit =="banana")
        {
            price=quantity*2.50;
        }
        if(fruit=="apple")
         {
            price=quantity*1.20;
         }
         if(fruit=="orange")
         {
            price=quantity*0.85;
         }
         if(fruit=="grapefruit")
         {
            price=quantity*1.45;
         }
         if(fruit=="kiwi")
         {
            price=quantity*(2.70);
         }
         if(fruit=="pineapple")
         {
            price=quantity*5.50;
         }
         if(fruit=="grape")
         {
            price=quantity*3.85;
         }

      }
      return price;
   }