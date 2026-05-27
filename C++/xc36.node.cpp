#includ <iostream>

int node(int p)
  {
  //6 -> 9 node
  node *p,*q,*t;
  p=first;
  q=null;
  while(p!=null)
  {
    t=q;
    q=p;
    p=p->link;
    q->link=t;
  }
  p=first;
  }

int main()
{



     return 0;
}