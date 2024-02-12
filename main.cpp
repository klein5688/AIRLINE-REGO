#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class details
{
public :
    static string name,gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer Id:";
        cin>>cId;
        cout<<"\nEnter the name :";
        cin>>name;
        cout<<"\nEnter the age :";
        cin>>age;
        cout<<"\nAddress :";
        cin>>add;
        cout<<"\nGender :";
        cin>>gender;
        cout<<"Your details are saved with us\n"<<endl;
    };
};
int details::cId;

string details::name;
string details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int a=0;a<6;a++)
        {
            cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
        }

        cout<<"\nWelcome to the Airlines!"<<endl;
        cout<<"Press the number of the country which you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"____________Welcome to Dubai Emirates____________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights  \n"<<endl;

                cout<<"1.DUB - 498"<<endl;
                cout<<"\t08-02-2024 8:00AM 10hrs $1400"<<endl;

                cout<<"2.DUB - 658"<<endl;
                cout<<"\t09-02-2024 4:00AM 12hrs $1000"<<endl;

                cout<<"3.DUB - 508"<<endl;
                cout<<"\t11-02-2024 11:00AM 11hrs $900"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1400;
                    cout<<"You have successfully booked the flight DUB - 498"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=1000;
                    cout<<"You have successfully booked the flight DUB - 658"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=900;
                    cout<<"You have successfully booked the flight DUB - 508"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid input , shifting to the previus menu"<<endl;
                    flights();
                }

                cout<<"Press any key to go back to the mainmenu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }


            }
        case 2:
            {
                cout<<"____________Welcome to Canadian Airlines____________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights  \n"<<endl;

                cout<<"1.CA - 198"<<endl;
                cout<<"\t09-02-2024 2:00PM 20hrs $3400"<<endl;

                cout<<"2.CA - 158"<<endl;
                cout<<"\t11-02-2024 6:00AM 23hrs $2900"<<endl;

                cout<<"3.CA - 208"<<endl;
                cout<<"\t14-02-2024 12:00AM 21hrs $4000"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=3400;
                    cout<<"You have successfully booked the flight CA - 198"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=2900;
                    cout<<"You have successfully booked the flight CA - 158"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=4000;
                    cout<<"You have successfully booked the flight CA - 208"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid input , shifting to the previus menu"<<endl;
                    flights();
                }

                cout<<"Press any key to go back to the mainmenu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
            }
        case 3:
            {
                cout<<"____________Welcome to UK Airways____________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights  \n"<<endl;

                cout<<"1.UK - 798"<<endl;
                cout<<"\t12-02-2024 10:00AM 14hrs $4400"<<endl;



                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=4400;
                    cout<<"You have successfully booked the flight UK - 798"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }



                else
                {
                    cout<<"Invalid input , shifting to the previus menu"<<endl;
                    flights();
                }

                cout<<"Press any key to go back to the mainmenu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
            }
        case 4:
            {
                cout<<"____________Welcome to US Airways____________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights  \n"<<endl;

                cout<<"1.US - 567"<<endl;
                cout<<"\t10-02-2024 9:00AM 22hrs $3700"<<endl;

                cout<<"2.US - 258"<<endl;
                cout<<"\t09-02-2024 6:00AM 23hrs $3900"<<endl;

                cout<<"3.US - 108"<<endl;
                cout<<"\t14-02-2024 10:00AM 21hrs $4200"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=3700;
                    cout<<"You have successfully booked the flight US - 567"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=3900;
                    cout<<"You have successfully booked the flight US - 258"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=4200;
                    cout<<"You have successfully booked the flight US - 108"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid input , shifting to the previus menu"<<endl;
                    flights();
                }

                cout<<"Press any key to go back to the mainmenu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
            }
        case 5:
            {
                cout<<"____________Welcome to Australian Airlines____________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights  \n"<<endl;

                cout<<"1.AUS - 698"<<endl;
                cout<<"\t18-02-2024 9:00AM 20hrs $4400"<<endl;

                cout<<"2.AUS - 358"<<endl;
                cout<<"\t19-02-2024 4:00AM 22hrs $3400"<<endl;

                cout<<"3.AUS - 708"<<endl;
                cout<<"\t17-02-2024 10:00AM 21hrs $4200"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=4400;
                    cout<<"You have successfully booked the flight AUS - 698"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=3400;
                    cout<<"You have successfully booked the flight AUS - 358"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=4200;
                    cout<<"You have successfully booked the flight AUS - 708"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid input , shifting to the previus menu"<<endl;
                    flights();
                }

                cout<<"Press any key to go back to the mainmenu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
            }
        case 6:
            {
                cout<<"____________Welcome to Europian Airlines____________\n"<<endl;
                cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                cout<<"Following are the flights  \n"<<endl;

                cout<<"1.EU - 898"<<endl;
                cout<<"\t02-02-2024 2:00AM 18hrs $3600"<<endl;

                cout<<"2.EU - 958"<<endl;
                cout<<"\t03-02-2024 6:00AM 19hrs $3700"<<endl;

                cout<<"3.EU - 608"<<endl;
                cout<<"\t12-02-2024 10:00AM 21hrs $3100"<<endl;

                cout<<"\nSelect the flight you want to book :";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=3600;
                    cout<<"You have successfully booked the flight EU - 898"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==2)
                {
                    charges=3700;
                    cout<<"You have successfully booked the flight EU - 958"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else if(choice1==3)
                {
                    charges=3100;
                    cout<<"You have successfully booked the flight CA - 608"<<endl;
                    cout<<"You can go back to the main menu and the ticket"<<endl;
                }

                else
                {
                    cout<<"Invalid input , shifting to the previus menu"<<endl;
                    flights();
                }

                cout<<"Press any key to go back to the mainmenu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
            }
        default :
            {
                cout<<"Invalid input, shifting you to the main menu!"<<endl;
            }
        }

    }

};
float registration::charges;
int registration::choice;

