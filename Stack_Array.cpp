#include<iostream>
#include<string>
using namespace std;

// template<class X> class stack {
//     int top,size;
//     X *stk;
//     public:
//     stack(){
//         top = -1;
//         size=0;
//         stk = nullptr;
//     }
//     stack(int len){
//         top = -1;
//         size=len;
//         stk = new X[size];
//     }
//     void clear(){
//         top = -1;
//     }
//     bool isempty(){
//         if(top==-1) return true;
//         else return false;

//     }

//     void push(X ele){
//         if(top==size-1){
//             cout<<"Stack Overflow!\n";
//             return;
//         }
//         else
//         {
//             stk[++top]=ele;
//         }

//     }

//     X pop(){
//         if(isempty()){
//             cout<<"Stack is Empty";
//             return (X)NULL;
//         }
//         else{
//             return stk[top--];
//         }
//     }
//     void topEl(){
//         if(isempty()){
//             cout<<"No Element at top!";
//             return ;

//         }
//         else
//         {
//             cout<<stk[top];
//         }

//     }
//     void Display(){
//         if(isempty()){
//            cout<<"No Element to display!";
//             return;
//         }
//         for(int i=0;i<top+1;i++){
//             cout<<stk[i]<<" ";
//         }cout<<endl;
//         system("wait");
//     }


// };
// int main(){
//     system("cls");
//     int choice,noe;
//     cout<<"Enter Choice for the type of elements:\n1. Integer\n2.Character\n3.String\n4.Float\nEnter Choice : ";
//     cin>>choice;
//     cout<<"Enter the length of the stack:";cin>>noe;
//     switch (choice)
//     {
//     case 1:{
//         system("cls");
//         stack<int> s1(noe);
//         int choice2=1;
//         while(choice2!=0){

//             cout<<"1.Clear the List\n2. Check is EMpty\n3.Push an Element\n4.Pop an Element\n5.Inspect Top Element\n6.Display the stack\n0.To Exit the program\nEnter your choice Please : ";
//             cin>>choice2;
//             switch (choice2)
//             {
//             case 1:
//                 {s1.clear();
//                 break;}
//             case 2:{
//                 if(s1.isempty()) cout<<"Yes! Its Empty\n";
//                 else cout<<"No Its non empty\n";
//                 break;}
//             case 3:{
//                 int ele;
//                 cout<<"enter the element : ";
//                 cin>>ele;
//                 s1.push(ele);
//                 break;}
//             case 4:{
//                 int v = s1.pop();
//                 cout<<"Element popped: " <<v<<endl;
//                 break;}

//             case 5:{
//                 s1.topEl();

//                 break;}
//             case 6:{
//                 s1.Display();
//                 break;}
//             default:{
//                 break;}
//             }
//         }
//         break;
//     }
//     case 2:{

//         stack<char> s1(noe);
//         int choice2;
//         while(choice2!=0){

//             cout<<"1.Clear the List\n2. Check is EMpty\n3.Push an Element\n4.Pop an Element\n5.Inspect Top Element\n6.Display the stack\n0.To Exit the program\nEnter your choice Please : ";
//             cin>>choice2;
//             switch (choice2)
//             {
//             case 1:{
//                 s1.clear();
//                 break;}
//             case 2:{
//                 if(s1.isempty()) cout<<"Yes! Its Empty\n";
//                 else cout<<"No Its non empty\n";
//                 break;}
//             case 3:{
//                 char ele;
//                 cout<<"enter the element : ";
//                 cin>>ele;
//                 s1.push(ele);
//                 break;}
//             case 4:{
//                 char v = s1.pop();
//                 cout<<"Element popped: " <<v<<endl;
//                 break;}

//             case 5:{
//                 s1.topEl();

//                 break;}
//             case 6:{
//                 s1.Display();
//                 break;}
//             default:{
//                 break;}
//             }
//         }
//         break;
//     }
//     case 3:{

//         stack<string> s1(noe);
//         int choice2=1;
//         while(choice2!=0){

//             cout<<"1.Clear the List\n2. Check is EMpty\n3.Push an Element\n4.Pop an Element\n5.Inspect Top Element\n6.Display the stack\n0.To Exit the program\nEnter your choice Please : ";
//             cin>>choice2;
//             switch(choice2)
//             {
//             case 1:{
//                 s1.clear();
//                 break;}
//             case 2:{
//                 if(s1.isempty()) cout<<"Yes! Its Empty\n";
//                 else cout<<"No Its non empty\n";
//                 break;}
//             case 3:{
//                 string elem="";
//                 cout<<"enter the element : ";
//                 cin>>elem;
//                 s1.push(elem);
//                 break;}
//             case 4:{

