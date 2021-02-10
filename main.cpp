// Md. Jubayer Hussain NSU
//Hackerrank id : @jubayer_1996Hus1

//LinkedList-Insertion & Deletion

#include <iostream>

using namespace std;

struct node
{

    int data;
    node* next;
};
node* head;

void display()
{
    cout<<"List is :";
    node *temp=new node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp -> data<<"  ";
        temp=temp->next;
    }
    cout<<"\n";
}



void Insert_first(int num)
{
    node* temp;
    temp = new node();
    temp->data = num;
    temp-> next = NULL;
    if(head!= NULL)
    {
        temp-> next = head;
    }
    head= temp;
}



void Insert_last(int num)
{
    node* temp2;
    temp2 = new node();
    temp2->data = num;
    temp2-> next = NULL;
    node *nextnum= head;
    while(nextnum->next!=NULL)
    {
        nextnum=nextnum->next;
    }
    nextnum->next=temp2;

}


void Insert_pos(int num, int pos)
{
    node* temp3;
    temp3 = new node();
    temp3->data = num;
    temp3-> next = NULL;
    node *tempPos= head;
    for(int i=0; i<pos-2; i++)
    {
        tempPos= tempPos->next;
    }
    temp3->next=tempPos-> next;
    tempPos->next = temp3;


}


void delete_first()
{
    node* del_temp= new node();
    del_temp= head;
    head= head->next;
    delete del_temp;
}

void delete_last()
{
    node* del_tempLast= new node();
    node* secondLast= new node();
    del_tempLast= head;
    secondLast= head;
    while(del_tempLast->next!=NULL )
    {
        secondLast=del_tempLast;
        del_tempLast= del_tempLast->next;
    }

    secondLast->next=NULL;
    delete del_tempLast;
}


void delete_pos(int num)
{
    node* del_pos= new node();
    del_pos=head;
    node *tempPos;
    for(int i=0; i<num-2; i++)
    {
        del_pos= del_pos->next;
    }

    tempPos=del_pos-> next;
    del_pos->next = tempPos->next;
    delete tempPos;


}




int main()
{
start :

    int n;
    cout<<"To Insert First press : 1";
    cout<<"\nTo Insert Last press : 2";
    cout<<"\nTo Insert in a position press : 3";
    cout<<"\nTo Delete First press : 4";
    cout<<"\nTo Delete Last press : 5";
    cout<<"\nTo Delete in a position press : 6";
    cout<<endl;

    cout<<"\nEnter the number :";
    cin>>n;
    switch(n)
    {

    case 1 :
    {

        head =NULL;
        int n;
        cout<<"Enter how many number you want to insert  : ";
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            Insert_first(temp);
            display();
        }
        break;
        cout<<endl;
    }

    case 2:
    {

        cout<<"Adding Last : ";
        int n;
        cout<<"\nEnter how many number you want to insert last : ";
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            Insert_last(temp);
            display();
        }
        break;
        cout<<endl;
    }

    case 3 :
    {

        int r,c;
        cout<<"Adding Number  : ";
        cin>>r;
        cout<<"Which position ?   :    ";
        cin>>c;
        Insert_pos(r,c);
        display();
        cout<<endl;
        break;
        cout<<endl;
    }

    case 4 :
    {

        cout<<"Delete First :";
        delete_first();
        display();
        break ;
        cout<<endl;
    }
    case 5 :
    {
        cout<<"Delete Last :";
        delete_last();
        display();
        break;
        cout<<endl;
    }
    case 6 :
    {
        int k;
        cout<<"Delete position :";
        cin>>k;
        delete_pos(k);
        display();
        break;
        cout<<endl;
    }

    }

    cout<<endl;
    cout<<endl;
    int num;
    cout<<"Do you want to exit ? \t Yes : 1 and No: 2   :  ";
    cin>>num;
    cout<<endl;
    if(num==2)
        goto start;
    else
        cout<<"Thank you";

}
