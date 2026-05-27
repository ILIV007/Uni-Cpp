#includ <iostream>

int node(int p)
  {
  //delete node
  node *p,*q;
  int key;
  p=first;
  while(p!=null && p->data!=key)
  {
    q=p;
    p=p->link;
  }
  q->link=p->link;
  delete p;
  }

int main()
{



     return 0;
}