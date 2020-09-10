#include<iostream>
using namespace std;
class Bank{
    char name[50],add[100],y;
    int bal;
public:
    void Open_accnt();
    void Deposit();
    void Withdraw();
    void Display();

};
void Bank ::Open_accnt()
{
    cout<< "Enter your full name :"<<endl;
    cin.ignore();
    cin.getline(name,50);
    cout<< "Enter your address "<<endl;
    //cin.ignore();
    cin.getline(add,100);
    cout<< "Which type of account you want to open saving (s) or current (c)"<<endl;
    cin>>y;
    cout<< "Enter a amount to deposit "<<endl;
    cin>>bal;
    cout<< "Your account is created"<<endl;
}
void Bank ::Deposit()
{
    int a;
    cout<< "Enter amount to be deposited"<<endl;
    cin>>a;
    bal+=a;
    cout<< "Your account is credited by "<<a<<endl;
    cout<< "Total account balance: "<<bal<<endl;

}
void Bank ::Withdraw()
{
    float w;
    cout<< "Enter the amount to withdraw"<<endl;
    cin>>w;
    bal-=w;
    cout<< w<<" has been debited from your account"<<endl;
    cout<< "Total account balance: "<<bal<<endl;
}
void Bank ::Display()
{
    cout<< "Full name : "<<name<<endl;
    cout<< "Address : "<<add<<endl;
    cout<< "Type of account: ("<<y<< ")"<<endl;
    cout<< "Total available balance :" <<bal<<endl;
}

int main()
{
    Bank obj;
    int ch;
    do{
        cout<< "1. Open an account"<<endl;
        cout<< "2. Deposit money"<<endl;
        cout<< "3. Withdraw money"<<endl;
        cout<< "4. Display account"<<endl;
        cout<< "5. Exit"<<endl;
        cout<< "Select from above options"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            obj.Open_accnt();
            break;
        case 2:
            obj.Deposit();
            break;
        case 3:
            obj.Withdraw();
            break;
        case 4:
            obj.Display();
            break;
        case 5:
            exit(1);
            break;
        default:
            cout<< "Enter a valid option"<<endl;
        }
    }while(ch!=5);

    return 0;
}
