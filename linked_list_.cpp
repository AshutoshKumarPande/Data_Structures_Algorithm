#include<iostream>

using namespace std;

class node{
    public:
        int value;
        node *next;
};

class LL{
    node* first=nullptr , *last=nullptr, *temp=nullptr;
    public:
        void addToTail(){
            int n;
            cout<<"Enter number of elements you want to enter: ";
            cin>>n;
            cout<<"\nNow enter "<<n<<" element to inputed in list: ";

            for(int i=1;i<=n;i++){
                int value;
                cin>>value;
                if(first==nullptr){

                    temp=new node;
                    temp->value=value;
                    temp->next=nullptr;
                    last=first=temp;

                }
                else{

                    temp = new node;
                    temp->value=value;
                    temp->next=nullptr;
                    last->next = temp;

                    last = temp;

                }
            }
        }

        void addToHead(){
            int n;
            cout<<"Enter number of elements you want to enter: ";
            cin>>n;
            cout<<"\nNow enter "<<n<<" element to inputed in list: ";

            for(int i=1;i<=n;i++){
                int value;
                cin>>value;
                if(first==nullptr){

                    temp=new node;
                    temp->value=value;
                    temp->next=nullptr;
                    last=first=temp;

                }
                else{

                    temp = new node;
                    temp->value=value;
                    temp->next=first;
                    first=temp;

                }
            }

        }

        void addInBtw(){
            if(first==nullptr){
                cout<<"There's no as such Linked list existing for adding values in between !!"<<endl;
                cout<<"First, try to create a Linked list having minimum two Values "<<endl;
            }
            else{
                int elevalue,elebef;
                temp = new node;
                node* temp1 = new node;
                cout<<"Enter the element to be inserted: ";
                cin>>elevalue;
                temp1->value=elevalue;
                cout<<"Enter the value of the element after which "<<elevalue<<" is to be inserted: ";
                cin>>elebef;
                temp = first;
                while(temp->value!=elebef){
                    temp = temp->next;
                }
                temp1->next=temp->next;
                temp->next = temp1;

            }
        }

        void deletefrontele(){
            if(first==nullptr){
                cout<<"There's no as such Linked list existing for deleting values from it. !!";
            }

            else{
                temp = first;
                first = first->next;
                delete temp;
            }
        }
        void deletefromend(){
            if(first==nullptr){
                cout<<"There's no as such Linked list existing for deleting values from it. !!";
            }

            else{
               temp = first;
               node *temp1;
               while (temp!=last)
               {

                temp1=temp;
                temp=temp->next;
               }
               temp1->next=nullptr;
               last= temp1;
               delete temp;


            }
        }

        void deleteInBtw(){
            if(first==nullptr) cout<<"There's no as such Linked list existing for deleting values from it. !!";
            else{
                int delele;
                cout<<"Enter the element to be deleted (in between) the linked list : ";
                cin>>delele;
                temp = new node();
                temp = first;
                node *temp1 = new node;
                while (temp->value!=delele)
                {
                    temp1=temp;
                    temp = temp->next;
                }

                temp1->next = temp->next;
                delete temp;

            }
        }

