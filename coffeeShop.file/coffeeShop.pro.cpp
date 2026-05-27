/// ILIYA Iravani
///code monday
///miss shadro
/// projact coffeeShop C++
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/// class -------------------------------------
class ice;
class hot;
class food;
class customer;
string coffee_menu[20];///menu ka az ghable tarif shode
int paymenu[20];
class store{
    public:
    ///int n;
    ///store(){cout<<"num made?"<<endl;cin>>n;cout<<endl;}
    int made[44];
    int coffee[20];///menu mahsolat bar asas makan dar menu
    string coffee_menu[20];
    int paymenu[20];
    string name_made;
    long int number;
    bool reset=0;
   friend class ice;
   friend class hot; 
   friend class foods;
   friend class customer;
    /// ifstream store_file("coffeeShop.store.txt");
   void mojodi();///مئجودی هارو میگیره
   void menu();///منو رو نمایش میده
   void cook(int made & );

};

class ice{public:
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   long float payICE=0;  
   int icee; 
   void serve_ice(int made & );///از اینجا سفارشو میخونه و از انبار و  منو کم میکنه
};

class hot{
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   long float payHOT=0;  
   int hott; 
   void serve_hot(int made  & );///از اینجا سفارشو میخونه و از انبار و  منو کم میکنه
};

class food{
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   void serve_food(int made  & );///از اینجا سفارشو میخونه و از انبار و  منو کم میکنه

};

class customer{
   int custo=0;
    customer(){cout<<"welcome!\n";custo++;}
    string cus[custo];
    ifstream customer_file("coffeeShop.customer.txt");
    ifstream customer_file("coffeeShop.boss.txt");
   void pay();///صورت حساب هر شخص رو چاپ میکنه
   void customer_phone();///اسم و شماره هر مشتری
   ///void end_boss();///گزارش تمامیه روز
   
};



/// main -----------------------------------

int main()
{
   ///amade sazi haye coffee
 store t;
 t.mojodi();
 bool start;
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
   t.menu();
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
   ///ofstream my_file("coffeeShop.cus.pay.txt", ios:: trunk);
  }
  ///store close
  cout<< "boss report is redyyy!";///check file!!!
       return 0;
}



///funcks --------------------------------------------

void store :: mojodi()///mavad avalee khonde shan
{  
   cout<<"mavad avalee be tateb file vared shavad! (777 to exite)\n\n";
   /*
      ofstream store_file("coffeeShop.store.txt",ios::app);
      ifstream store_file("coffeeShop.store.txt",ios::in);
   int n=0;
   cout<<"mavad avalee be tateb file vared shavad! (777 to exite)\n\n";
   while(getline(store_file,name_made))
   {
      store_file<<name_made<<"\t";
      getline(cin>>ws,made[n]);
         if(made[n]==777)
           break;
    store_file<<made[n]<<endl;
      n++;
   }
   */
for(;;)
{
   made[n] , name_made;
   ifstream store_file("coffeeShop.store.txt",ios::in);
    store_file<<name_made<<' ';
   ofstream store_file("coffeeShop.store.txt",ios::app);
    cin>>made[n];
    if(made[n]==777)
     break;
    store_file>>made[n];
    store_file << endl;
   n++;
}
   store_file.close();
}

void store :: menu()
{///namaeash menu
   ifstream store_file("coffeeShop.menu.txt", ios::in);
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
/*
 cout<<"reset menu?(0/1) ";///admin
  cin>>reset;
  if(reset==1)///bayad biron class bashe
  {
   ofstream store_file("coffeeShop.menu.txt");
    coffee_menu[1]=water;
     paymenu[1]=50
    coffee_menu[2]=limonad;
     paymenu[2]=100;
    coffee_menu[3]=milkshake;
     paymenu[3]=200;
    coffee_menu[4]=ice coffee;
     paymenu[4]=40;
    coffee_menu[5]=iceTea;
     paymenu[5]=40;
    coffee_menu[6]=coffee;
     paymenu[6]=110;
    coffee_menu[7]=tea;
     paymenu[7]=100;
    coffee_menu[8]=kapochino;
     paymenu[8]=180;
    coffee_menu[9]=shokolat;
     paymenu[9]=150;
    coffee_menu[10]=superC;
     paymenu[10]=70;
   for(int i=0 ; i<20 ; i++)
    store_file<<i<<'.'<<coffee_menu[i]<<' '<<paymenu[i]<<endl;
   store_file.close();
  }
  */
}

