/// ILIYA Iravani
///code monday
///miss shadro
/// projact coffeeShop C++
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/// class -------------------------------------
class ice;
class hot;
class food;
class customer;
string coffee_menu[20];
class store{
    public:
    int n;
    store(){cout<<"num made?"<<endl;cin>>n;cout<<endl;}
    int made[n];
    int coffee[20];///menu mahsolat
///    string coffee_menu[20];
    string name_made;
    long int number;
   friend class ice;
   friend class hot; 
   friend class foods;
   friend class customer;
    /// ifstream store_file("coffeeShop.store.txt");
   void mojodi();///?????? ???? ??????
   void menu();///??? ?? ????? ????
   void cook(int made & );

};

class ice{public:
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   void serve_ice(int made & );///?? ????? ?????? ?????? ? ?? ????? ?  ??? ?? ?????
};

class hot{
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   void serve_hot(int made  & );///?? ????? ?????? ?????? ? ?? ????? ?  ??? ?? ?????
};

class food{
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   void serve_food(int made  & );///?? ????? ?????? ?????? ? ?? ????? ?  ??? ?? ?????

};

class customer{
   int custo=0;
    customer(){cout<<"welcome!\n";custo++;}
    string cus[custo];
    ifstream customer_file("coffeeShop.customer.txt");
    ifstream customer_file("coffeeShop.boss.txt");
   void pay();///???? ???? ?? ??? ?? ??? ?????
   void customer_phone();///??? ? ????? ?? ?????
   ///void end_boss();///????? ?????? ???

};

/// main -----------------------------------

int main()
{
   ///amade sazi hay coffee
 store t;
 t.mojodi();
 bool start
  ///vrode moshtary
  for(;;)
  {
   cout<<"serve or not?(0/1) ";
  cin>>start;
  if(start==true)
  {
  customer C;
  int s;
  bool club=false;   
   t.menu;
   ice i;
   hot h;
   food f;
   for(;;)
   {
   bool end=0;
   cout<<"\nserve what?(1,2,3)? ";
   cin>>s;
   switch(s)
   {
      case '1':
       i.serve_ice();
        break;
      case '2':
       h.serve_hot;
        break;
      case '3':
       f.serve_food;
        break;
      default:
       cout<<"this is all we have for nowww!!! :)\n";
        break;
   }
   cout<<"\n\nend?(0/1) ";
   if(end==1)
    break;
   else
    cout<<"\nwhat more?"
   }
   cout<<"\nAnd now time to pay! :)))\t";
   C.pay();
   Cout<<"\nwanna join are club?(1,0) ";
   cin>>club;
    if(club==true)
     C.customer_phone();
    else
    {
     cout<<"\n :( ";
     break;
  }
  else 
   cout<<"\nbyeeee\n\n";
  }
  ///store close
  cout<< "boss report is redyyy!";
       return 0;
}

///funcks --------------------------------------------

void store :: mojodi()///mavad avalee khonde shan
{
      ofstream store_file("coffeeShop.store.txt",ios::app);
   cout<<"mavad avalee (0 to exite)";
   for(;;)
   {
      getline(cin>>ws,coffee[n]);
         if(coffee[n]==0)
           break;
    store_file<<coffee[n]<<endl;
      cout<<"name_made? ";
      cin>>name_made;
    store_file<<name_made<<"\t";
      cout<<"num? ";
      n++;
   }
   store_file.close();
}

void store :: menu()
{
   ifstream store_file("coffeeShop.menu.txt", ios::in)
   long int num;
   int m=1;
   while(getline(store_file,str))
   {
      for(;;)
      {
      cout<<coffee_menu[m]<<' '<<num<<endl;
      coffee[m++];
      if(m==20)
       break;
      }
   }
   store_file.close();
}

void store :: cook(int made&)
{
   ofstream made_file("coffeeShop.boss.txt", ios::app);
    made_file<<"\nmavade avale masrafy:\n";
 switch (made[made])
 {
 case made[1]:
   made[1]--;
   made_file<<made[1]<<endl;
    break;

 case made[2];
   made[2]--;
   made_file<<made[2]<<endl;
    break;



 
 default:
   break;
 }
 made_file.close();
}

///-------------------

void ice :: serve_ice()
{
   ofstream cusPay_file("coffeeShop.cus.pay.txt",ios::out);
   ofstream pay_file("coffeeShop.boss.txt", ios::app);
   long float pay=0;   
   for(;;)
   {
   cout<<"\nkodom ice nosh az 1=>5? (0 to exit)\n";
   cin>>c;
   switch (c)
   {
   case '1':
     cusPay_file<<coffee_menu[1]<<endl;///coffee
      t.cook(1);///podr_coffee
      t.cook(2);///water
      pay+=50;
      break;

   case '2':
     cusPay_file<<coffee_menu[2]<<endl;///limonad
      t.cook(2);///water
      t.cook(3);///limo
     break;
   case '3':
     cusPay_file<<coffee_menu[3]<<endl;///




   
   default:
      break;
   }
   if(c==0)
    break;
   }
   pay_file<<"\nyour ice pay is : \t"<<pay;///payed
   cusPay_file.close();
   pay_file.clase();
}

///----------------

void hot :: serve_hot()
{
   ofstream cusPay_file("coffeeShop.cus.pay.txt",ios::out);
   ofstream pay_file("coffeeShop.boss.txt", ios::app);
   long float pay=0;   
   for(;;)
   {
   cout<<"\nkodom ice nosh az 5=>10? (0 to exit)\n";
   cin>>c;
   switch (c)
   {
   case '6':
     cusPay_file<<coffee_menu[6]<<endl;///coffee
      t.cook(1);///podr_coffee
      t.cook(2);///water
      pay+=50;
      break;

   case '7':
     cusPay_file<<coffee_menu[7]<<endl;///limonad
      t.cook(2);///water
      t.cook(3);///limo
     break;
   case '8':
     cusPay_file<<coffee_menu[8]<<endl;///




   
   default:
      break;
   }
   if(c==0)
    break;
   }
   pay_file<<"\nyour hot pay is : \t"<<pay;///payed
   cusPay_file.close();
   pay_file.clase();
}

///----------------

void food :: serve_food()
{




}

///--------------
void customer :: pay()
{
   ifstream pay_file("coffeeShop.boss.txt");
    string str;
    long int payy;
    while(getline(pay_file,str))
     cout<<str;
   cout<<"\nplease pay:)\n";
   cin>>payy;
   cout<<endl;
   pay_file.close();
}

void customer :: customer_phone()
{
   string name;
   long int num;
   ostream myCus_file("coffeeShop.customer.txt");
   cout<<"your num? \n";
    getline(cin>>ws,name);
     myCus_file<<name<<"\t";
   cout<<"your number? \n";
    getline(cin>>ws,num);
     myCus_file<<num<<endl;
   myCus_file.close();
}
///end
///ILIYA_IV_007