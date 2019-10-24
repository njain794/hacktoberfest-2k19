#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*save,*ptr,*tnode;
class stack
{
    private:node *head,*tail;
    public: stack()
                {
                    head=NULL;
                    tail=NULL;
                }
                void push(int i)
                {
                    node *tmp=new node;
                    tmp->data=i;
                    tmp->next=NULL;
                    if(head==NULL)
                    {
                        head=tmp;
                        tail=tmp;
                    }
                    else
                    {
                        save=head;
                        head=tmp;
                        tmp->next=save;
                    }
                }
                void pop()
                {
                    if(head==NULL)
                    {
                        cout<<"No node to delete";
                    }
                    else
                    {
                        ptr=head;
                        head=head->next;
                        delete ptr;
                    }
                }
                void display()
                {
                    node *tmp=new node;
                    tmp=head;
                    while(tmp!=NULL)
                    {
                        cout<<tmp->data;
                        tmp=tmp->next;
                    }
                }
};
int main()
{
    int n,i,m;
    char ch;
    stack s;
    do
    {
        cout<<"1.push\n2.pop\n3.display\n4.exit";
        cin>>n;
        switch(n)
        {
        case 1:
            cout<<"\nenter no. : ";
            cin>>i;
            s.push(i);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
        }
    }while(n<4);
    return 0;
}