void store :: cook(int made&)
{
   ofstream made_file("coffeeShop.boss.txt", ios::app);
    made_file<<"\nmavade avale masrafy:\n";
    if(made[made]<=20)
     cout<< "we need more\n"
 switch (made[made])///made ham mishod ghozasht
 {
 case "made[1]":
   made[1]--;
   made_file<<made[1]<<endl;
    break;

 case "made[2]";
   made[2]--;
   made_file<<made[2]<<endl;
    break;
 case "made[2]";
   made[3]--;
   made_file<<made[3]<<endl;
    break;
 case "made[2]";
   made[4]--;
   made_file<<made[4]<<endl;
    break;
 case "made[2]";
   made[5]--;
   made_file<<made[5]<<endl;
    break;
 case "made[6]";
   made[6]--;
   made_file<<made[6]<<endl;
    break;
 case "made[7]";
   made[7]--;
   made_file<<made[7]<<endl;
    break;
 case "made[8]";
   made[8]--;
   made_file<<made[8]<<endl;
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
   for(;;)
   {
   cout<<"\nkodom ice nosh az 1=>5? (0 to exit)\n";
   cin>>icee;
   switch (icee)
   {
   case '1':
     cusPay_file<<coffee_menu[1]<<endl;///water
      t.cook(5);///ice
      t.cook(2);///water
      payICE+=50;
      break;
   case '2':
     cusPay_file<<coffee_menu[2]<<endl;///limonad
      t.cook(2);///water
      t.cook(3);///limo
      payICE+=100;
     break;
   case '3':
     cusPay_file<<coffee_menu[3]<<endl;///milkshak
      t.cook(4);///milk
      t.cook(6);///sugar
      t.cook(5);///ice
      payICE+=200;
     break;
   case '4':
    cusPay_file<<coffee_menu[4]<<endl;///ice coffee
     t.cook(1);///podre coffee
     t.cook(2);///water
     t.cook(5);///ice
     payICE+=70;
    break;
   case '5':
    cusPay_file<<coffee_menu[5]<<endl;///ice tea
     t.cook(3);///tea
     t.cook(2):///water
     t.cook(5);///ice
     payICE+=40;
      break;
   default:
    cout<<"cansel\n";
      break;
   }
   if(icee==0)
    break;
   }
   pay_file<<"\nyour ice pay is : \t"<<payICE<<endl;///payed
   cusPay_file.close();
   pay_file.clase();
}

///----------------

void hot :: serve_hot()
{
   ofstream cusPay_file("coffeeShop.cus.pay.txt",ios::out);///sorat hesab
   ofstream pay_file("coffeeShop.boss.txt", ios::app); 
   for(;;)
   {
   cout<<"\nkodom hot nosh az 5=>10? (0 to exit)\n";
   cin>>hott;
   switch (hott)
   {
   case '6':
     cusPay_file<<coffee_menu[6]<<endl;///coffee
      t.cook(1);///podr_coffee
      t.cook(2);///water
      payHOT+=110;
      break;

   case '7':
     cusPay_file<<coffee_menu[7]<<endl;///tea
      t.cook(2);///water
      t.cook(3);///teaP
      payHOT+=100;
     break;
   case '8':
     cusPay_file<<coffee_menu[8]<<endl;///kapochino
      t.cook(2);///water
      t.cook(7);///KapoChino
      payHOT+=180;
     break;
   case '9':
     cusPay_file<<coffee_menu[9]<<endl;///shokolat
      t.cook(4);///milk
      t.cook(2);///water
      t.cook(8);///shokolat
      t.cook(6);///sugar
     payHOT+=150;
    break;
   case '10':
     cusPay_file<<coffee_menu[10]<<endl;///superC
      t.cook(6);///sugar
      t.cook(2);///water
      t.cook(4);///milk
      t.cook(1);///podr_coffee
      payHOT+=70;
     break;
   default:
      break;
   }
   if(hott==0)
    break;
   }
   cuspay_file<<"\nyour hot pay is : \t"<<payHOT;///payed
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
   ifstream pay_file("coffeeShop.cus.pay.txt");
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
   ostream myCus_file("coffeeShop.customer.txt",ios::app);
   cout<<"your name? \n";
    getline(cin>>ws,name);
     myCus_file<<name<<"\t";
   cout<<"your number? \n";
    getline(cin>>ws,num);
     myCus_file<<num<<endl;
   myCus_file.close();
}
///end
///ILIYA_IV_007