        void display(){


            if(first==nullptr){
                cout<<"Sorry !! Linked list is empty\n";
            }
            else{
                node *temp1 = first;
                while (temp1!=nullptr)
                {
                    cout<<temp1->value;
                    cout<<"  ";
                    temp1 = temp1->next;

                }
                cout<<endl;
                return;

            }
        }


void searchele(){
            int ele;
            cout<<"Enter the element to be searched: ";
            cin>>ele;
            if(first==nullptr){
                cout<<"Sorry !! Linked list is empty\n";
            }
            else{
                node *temp1 = first;
                int countr=0;
                while (temp1!=nullptr)
                {
                    if(temp1->value==ele){
                        countr=countr+1;
                        break;
                    }
                    temp1 = temp1->next;

                }
                    if(countr>0){
                        cout<<"Element is present in the linked list and its pointer is: "<<temp1<<endl;
                    }
                    else{
                        cout<<"Element is not present in the linked list \n";
                    }


                cout<<endl;
                return;

            }
        }

void cnct2List(){
            node* first2=nullptr , *last2=nullptr, *temp2=nullptr;
            int n2;
            cout<<"Enter number of elements you want to enter: ";
            cin>>n2;
            cout<<"\nNow enter "<<n2<<" element to inputed in list: ";

            for(int i=1;i<=n2;i++){
                int val;
                cin>>val;
                if(first2==nullptr){

                    temp2=new node;
                    temp2->value=val;
                    temp2->next=nullptr;
                    last2=first2=temp2;

                }
                else{

                    temp2 = new node;
                    temp2->value=val;
                    temp2->next=nullptr;
                    last2->next = temp2;

                    last2 = temp2;

                }
            }
            if(first==nullptr){
                first=first2;
                first->next=first2->next;
                last=last2;
                last->next=last2->next;
            }
            else{
                last->next=first2;
            }
        }


        void reverse(){
            LL ob;
            if(first==nullptr){
                cout<<"Sorry !! Linked list is empty\n";
                ob.first=ob.last=nullptr;
            }
            else{
                node *temp1 = first;
                while (temp1!=nullptr)
                {
                    int ele= temp1->value;
                    if(ob.first==nullptr){

                        ob.temp=new node;
                        ob.temp->value=ele;
                        ob.temp->next=nullptr;
                        ob.last=ob.first=ob.temp;

                }
                    else{

                        ob.temp = new node;
                        ob.temp->value=ele;
                        ob.temp->next=ob.first;
                        ob.first=ob.temp;

                }
                temp1 = temp1->next;

                }
                cout<<endl;
                cout<<"Here is your Reverse of the inputed Linked list: ";
                if(ob.first==nullptr){
                cout<<"Sorry !! Linked list is empty\n";
                }
                else{
                    node *temp3 = ob.first;
                while (temp3!=nullptr)
                {
                    cout<<temp3->value;
                    cout<<"  ";
                    temp3 = temp3->next;

                }
                cout<<endl;
                return;

            }

}
        }

};

int main(){
    LL list1;

    int choice;
    do
    {
        cout<<"__________________________________________________________________________ \n";
        cout<<"Below is your inputed Linked list: \n";
        list1.display();
        cout<<"__________________________________________________________________________ \n";
        cout<<"Choose any one option from below to do the operation   \n";
        cout<<"-------------------------------------------------------------------------- \n";
        cout<<"1. Add to value to Tail                                                             \n";
        cout<<"2. Add to value to Head                                                          \n";
        cout<<"3. Add value in between the Linked list ( if existing )         \n";
        cout<<"4. Delete value from Beginning                                             \n";
        cout<<"5. Delete value from end                                                        \n";
        cout<<"6. Delete value in between the linked list ( if existing)      \n";
        cout<<"7. Search element from the linked list                                 \n";
        cout<<"8. Concatenate the original list with new Linked list         \n";
        cout<<"9. Reverse the linked list\n";
        cout<<"0. Exit                                                                                        \n";

        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            list1.addToTail();
            system("CLS");
            break;

        case 2:
            list1.addToHead();
            system("CLS");
            break;

        case 3:
            list1.addInBtw();
            system("CLS");
            break;

        case 4:
            list1.deletefrontele();
            system("CLS");
            break;

        case 5:
            list1.deletefromend();
            system("CLS");
            break;

        case 6:
            list1.deleteInBtw();
            system("CLS");
            break;

        case 7:
            system("CLS");
            list1.searchele();
            break;

        case 8:
            list1.cnct2List();
            system("CLS");
            break;

        case 9:
            system("CLS");
            list1.reverse();
            break;

        case 0:
            return 0;


        default:
            system("CLS");
            cout<<"Sorry !!...Invalid Choice\nPlease try again !!\n";
            break;
        }

    } while (choice!=0);

    return 0;
}
