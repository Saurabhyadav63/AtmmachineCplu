#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int bal){
        balance=bal;
    }
    int getBalance (){
        return balance;
    }
    int withdraw(int amout){
        if(amout > balance){
            return false;
        }
        balance = balance-amout;
        return true;
    }
    void depost(int amout){
        balance = balance + amout;
    }
};
int main() {
    ATM atm(1000);
    char option;
    int choice ,amout,success,amount;
    
   do{
    system("cls");
     cout<<"1. View Balance"<<endl;
    cout<<"2. Cash withdraw"<<endl;
    cout<<"3. Cash Deposit"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"5. Enter your Choice"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1: 
          cout <<"Your Balance :"<<atm.getBalance();
        break;

        case 2:
         cout <<"Your Avalable Balance :"<<atm.getBalance()<<endl;
        cout<<"Enter the Amount to withdraw:";
        cin>>amout;
        success = atm.withdraw(amout);
        if(success){
            cout<<"Withdraw Successfull...."<<endl; 
        }else{
            cout<<"Insfficient Balance...."<<endl;
        }
        break;

        case 3:
        cout<<"Enter the Amount to Deposit :";
        cin>>amount;
        atm.depost(amount);
        cout<<"Deposti Successfull..."<<endl;
        break;

        case 4:
        cout<<"Thanks for Using ATM"<<endl;
        break;
       default:
       cout<<"Invalid Choice";
        break;
    }
    cout<<"\nDo you want to Try Another TRansaction[Yes/No]:";
    cin>>option;
   }while (option =='y'|| option=='Y');
   
   return 0;
}