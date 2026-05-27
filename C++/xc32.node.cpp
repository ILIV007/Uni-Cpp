#includ <iostream>

int node(int p)
  {
  //new node in frist
  node *p;
  p=new node;
  cout<<"Enter data for new node : ";
  cin>>p->data;
  p->link=frist;
  frist=p;
  }

int main()
{



     return 0;
}