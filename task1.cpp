#include <iostream>
using namespace std;
string activity(string temp,string humidity);
main ()
{   string temp,humidity,game;
    cout << "enter temprature :";
    cin >> temp;
    cout << "enter humidity:";
    cin >> humidity;
   game= activity (temp,humidity);
   cout << game << endl;
}

  string activity(string temp,string humidity)
   {

    string game;
    
    if (temp=="warm"&& humidity=="dry")
       {
        game="play tenis";
        return game;
       }

       if (temp=="warm"&& humidity=="humid")
       {
        game="swim";
        return game;
       }

       if (temp=="cold"&& humidity=="dry")
       {
        game="play basketball";
        return game;
       }

       if (temp=="cold"&& humidity=="humid")
       {
        game="watch tv";
        return game;
       }
       return 0;
   }
  