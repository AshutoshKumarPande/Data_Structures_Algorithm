#include<iostream>
using namespace std;

template<class X> class node{
    public:
        X value;
        node<X> *next;
};
template<class X> class CLL{
    node<X> *last,*temp;
    public:
        CLL(){
            last=nullptr;
            temp=nullptr;
        }
        void addtotail(){
            int nov;
            cout<<"Enter number of values you wanna enter";
            cin>>nov;

            for(int i=1;i<=nov;i++){
                X value;
                cin>>value;
                if(last==nullptr){

                    temp=new node<X>;
                    temp->value=value;
                    temp->next=temp;
                    last=temp;

                }
                else{

                    temp = new node<X>;
                    temp->value=value;
                    temp->next=last->next;
                    last->next = temp;

                    last = temp;

                }
            }
        }

        void addtohead(){
            int nov;
            cout<<"Enter number of values you wanna enter";
            cin>>nov;

            for(int i=1;i<=nov;i++){
                X value;
                cin>>value;
                if(last==nullptr){

                    temp=new node<X>;
                    temp->value=value;
                    temp->next=temp;
                    last=temp;

                }
                else{

                    temp = new node<X>;
                    temp->value=value;
                    temp->next=last->next;
                    last->next=temp;

                }
            }

        }

        void insert_at_i(){
            int i,pos = 1;
            X value;
            cout<<"Enter the value of i: ";
            cin>>i;
            cout<<"Enter the value to be inserted : ";
            cin>>value;

            node<X> *temp1= new node<X>;
            node<X> *temp2 = new node<X>;
            temp1->value=value;

            if(last==nullptr){
                cout<<"Array Is Empty\n + Addding at 1st Position\n";
                last = temp1;
                last->next=last;


            }
            else{
                temp = new node<X>;
                 temp = last->next;
                 while (i!=pos)
                {
                    temp2 = temp;
                    temp = temp->next;
                    pos++;

                }
                if(temp==last){

                    temp2->next=temp1;
                    temp1->next=temp;

                }
                else if (temp==last->next)
                {
                    temp1->next = last->next;
                    last->next = temp1;
                }

                else{
                    temp2->next=temp1;
                temp1->next=temp;
                }
            }

        }

        void remove_from_i()
        {
            int i;
            cout<<"Enter the value of i: ";
            cin>>i;
            int pos = 1;
            temp = new node<X>;
            if(last== nullptr){
                cout<<"List Empty can't delete";

            }

            else
            {
                node<X> *temp1 = new node<X>;
                temp = last->next;
                while(pos!=i){
                    temp1 = temp;
                    temp = temp->next;
                    pos++;
                }
                if(temp==last){
                    temp1->next = temp->next;
                    last = temp1;
                    delete temp;

                }
                else if (temp == last->next)
                {
                    last->next = temp->next;
                    delete temp;
                }

                else
                {
                    temp1->next=temp->next;
                     delete temp;
                }


            }

        }

        /* Some Extra Time pass functions
        void addinbw(){
            if(last->next==nullptr){
                cout<<"No Linked List exist to make addition in between";
            }
            else{
                X bwelem,prelem;
                temp = new node<X>;
                node<X>* temp1 = new node<X>;
                cout<<"Enter the element to be inserted";
                cin>>bwelem;
                temp1->value=bwelem;
                cout<<"Enter the value of the element after which "<<bwelem<<" is to be inserted";
                cin>>prelem;
                temp = last->next;
                while(temp->value!=prelem){
                    temp = temp->next;
                }
                temp1->next=temp->next;
                temp->next = temp1;




            }
        }
        void deleteinbw(){
            if(last->next==nullptr) cout<<"List Empty";
            else{
                X delem;
                cout<<"Enter the element to be deleted in b/w the linked list : ";
                cin>>delem;
                temp = new node<X>();
                temp = last->next;
                node<X> *temp1 = new node<X>;
                while (temp->value!=delem)
                {
                    temp1=temp;
                    temp = temp->next;
                }
                temp1->next = temp->next;
                delete temp;

            }
        }
        */

        void deletefromstart(){
            if(last==nullptr){
                cout<<"Array empty! nothng to delete";
            }

            else{
                temp = last->next;
                last->next = temp->next;
                delete temp;
            }
        }
        void deletefromend(){
            if(last==nullptr){
                cout<<"Array empty! nothng to delete";
            }

            else{
               temp = last->next;
               node<X> *temp1;
               while (temp!=last)
               {

                temp1=temp;
                temp=temp->next;
               }
               temp1->next=last->next;
               last= temp1;
               delete temp;


            }
        }



        void operator +(CLL l2){

            if(last=nullptr){
                last = l2.last;
            }
            else
            {
                l2.last->next = last->next;
                last = l2.last;
            }




        }

        void reverse_value(){
            int len=1;
            temp = last->next;
            while(temp!=nullptr){

                temp = temp->next;
                len++;
            }
            node<X>* a[len] ;
            int i=0;
            while(temp!=nullptr){

                a[i]=temp;
                i++;
            }
            temp=new node<X>;
            node<X> *temp1 = new node<X>;

            for(int j = len-1;j>=0;j++){
                temp = last->next;
                temp1 = a[j];
                temp1->value= temp->value;
                temp = temp->next;


            }


        }

        void reverse(){

            node<X>* templast = new node<X>;
            templast=last;
            node<X>* first=last->next;

            if(last==nullptr){
                cout<<"List is Empty!\n";
                return;
            }

            while (last!=first)
            {
                temp = first;

                node<X>* temp1 = new node<X>;
                while (temp!=last)
                {
                    temp1 = temp;
                    temp = temp->next;

                }
                temp->next = temp1;
                last = temp1;
            }
            last->next=templast;
        }



        void search_elem(){
            int pos=1;
            X elem;
            cout<<"Enter the element you want to search : ";
            cin>>elem;
            temp = new node<X>;
            temp = last->next;
            while(temp->value!=elem){
                temp = temp->next;
                pos++;
            }
            cout<<"Element is at "<<pos<<"th position\n";


        }

        void display(){

            if(last==nullptr){
                cout<<"List Empty\n";
            }
            else{
                node<X> *temp1 = last->next;
                do
                {
                    cout<<temp1->value<<" ";
                    temp1 = temp1->next;
                }
                while (temp1!=last->next);
                cout<<endl;return;

            }

        }

        ~CLL(){
            node<X> *temp1 = new node<X>;
            temp = last->next;
            while(temp!=last){
                temp1 = temp;
                temp->next;
                delete temp1;
            }
            delete last;
        }
};

int main(){

    CLL <int>list1,list2,list3;



    int choice;
    do
    {
        cout<<"1. add to Tail\n";
        cout<<"2. Add to Head\n";
        cout<<"3. Delete from Beginiing\n";
        cout<<"4. Delete from end\n";
        cout<<"5.Display the list\n";
        cout<<"6. Insert in at ith pos\n";
        cout<<"7.Delete from ith pos\n";
        cout<<"8. Search in the list\n";
        cout<<"9. Concatenate two lists\n";
        cout<<"10. Reverse the list\n";
        cout<<"0. to exit\n";

        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
        list1.addtotail();
        break;

        case 2:
        list1.addtohead();break;


        case 3:
        list1.deletefromstart();break;

        case 4:
        list1.deletefromend();break;


        case 5:
        list1.display();break;

        case 6:
        list1.insert_at_i();break;

        case 7:
        list1.remove_from_i();break;

        case 8:
        list1.search_elem();

        break;

        case 9:
        list2.addtotail();
        list1.operator+(list2);
        cout<<"After Concatenation, new List obtained is :";
        list1.display();
        break;

        case 10:
        list1.reverse();
        break;

        case 0:
        return 0;


        default:
            break;
        }

    } while (choice!=0);

    return 0;
}