//                 cout<<"Element popped: " <<s1.pop();
//                 break;}

//             case 5:{
//                 s1.topEl();
//                 break;}
//             case 6:{
//                 s1.Display();
//                 break;}
//             default:{
//                 break;}
//             }
//         }
//         break;
//     }
//     case 4:{

//         stack<float> s1(noe);
//         int choice2=1;
//         while(choice2!=0){

//             cout<<"1.Clear the List\n2. Check is EMpty\n3.Push an Element\n4.Pop an Element\n5.Inspect Top Element\n6.Display the stack\n0.To Exit the program\nEnter your choice Please : ";
//             cin>>choice2;
//             switch (choice2)
//             {
//             case 1:{
//                 s1.clear();
//                 break;}
//             case 2:{
//                 if(s1.isempty()) cout<<"Yes! Its Empty\n";
//                 else cout<<"No Its non empty\n";
//                 break;}
//             case 3:{
//                 float ele;
//                 cout<<"enter the element : ";
//                 cin>>ele;
//                 s1.push(ele);
//                 break;}
//             case 4:{
//                 float v = s1.pop();
//                 cout<<"Element popped: " <<v<<endl;
//                 break;}

//             case 5:{
//                 s1.topEl();

//                 break;}
//             case 6:{
//                 s1.Display();
//                 break;}
//             default:{
//                 break;}
//             }
//         }
//         break;


//     }
//     default:{
//         break;

//     }
//     }
//     return 0;
// }

// // Using Linked List
template<class X> class node{
    public:
        X value;
        node<X> *next;
};
template<class X> class SLL{
    node<X> *first=nullptr , *last=nullptr, *temp=nullptr;
    public:
        void push(){
            int nov;
            cout<<"Enter number of values you wanna enter";
            cin>>nov;

            for(int i=1;i<=nov;i++){
                X value;
                cin>>value;
                if(first==nullptr){

                    temp=new node<X>;
                    temp->value=value;
                    temp->next=nullptr;
                    last=first=temp;

                }
                else{

                    temp = new node<X>;
                    temp->value=value;
                    temp->next=nullptr;
                    last->next = temp;

                    last = temp;

                }
            }
        }

        bool isempty(){
            if(last==nullptr) return true;

            return false;
        }
        void clear(){
            node<X> *temp1 = new node<X>;
            temp = first;
            while(temp!=nullptr){
                temp1 = temp;
                temp->next;
                delete temp1;
            }

        }





        // Continue after isempty,clear
        X pop(){
            if(isempty()){
                cout<<"Stack Underflow"<<endl;
                return (X)NULL;

            }

            else{
               temp = first;
               node<X> *temp1;
               while (temp!=last)
               {

                temp1=temp;
                temp=temp->next;
               }
               temp1->next=nullptr;
               last= temp1;
               X val = temp->value;
               delete temp;
               return val;


            }
        }







        void peek_top(){
            cout<<"Element at top of the stack is : "<<last->value<<endl;


        }

        void display(){

            if(first==nullptr){
                cout<<"List Empty\n";
            }
            else{
                node<X> *temp1 = first;
                while (temp1!=nullptr)
                {
                    cout<<temp1->value<<" ";
                    temp1 = temp1->next;

                }
                cout<<endl;return;

            }

        }

        ~SLL(){
            node<X> *temp1 = new node<X>;
            temp = first;
            while(temp!=nullptr){
                temp1 = temp;
                temp->next;
                delete temp1;
            }
        }
};

int main(){

    SLL <int>list1,list2,list3;



    int choice;
    do
    {
        cout<<"1. PUSH\n";
        cout<<"2. POP\n";
        cout<<"3. dISPLAY\n";
        cout<<"4. PEEK TOP ELEMENT\n";
        cout<<"0 to exit\n";

        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
        list1.push();
        break;


        case 2:
        list1.pop();break;

        case 3:
        list1.display();break;


        case 4:
        list1.peek_top();

        break;

        case 0:
        return 0;


        default:
            break;
        }

    } while (choice!=0);

    return 0;
}
