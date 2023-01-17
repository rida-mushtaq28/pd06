#include <iostream>
using namespace std;
string state(int arrivalH,int arrivalM,int startingH,int startingM);
main()
{
   int arrivalH,arrivalM,startingH,startingM; 
   string remarks;
   cout << "enter arrival hours";
   cin >> arrivalH;
   cout << "enter arrival minutes";
   cin >> arrivalM;
   cout << "enter starting hours";
   cin >> startingH;
   cout << "enter starting minutes";
   cin >> startingM;
   remarks=state(arrivalH,arrivalM,startingH,startingM);
   cout << remarks;
}

 string state(int arrivalH,int arrivalM,int startingH,int startingM)
   {
     
     string remarks;
    
    if(startingH <= arrivalH && startingM < arrivalM)
    {
        remarks = "Late!";
    }
    else if(startingH <= arrivalH && startingM > arrivalM)
    {
        remarks = "Late";
    }
    if(startingH> arrivalH && startingM < arrivalM)
    {
      int hoursdifference=abs(startingH-arrivalH);
      int minutesdifference=abs(startingM-arrivalM);
        if( hoursdifference <= 1 && minutesdifference >=30)
        {
            remarks = "On Time!";
        }
       else if( hoursdifference > 1 && minutesdifference <30)
        {
            remarks = "Too Early!!";
            cout <<  hoursdifference << endl;
        }
    }
    else if (arrivalH>=startingH && arrivalM>=startingM)
      {
        remarks= "ON TIME!!";      } 

      return remarks; 
     
   }