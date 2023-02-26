#include <bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<BILLING_SYSTEM.h>

using namespace std;

int main()
{
    supermarket b;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),161);

    cout<<"PROJECT ON SUPERMARKET BILLING SYSTEM" <<endl;

    cout<<"~~~~~"<<endl;

    cout<<"\n\n****"<<endl;
    cout<<"\nMade By :-"<<endl;

    cout<<"\nKUSH SHAH"<<endl;

    cout<<"\nSTUDENT ID - 202001104"<<endl;

    cout<<"\nHARSH BUDDHDEV"<<endl;

    cout<<"\nSTUDENT ID - 202001157"<<endl;

    cout<<"\n****"<<endl;

    cout<<"\n\nPress Any Key To Continue"<<endl;

    getch();

    system("cls");

    system("Color B5");

    int entrance,count=0;

    x:
        if(count>0)
        {
            cout<<"PRESS N TO EXIT ";
            {
                char o;
                cin>>o;
                if(o=='N')
                    system("cls");
            }
        }

    cout << "\t\t\t\t* * * * * * * * * * * * * * * * * * *";

    cout <<"\n\t\t\t\t*                                   *"<<endl;

    cout <<"\t\t\t\t*   Welcome To UCHIHA SUPERMARKET   *"<<endl;

    cout <<"\t\t\t\t*                                   *"<<endl;

    cout <<"\t\t\t\t* * * * * * * * * * * * * * * * * * *";

    do
    {
    cout <<"\n1. To Enter Administrator Window "<<endl;

    cout <<"\n2. To Enter Customer Window "<<endl;

    cout <<"\n3. To Exit\n"<<endl;

    cin >> entrance;

    count++;

    switch(entrance)
    {
        case 1:
            {
                cout<<"\nEnter Administrator's Password to login "<<endl;

                string password;

                cin >> password;

                if(password == "Naruto")
                {
                    int changes;
                    do
                    {
                    cout<<"\n1. TO ADD ITEMS";

                    cout<<"\n2. TO DELETE ITEMS";

                    cout<<"\n3. TO GO BACK TO MAIN MENU\n";

                    cin>>changes;

                    switch(changes)
                    {
                    case 1:
                        {
                            b.create();

                            b.display();

                            break;
                        }
                        case 2:
                        {
                            int x;

                            b.deletedata();

                            break;
                        }
                        case 3:
                            {
                                 break;
                            }
                        default:
                            {
                                cout<<"\nENTER VALID OPTION"<<endl;
                            }
                    }
                    }while(changes!=3);

                }

                else
                {
                    cout<<"\nEnter Valid Password\n";
                }
                break;
            }

            case 2:
                {

            int option;
            cout <<"\nGREETINGS, WELCOME TO THE UCHIHA SUPERMARKET"<<endl;

                cout <<"\nPLEASE PROCCED AS SHOWN IN BELOW MENU AND GENERATE YOUR OWN BILL"<<endl;

            do
            {
                y:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),176);

                cout << "\n~~~~~~~" << endl;

                cout <<"\nPRESS"<<endl;

                cout << "\n1. TO ADD PRODUCT" << endl;

                cout << "2. TO DELETE PRODUCT AT LAST POSITION" << endl;

                cout << "3. TO DELETE PRODUCT AT FIRST POSITION" << endl;

                cout << "4. TO DELETE PRODUCT AT A GIVEN POSITION" << endl;

                cout << "5. TO DISPLAY BILL" <<endl;

                cout << "6. TO EXIT \n" << endl;

                cout << "~~~~~~\n" << endl;

                cin >> option;

                switch (option)

                {

                case 1:
                {
                    cout << "ENTER ID OF THE ITEM YOU WANT TO BUY\n";

                    int x;

                    cin >> x;

                    b.insert(x);

                    break;
                }

                case 2:
                {
                    b.deletelastpurchase(b.max1);

                    break;
                }

                case 3:
                {
                    b.deletefirstpurchase(b.min);

                    break;
                }

                case 4:
                {
                    cout << "ENTER ID OF THE ELEMENT YOU WANT TO DELETE\n";

                    int x;

                    cin >> x;

                    b.deleterandom(x);

                    break;
                }
                case 5:
                {
                    system("cls");

                    b.displaybill();

                    goto x;
                }

                case 6:
                {
                    exit(0);
                    break;
                }

                default:
                {
                    cout << "ENTER VALID OPTION\n";
                }
                }

                } while (option != 6);

                break;
        }
        case 3:
            {
                break;
            }
        default:
            {
                cout <<"\nEnter Valid Option "<<endl;
            }
        }

        }while(entrance!=3);
}
