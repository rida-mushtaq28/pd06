#include <iostream>
using namespace std;
string zodiacsign(int month,int date);
main ()
{  
    int month,date;
    string sign;
    cout << "enter month :";
    cin >> month;
    cout << "enter date:";
    cin >> date;
    sign=zodiacsign(month ,date);
    cout << "People born on this date have zodiac "<< sign << endl;


}

string zodiacsign(int month,int date)
  {
    string sign;
    if ((month==3 && date>=21 )  || ( month==4 && date<=19))
     {
        sign="Aries";
        
     }

   if ((month==4 && date>=20) || (month==5 && date<=20))
     {
        sign="Taurus";
        
     }

     if ((month==5 && date>=21) || (month==6 && date<=20))
     {
        sign="Gemini";
        
     }

     if ((month==6 && date>=21 ) || ( month==7 && date<=22))
     {
        sign="cancer";
       
     }

      if ((month==7 && date>=23) || ( month==8 && date<=22))
     {
        sign="Leo";
        
     }

    if ((month==8 && date>=23 ) || (month==9 && date<=22))
     {
        sign="virgo";
        
     }

    if ((month==9 && date>=23) || (month==10 && date<=22))
     {
        sign="Libra";
      
     }

      if ((month==10 && date>=23) || ( month==11&& date<=21))
     {
        sign="Scorpio";
       
     }

     if ((month==11 && date>=22) || (month==12&& date<=21))
     {
        sign="Saggitarus";
        
     }

    if ((month==12 && date>=22) || (month==1 && date<=19))
     {
        sign="capricon";
        
     }

     if ((month==1 && date>=20) || (month==2 && date<=18))
     {
        sign="Aquarius";
       
     }

      if ((month==2 && date>=19 ) || ( month==3&& date<=20))
     {
        sign="Pices";
        
     }
     return sign;
  } 