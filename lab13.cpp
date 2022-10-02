#include<iostream>
#include<string>
using namespace std;
int main()
{

int date[7];
double snow[7];
double average = 0;
int high_index = 0;
string month_name;

cout << "Enter name of the month :" ;
cin >> month_name;
cout << endl;
for(int i=0; i<7; i++)
{
  
cout <<"Enter date of month :";

cin >> date[i];
cout << endl;
cout <<"Enter snow fall for the date :";
cin >> snow[i];
cout << endl;D
}
for(int i=0; i<7; i++)
{
average = average + snow[i];
if(snow[i] > snow[high_index]) high_index = i;
}

cout <<"Snow Report 12 - 18 "<< month_name << endl;
cout <<"\nDate   Snow Fall\n"<< endl;
for(int i=0; i<7; i++)
cout <<date[i] << "     " << snow[i] << endl;
cout <<"\n\nHeight snow fall is "<< snow[high_index] <<" on "<<date[high_index] <<"th and the average snow fall is " << average/7.0<<endl;

return 0;
}
