#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    
    ofstream phone_file("phone.txt");
    long int number;
    string name;
    cout<<"enter number and name (0 for exit)\n";
    for(;;)
    {
        cin>>number;
        if(number==0)
         break;
        phone_file<<number<<"\t";

        cin>>name;
        phone_file<<name<<endl;
        cout << endl;
    }
    /*
   //--------------------------------------------find:
   ifstream phone_file("phone.txt");
   long int number;
   string name , find_name;
   bool find = false;
   cin>>find_name;
   cout<<endl;
   while(phone_file>>number)
   {
    phone_file >> name;
    if (name== find_name)
    {
        cout<<name<<' '<<number;
        find=true;
        break;
    }
   }
   if(find==false)
    cout<< "not found!!";
    */
}