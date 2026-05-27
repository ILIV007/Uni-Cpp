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
   void mojodi();///?????? ???? ??????
   void menu();///??? ?? ????? ????
   void cook(int made&);

};

class ice{public:
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   long float payICE=0;  
   int icee; 
   void serve_ice(int made & );///?? ????? ?????? ?????? ? ?? ????? ?  ??? ?? ?????
};

class hot{
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   long float payHOT=0;  
   int hott; 
   void serve_hot(int made  & );///?? ????? ?????? ?????? ? ?? ????? ?  ??? ?? ?????
};

class food{
   ifstream store_file("coffeeShop.store.txt");
   ofstream menu_file("coffeeShop.menu.txt");
   long float payFood=0;
   int foodd;
   void serve_food(int made  & );///?? ????? ?????? ?????? ? ?? ????? ?  ??? ?? ?????

};

class customer{
	public:
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
       h.serve_hot();
        break;
      case '3':
       f.serve_food();
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
int n;
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
    coffee_menu[11]=cake;
     paymenu[11]=200;
    coffee_menu[12]=shokolate_cake;
     paymenu[12]=210;
    coffee_menu[13]=egg;
     paymenu[13]=70;
    coffee_menu[14]=French_fries;
     paymenu[14]=80;
    coffee_menu[15]=pizza;
     paymenu[15]=300;
    coffee_menu[16]=dumpling;
     paymenu[16]=150;
    coffee_menu[17]=Sausage;
     paymenu[17]=50;
    coffee_menu[18]=kabab;
     paymenu[18]=350;
    coffee_menu[19]=lazania;
     paymenu[19]=290;
    coffee_menu[20]=pasta;
     paymenu[20]=210;
   for(int i=0 ; i<20 ; i++)
    store_file<<i<<'.'<<coffee_menu[i]<<' '<<paymenu[i]<<endl;
   store_file.close();
  }
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
 case "made[9]";
   made[9]--;
   made_file<<made[9]<<endl;
    break;
 case "made[10]";
   made[11]--;
   made_file<<made[11]<<endl;
    break;
 case "made[12]";
   made[12]--;
   made_file<<made[12]<<endl;
    break;
 case "made[13]";
   made[13]--;
   made_file<<made[13]<<endl;
    break;
 case "made[14]";
   made[14]--;
   made_file<<made[14]<<endl;
    break;
 case "made[15]";
   made[15]--;
   made_file<<made[15]<<endl;
    break;
 case "made[16]";
   made[16]--;
   made_file<<made[16]<<endl;
    break;
 case "made[17]";
   made[17]--;
   made_file<<made[17]<<endl;
    break;
 case "made[18]";
   made[18]--;
   made_file<<made[18]<<endl;
    break;
 default:
   break;
 }
 made_file.close();
}

///-------------------

