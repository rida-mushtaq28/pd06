#include <iostream>
using namespace std;
float charges(string service,string time,int minutes);
main ()
{
    string service;
    int minutes;
    string time;
    int charge;

    cout << "enter service:";
    cin >> service;
    cout << "press either day or night:";
    cin >> time;
    cout << "enter minutes: ";
    cin >> minutes;
    charge=charges(service,time,minutes);
    cout << "the charges are:"<< charge << "$"<< endl;

}

float charges(string service,string time,int minutes)
 {
    int charge;
    if (service=="residence")
     {
       if (minutes<=50)
       {
        charge=10;
       
       }
       else if (minutes>50)
       {
        charge=10+(0.20*(minutes-50));
        
       }
     }
     
      if (service=="premium")
     {
       if (time =="day" )
       {
         if (minutes<=75)
          {
            charge=25;
            
          }
         else if (minutes>75)
          {
            charge=25+(0.10*(minutes-75));
            
          }
       }

       if (time=="night")
       {
         if (minutes<=100)
          {
          charge=25;
          
          }
      
         else if (minutes>100)
          {
            charge=25+(0.05*(minutes-100));
            
          }
       }
       
     }
     

     return charge;
 }

