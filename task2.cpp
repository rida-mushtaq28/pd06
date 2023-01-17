#include <iostream>
using namespace std;
string grade(string student,int totalmarks ,int obtainmarks,float percentage);
main ()
{

string student,Grade;
int obtainmarks,totalmarks;

cout << "enter student : ";
cin >> student;
cout << "enter totalmarks:";
cin >> totalmarks;
cout << "enter obtainmarks:";
cin >> obtainmarks;
float percentage = (obtainmarks/totalmarks)*100;
Grade=grade(student,obtainmarks,totalmarks,percentage);
cout << student << " got "<< Grade << " grade "<< endl;

}

string grade(string student,int totalmarks,int obtainmarks,float percentage)
 {
   string Grade;
   

   if (percentage>=90 && percentage<=100)
      {
        Grade="A+";
       
      }

  if (percentage>=80 && percentage<90)
      {
        Grade="A";
       
      }
 
  if (percentage>=70 && percentage<80)
      {
        Grade="B+";
       
      }
 
       if (percentage>=60 && percentage<70)
      {
        Grade="B";
        
      }

       if (percentage>=50 && percentage<60)
      {
        Grade="C";
        
      }
     
    return Grade;
   
 }