class ticket : public registration, details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf<<"________DON Airlines_____________"<<endl;
            outf<<"________Ticket___________________"<<endl;
            outf<<"_________________________________"<<endl;

            outf<<"Customer ID:"<<details::cId<<endl;
            outf<<"Customer Name:"<<details::name<<endl;
            outf<<"Customer Gender:"<<details::gender<<endl;
            outf<<"\tDescription"<<endl;

            if(registration::choice==1)
            {
                destination="Dubai";
            }

            else if(registration::choice==2)
            {
                destination="Canada";
            }
             else if(registration::choice==3)
            {
                destination="UK";
            }

             else if(registration::choice==4)
            {
                destination="US";
            }

             else if(registration::choice==5)
            {
                destination="Australia";
            }

             else if(registration::choice==6)
            {
                destination="Europe";
            }

            outf<<"destination\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<registration::charges<<endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("record.txt");
        {
            if(!ifs)
            {
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();

    }
};

void mainMenu()
{
    int lchoice;

    int back;

    cout<<"\t               DON Airlines     \n"<<endl;
    cout<<"\t______________Main Menu _____________"<<endl;

    cout<<"\t________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the customer details   \t|"<<endl;
    cout<<"\t|\t Press 2 for flight registration       \t|"<<endl;
    cout<<"\t|\t Press 3 for tickets and charges       \t|"<<endl;
    cout<<"\t|\t press 4 to exit                       \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t___________________________________________________________"<<endl;

    cout<<"Enter the choice :" ;
    cin>>lchoice;


    details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
    case 1:
        {
            cout<<"_________Customers____________\n"<<endl;
               details();
               cout<<"Press any key to go back to the main menu";
               cin>>back;

               if(back==1)
               {
                   mainMenu();
                   }
                       else
                       {
                           mainMenu();
                       }
                       break;



               }
    case 2:
        {
            cout<<"_________Book a flight using this system__________\n"<<endl;
            r.flights();
            break;
        }
    case 3:
        {
            cout<<"_____GET YOUR TICKET______\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";

            cin>>back;

                if(back==1)
                {
                    t.dispBill();
                    cout<<"Press any key to go back to the main menu:";
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }
                else
                {
                    mainMenu();
                }
                break;
        }
    case 4 :
        {
            cout<<"\n\n\t___________Thank you_________"<<endl;
            break;
        }
        default :
            {
                cout<<"Invalid input, Please try again!\n"<<endl;
                mainMenu();
                break;
            }

        }
    };









int main()
{
    Management Moj;
    return 0;
}



