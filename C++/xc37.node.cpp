#includ <iostream>

int node(int p)
  {
  //sort hob node
  node *p , *q;
  p=first;
  while(p!=null)
  {
    q=p->link;
      while(q!=null)
      (
        if(p->data > q->data)
        {
          swap(p,q);
          q=q->link;
        }
        p=p->link;
      )
  }
  

  }

int main()
{



     return 0;
}