#include<iostream>
#include<string>
using namespace std;

template<class X> class cqueue {
    int tail,size,head;
    X *stk;
    public:
    cqueue(){
        tail =head= -1;
        size=0;
        stk = nullptr;
    }
    cqueue(int len){
        tail =head= -1;
        size=len;
        stk = new X[size];
    }
    void clear(){
        tail =head= -1;
    }
    bool isempty(){
        if(tail==-1) return true;
        else return false;

    }

    void enqueue(X ele){
        if(tail=head-1 || ((tail == size-1)&&(head==0))){
            cout<<"cqueue Overflow!\n";
            return;
        }
        else
        {
            if(isempty()){
                stk[++tail]=ele;
                head = 0;
            }
            else
            stk[++tail]=ele;
        }

    }

    X dequeue(){
        if(isempty()){
            cout<<"cqueue is Empty";
            return (X)NULL;
        }
        else{
            return stk[head++];
        }
    }
    void HeadTail(){
        if(isempty()){
            cout<<"No Element at Head-Tail";
            return ;

        }
        else
        {
            cout<<"At Head : "<<stk[head]<<endl;
            cout<<"At Tail :"<<stk[tail]<<endl;
        }

    }
    void Display(){
        if(isempty()){
           cout<<"No Element to display!";
            return;
        }
        for(int i=0;i<size;i++){
            cout<<stk[i]<<" ";
        }cout<<endl;
    }


};
int main(){
    system("cls");
    int choice,noe;
    cout<<"Enter Choice for the type of elements:\n1. Integer\n2.Character\n3.String\n4.Float\nEnter Choice : ";
    cin>>choice;
    cout<<"Enter the length of the cqueue:";cin>>noe;
    switch (choice)
    {
    case 1:{
        system("cls");
        cqueue<int> s1(noe);
        int choice2=1;
        while(choice2!=0){

            cout<<"1.Clear the List\n2. Check is EMpty\n3.enqueue an Element\n4.dequeue an Element\n5.Inspect tail Element\n6.Display the cqueue\n0.To Exit the program\nEnter your choice Please : ";
            cin>>choice2;
            switch (choice2)
            {
            case 1:
                {s1.clear();
                break;}
            case 2:{
                if(s1.isempty()) cout<<"Yes! Its Empty\n";
                else cout<<"No Its non empty\n";
                break;}
            case 3:{
                int ele;
                cout<<"enter the element : ";
                cin>>ele;
                s1.enqueue(ele);
                break;}
            case 4:{
                int v = s1.dequeue();
                cout<<"Element dequeueped: " <<v<<endl;
                break;}

            case 5:{
                s1.HeadTail();

                break;}
            case 6:{
                s1.Display();
                break;}
            default:{
                break;}
            }
        }
        break;
    }
    case 2:{

        cqueue<char> s1(noe);
        int choice2;
        while(choice2!=0){

            cout<<"1.Clear the List\n2. Check is EMpty\n3.enqueue an Element\n4.dequeue an Element\n5.Inspect tail Element\n6.Display the cqueue\n0.To Exit the program\nEnter your choice Please : ";
            cin>>choice2;
            switch (choice2)
            {
            case 1:{
                s1.clear();
                break;}
            case 2:{
                if(s1.isempty()) cout<<"Yes! Its Empty\n";
                else cout<<"No Its non empty\n";
                break;}
            case 3:{
                char ele;
                cout<<"enter the element : ";
                cin>>ele;
                s1.enqueue(ele);
                break;}
            case 4:{
                char v = s1.dequeue();
                cout<<"Element dequeueped: " <<v<<endl;
                break;}

            case 5:{
                s1.HeadTail();

                break;}
            case 6:{
                s1.Display();
                break;}
            default:{
                break;}
            }
        }
        break;
    }
    case 3:{

        cqueue<string> s1(noe);
        int choice2=1;
        while(choice2!=0){

            cout<<"1.Clear the List\n2. Check is EMpty\n3.enqueue an Element\n4.dequeue an Element\n5.Inspect tail Element\n6.Display the cqueue\n0.To Exit the program\nEnter your choice Please : ";
            cin>>choice2;
            switch(choice2)
            {
            case 1:{
                s1.clear();
                break;}
            case 2:{
                if(s1.isempty()) cout<<"Yes! Its Empty\n";
                else cout<<"No Its non empty\n";
                break;}
            case 3:{
                string elem="";
                cout<<"enter the element : ";
                cin>>elem;
                s1.enqueue(elem);
                break;}
            case 4:{

                cout<<"Element dequeueped: " <<s1.dequeue();
                break;}

            case 5:{
                s1.HeadTail();
                break;}
            case 6:{
                s1.Display();
                break;}
            default:{
                break;}
            }
        }
        break;
    }
    case 4:{

        cqueue<float> s1(noe);
        int choice2=1;
        while(choice2!=0){
            cout<<"1.Clear the List\n2. Check is EMpty\n3.enqueue an Element\n4.dequeue an Element\n5.Inspect tail Element\n6.Display the cqueue\n0.To Exit the program\nEnter your choice Please : ";
            cin>>choice2;
            switch (choice2)
            {
            case 1:{
                s1.clear();
                break;}
            case 2:{
                if(s1.isempty()) cout<<"Yes! Its Empty\n";
                else cout<<"No Its non empty\n";
                break;}
            case 3:{
                float ele;
                cout<<"enter the element : ";
                cin>>ele;
                s1.enqueue(ele);
                break;}
            case 4:{
                float v = s1.dequeue();
                cout<<"Element dequeueped: " <<v<<endl;
                break;}

            case 5:{
                s1.HeadTail();

                break;}
            case 6:{
                s1.Display();
                break;}
            default:{
                break;}
            }
        }
        break;


    }
        default:{
            break;

        }
    }
    return 0;
}
