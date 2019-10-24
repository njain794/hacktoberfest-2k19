#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*ptr,*save,*tnode;
class linked_list
{
    private: node *head,*tail;
    public: linked_list()
                {
                    head=NULL;
                    tail=NULL;
                }
                void add1_node(int i)
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
                void add2_node(int i)
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
                        tail->next=tmp;
                        tail=tmp;
                    }
                }
                void del1_node()
                {
                    if(head==NULL)
                    {
                        cout<<"nothing to delete";
                    }
                    else
                    {
                        ptr=head;
                        head=head->next;
                        delete tnode;
                    }
                }
                void del2_node()
                {
                    if(head==NULL)
                    {
                        cout<<"nothing to delete";
                    }
                    else if(head==tail)
                    {
                        head=tail=NULL;
                    }
                    else
                    {
                        ptr=head;
                        while(ptr!=NULL)
                        {
                            ptr=ptr->next;
                        }
                        tnode=tail;
                        tail=ptr;
                        tail->next=NULL;
                        delete tnode;
                    }
                }
                void display()
                {
                    node *tmp;
                    tmp=head;
                    while(tmp!=NULL)
                    {
                        cout<<tmp->data<<"\n";
                        tmp=tmp->next;
                    }
                }
};
int main()
{
    int n,m,i;
    linked_list v;
    do
    {
        cout<<"1.insert from begin\n2.insert from end\n3.delete from begin\n4.delete from end\n5.display\n6.exit";
        cin>>n;
        switch(n)
        {
        case 1:
            cout<<"enter no.: ";
            cin>>i;
            v.add1_node(i);
            break;
        case 2:
            cout<<"enter no.: ";
            cin>>i;
            v.add2_node(i);
            break;
        case 3:
            v.del1_node();
            break;
        case 4:
            v.del2_node();
            break;
        case 5:
            v.display();
            break;
        case 6:
            exit(0);
        }
    }while(n<6);
    return 0;
}
