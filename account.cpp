#include<iostream>
#include<stdlib.h>
using namespace std;

class Bankapp
       {
            private:
                int Acno,Bal;
                string Cusname,Actype;
            public:
                Bankapp(int,int,string,string);//constructor
                void Withdraw();//member method 1
                void Deposit();//member method 2
                void Checkbal();//member method 3
                void Calcint();//member method 4
    };//end of class

    Bankapp::Bankapp(int A,int B,string C, string Tp )
        {

            Acno = A;
            Bal = B;
            Cusname = C;
            Actype = Tp;

        }
    void Bankapp::Withdraw()
        {
            int x;
            cout<< "Enter Amount to withdraw:\n";
            cin >> x;
            if(x <=10)
                cout<< " Oops! Your account balance is low. Money cannot be withdrawn\n";
            else
               {
                   Bal =- x;
                cout<< "Rs."<<x<<" withdrawn successfully!:)\n";
               }
         }
    void Bankapp::Deposit()
        {
            int  y;
            cout << "Enter amount to deposit:\n";
            cin>> y;
            if(y>0)
               {
                  Bal = Bal + y;
                cout<<" Rs. "<<y<<" has been added to your account\n";
               }
             else
                cout << " Please enter a value greater than zero\n";
        }
    void Bankapp::Checkbal(void)
        {
            cout <<" Dear "<< Cusname<<" ! \n" <<"Your account balance is "<< Bal;
        }
    void Bankapp::Calcint()
                {
                  float t,SI,r = 7.0;
                  cout<< "Enter time in year: \n";
                  cin >> t;
                  SI = (Bal * t * r)/100;
                  cout << "Interest for "<<t <<" years is: "<<SI;

                }

    //Main block starts
     main()

        {
            int Accno,bal;
            string cusname,type;
             cout<<"Enter Bank A//c  Number:\n";
            cin >> Accno;
            cout<<"Enter Primary Balance:\n";
            cin >> bal;
            cout<<"Enter Customer Name:\n";
            cin >> cusname;
            cout<<"Enter A//c Type:\n";
            cin >> type;


            Bankapp a(Accno,bal,cusname,type);//created object app . Note the way to create object
            cout <<"[ Welcome To HINDUSTHAN BANK OF INDIA! ]\n"<< endl;
            int option;
            cout << "\n Choose your desired action:: \n\n1.) Withdraw\n2.) Deposit\n3.) Check Balance\n4.) Calculate Interest\n5.) Sign Out" <<endl;
            cin >> option;

            switch(option)
                {
                    case 1: a.Withdraw(); break;
                    case 2: a.Deposit(); break;
                    case 3: a.Checkbal();break;
                    case 4: a.Calcint();break;
                    case 5: exit(0);
                    default: cout <<" Please enter a valid option ";
                }
          return 0;
        }
