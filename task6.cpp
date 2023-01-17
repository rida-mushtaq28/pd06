#include <iostream>
using namespace std;
float studio(int month,int stay);
float apartment(int month ,int stay);
main()
{
    int month,stay;
    float price;
    cout << "enter month:";
    cin >> month;
    cout << "enter no of stays:";
    cin >> stay;
    price=studio(month,stay);
    cout << "studio:" << price << endl;
    price=apartment(month,stay);
    cout << "apartment:" << price << endl;
    
    


}

  float studio(int month,int stay)
    {
        float price;
       if (month==5 || month==10)
         {
            if (stay>7)
             {
                price =(stay*50)-((stay*50*5)/100);
             }
             if (stay>14)
             {
                price =(stay*50)-((stay*50*30)/100);
             }

             else
              {
                price=(stay*50);
              }
         }
         else if (month==6 || month==9) 
        {
            if (stay>14)
            {
              price =(stay*75.20)-((stay*75.20*20)/100);
            }
            else
            {
                price=(stay*75.20);
            }
        }
        else if (month==7 || month==8)
        {
           price=(stay*76);
        }

        return price;
    }

    float apartment(int month,int stay)
     {
       float Price;
       if (month==5 || month==10)
         {
            if (stay>14)
               {
                 Price =(stay*65)-((stay*65*10)/100);
               }
            else 
            {
                Price=stay*65;
            }   
           
             
         }
         else if (month==6 || month==9) 
        {
            if (stay>14)
            {
              Price =(stay*68.70)-((stay*68.70*10)/100);
            }
            else
            {
                Price=(stay*68.70);
            }
        }
        else if (month==7 || month==8)
        {
            if (stay>14)
             {
               Price =(stay*77)-((stay*77*10)/100); 
             }
            else 
            {
                 Price=(stay*77);
            }
        }

        return Price;
        
     }


    