void ice :: serve_ice()
{
   ofstream cusPay_file("coffeeShop.cus.pay.txt",ios::app);
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
      payICE+=paymenu[1];
      break;
   case '2':
     cusPay_file<<coffee_menu[2]<<endl;///limonad
      t.cook(2);///water
      t.cook(3);///limo
      payICE+=paymenu[2];
     break;
   case '3':
     cusPay_file<<coffee_menu[3]<<endl;///milkshak
      t.cook(4);///milk
      t.cook(6);///sugar
      t.cook(5);///ice
      payICE+=paymenu[3];
     break;
   case '4':
    cusPay_file<<coffee_menu[4]<<endl;///ice coffee
     t.cook(1);///podre coffee
     t.cook(2);///water
     t.cook(5);///ice
     payICE+=paymenu[4];
    break;
   case '5':
    cusPay_file<<coffee_menu[5]<<endl;///ice tea
     t.cook(3);///tea
     t.cook(2):///water
     t.cook(5);///ice
     payICE+=paymenu[5];
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
   ofstream cusPay_file("coffeeShop.cus.pay.txt",ios::app);///sorat hesab
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
      payHOT+=paymenu[6];
      break;
   case '7':
     cusPay_file<<coffee_menu[7]<<endl;///tea
      t.cook(2);///water
      t.cook(3);///teaP
      payHOT+=paymenu[7];
     break;
   case '8':
     cusPay_file<<coffee_menu[8]<<endl;///kapochino
      t.cook(2);///water
      t.cook(7);///KapoChino
      payHOT+=paymenu[8];
     break;
   case '9':
     cusPay_file<<coffee_menu[9]<<endl;///shokolat
      t.cook(4);///milk
      t.cook(2);///water
      t.cook(8);///shokolat
      t.cook(6);///sugar
     payHOT+=paymenu[9];
    break;
   case '10':
     cusPay_file<<coffee_menu[10]<<endl;///superC
      t.cook(6);///sugar
      t.cook(2);///water
      t.cook(4);///milk
      t.cook(1);///podr_coffee
      payHOT+=paymenu[10];
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
   ofstream cusPay_file("coffeeShop.cus.pay.txt",ios::app);///sorat hesab
   ofstream pay_file("coffeeShop.boss.txt", ios::app); 
   for(;;)
   {
   cout<<"\nkodom food nosh az 10=>15? (0 to exit)\n";
   cin>>foodd;
   switch (foodd)
   {
   case '11':
   cusPay_file<<coffee_menu[11]<<endl;///cake
      t.cook(10);///eeg
      t.cook(4);///milk
      t.cook(6);///suger
      t.cook(9);///flour
      payfood+=paymenu[11];
       break;
   case '12':
   cusPay_file<<coffee_menu[12]<<endl;///shokolat_cake
      t.cook(10);///eeg
      t.cook(4);///milk
      t.cook(6);///suger
      t.cook(9);///flour
      t.cook(8);///shokolat
      payfood+=paymenu[12];
       break;
   case '13':
   cusPay_file<<coffee_menu[13]<<endl;///egg
      t.cook(10);///eeg
      t.cook(11);///bread
      payfood+=paymenu[13];
       break;
   case '14':
   cusPay_file<<coffee_menu[14]<<endl;///French_fries
      t.cook(12);///potato
      payfood+=paymenu[14];
       break;
   case '15':
   cusPay_file<<coffee_menu[15]<<endl;///pizza
      t.cook(11);///bread
      t.cook(12);///potato
      t.cook(13);///tomato
      t.cook(14);///cheese
      t.cook(15);///Sausage
      t.cook(18);///mashrom
      payfood+=paymenu[15];
       break;
      case '16':
   cusPay_file<<coffee_menu[16]<<endl;///dumpling
      t.cook(11);///bread
      t.cook(12);///potato
      t.cook(13);///tomato
      t.cook(15);///Sausage
      payfood+=paymenu[16];
       break;
      case '17':
   cusPay_file<<coffee_menu[17]<<endl;///Sausage
      t.cook(11);///bread
      t.cook(15);///Sausage
      payfood+=paymenu[17];
       break;
      case '18':
   cusPay_file<<coffee_menu[18]<<endl;///kabab
      t.cook(13);///tomato
      t.cook(16);///meat
      t.cook(17);///rais
      payfood+=paymenu[18];
       break;
      case '19':
   cusPay_file<<coffee_menu[19]<<endl;///lazania
      t.cook(18);///pasta
      t.cook(12);///potato
      t.cook(13);///tomato
      t.cook(15);///Sausage
      payfood+=paymenu[19];
       break;
      case '20':
   cusPay_file<<coffee_menu[20]<<endl;///pasta
      t.cook(18);///pasta
      t.cook(12);///potato
      t.cook(4);///milk
      t.cook(15);///Sausage
      t.cook(18);///mashrom
      payfood+=paymenu[20];
       break;
   default:
      break;
   }
   if(foodd==0)
    break;
   }
   cuspay_file<<"\nyour foodd pay is : \t"<<payFoodd;///payed
   cusPay_file.close();
   pay_file.clase();
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
///ostad shadro
///code monday