#include<iostream>

using namespace std;

class node{
    public:
        int value;
        node *next;
        node *prev;
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
                    temp->prev=nullptr;
                    last=first=temp;

                }
                else{

                    temp = new node;
                    temp->value=value;
                    temp->next=nullptr;
                    temp->prev=last;
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
                    temp->prev=nullptr;
                    last=first=temp;

                }
                else{

                    temp = new node;
                    temp->value=value;
                    temp->next=first;
                    temp->prev=nullptr;
                    first->prev=temp;
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
                temp1->prev=temp;
                temp->next->prev = temp1;
                temp->next=temp1;

            }
        }

        void deletefrontele(){
            if(first==nullptr){
                cout<<"There's no as such Linked list existing for deleting values from it. !!";
            }

            else{
                temp = first;
                first = first->next;
                first->prev=nullptr;
                delete temp;
            }
        }

        void deletefromend(){
            if(first==nullptr){
                cout<<"There's no as such Linked list existing for deleting values from it. !!";
            }

            else{
                temp = last;
                last = last->prev;
                last->next=nullptr;
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

                temp->prev->next = temp->next;
                temp->next->prev=temp->prev;
                delete temp;

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
                    temp2->prev=nullptr;
                    last2=first2=temp2;

                }
                else{

                    temp2 = new node;
                    temp2->value=val;
                    temp2->next=nullptr;
                    temp2->prev=last2;
                    last2->next = temp2;

                    last2 = temp2;

                }
            }
            if(first==nullptr){
                first=first2;
                first->next=first2->next;
                first->prev=first2->prev;
                last=last2;
                last->next=last2->next;
                last->prev=last2->prev;
            }
            else{
                last->next=first2;
                first2->prev=last;
                last=last2;
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

        void display2(){

            if(first==nullptr){
                cout<<"Sorry !! Linked list is empty\n";
            }
            else{
                node *temp1 = last;
                while (temp1!=nullptr)
                {
                    cout<<temp1->value;
                    cout<<"  ";
                    temp1 = temp1->prev;

                }
                cout<<endl;
                return;

            }
        }



};

int main(){
    LL list1;

    int choice;
    do
    {
        cout<<"_____________________________________________ \n";
        out<<"Below is your inputed Linked list: \n";
        list1.display();
        cout<<endl;
        list1.display2();
        cout<<"_____________________________________________ \n";
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

