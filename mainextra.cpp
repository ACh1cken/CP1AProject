#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>

using namespace std;

class booking
{
    public:
    int airline_no, destination_no, confirm_book, reference_no, user_input;
    string airline_name, destination_name,date_show,date_selected,month,time_selected,time1, time2, time3, time4, seat1, seat2, seat3, seat4, client_name;
    void airline_select();
    void ticket_display();
};

void booking::airline_select()
{
    cout << "In which AIRLINE you want to travel?" << endl;
    cout << "(1) - AirAsia" << endl << "(2) - FireFly" << endl << endl;
    cout << "ENTER YOUR CHOICE : " ;
    cin >> airline_no;
    if(airline_no == 1)
    {
        system("cls");
        airline_name = "AirAsia";
        cout << "ENTER YOUR DESTINATION : " << endl;
        cout << "(1) - Miri" << endl << "(2) - Sarawak" << endl << "(3) - Sabah" << endl << endl;
        cin >> destination_no;
        if(destination_no == 1)
        {
            system("cls");
            destination_name = "Miri";
            ifstream date_time ("AirAsia_Miri_date_time.txt");
            if (date_time.is_open())
            {
                cout << "January\nFebruary\nMarch\nApril\nMay\nJune\nJuly\nAugust\nSeptember\nOptober\nNovember\nDecember" << endl;
                cout << "Select month: " ;
                cin >> month;
                system("cls");
                while(date_time >> date_show >> time1 >> seat1 >> time2 >> seat2 >> time3 >> seat3 >> time4 >> seat4)
                {
                    cout << date_show << endl;
                }
                cout << "Choose date: ";
                cin >> date_selected;

                if(date_selected == "6")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                    cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t"<< date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "7")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "10")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t"<< date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "12")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "15")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "20")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else
                {
                    system("cls");
                    cout << "Invalid Choice!";
                }
                date_time.close();
            }
            else cout << "Unable to open file";

        }
        else if(destination_no == 2)
        {
            system("cls");
            destination_name = "Sarawak";
            ifstream date_time ("AirAsia_Sarawak_date_time.txt");
            if (date_time.is_open())
            {
                cout << "January\nFebruary\nMarch\nApril\nMay\nJune\nJuly\nAugust\nSeptember\nOptober\nNovember\nDecember" << endl;
                cout << "Select month: " ;
                cin >> month;
                system("cls");
                while(date_time >> date_show >> time1 >> seat1 >> time2 >> seat2 >> time3 >> seat3 >> time4 >> seat4)
                {
                    cout << date_show << endl;
                }
                cout << "Choose date: ";
                cin >> date_selected;
                if(date_selected == "1")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t"<< date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "5")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "10")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "12")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "15")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "25")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else
                {
                    system("cls");
                    cout << "Invalid Choice!";
                }
                date_time.close();
            }
            else cout << "Unable to open file";
        }
        else if(destination_no == 3)
        {
            system("cls");
            destination_name = "Sabah";
            ifstream date_time ("AirAsia_Sabah_date_time.txt");
            if (date_time.is_open())
            {
                 cout << "January\nFebruary\nMarch\nApril\nMay\nJune\nJuly\nAugust\nSeptember\nOptober\nNovember\nDecember" << endl;
                cout << "Select month: " ;
                cin >> month;
                system("cls");
                while(date_time >> date_show >> time1 >> seat1 >> time2 >> seat2 >> time3 >> seat3 >> time4 >> seat4)
                {
                    cout << date_show << endl;
                }

                cout << "Choose date: ";
                cin >> date_selected;
                if(date_selected == "1")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "3")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "10")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "12")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "15")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "30")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else
                {
                    system("cls");
                    cout << "Invalid Choice!";
                }
                date_time.close();
            }
            else cout << "Unable to open file";
        }
        else
        {
            cout << "Invalid Choice!";
        }

    }
    else if(airline_no == 2)
    {
        system("cls");
        airline_name = "FireFly";
        cout << "ENTER YOUR DESTINATION : " << endl;
        cout << "(1) - Miri" << endl << "(2) - Sarawak" << endl << "(3) - Sabah" << endl << endl;
        cin >> destination_no;
           if(destination_no == 1)
        {
            system("cls");
            destination_name = "Miri";
            ifstream date_time ("FireFly_Miri_date_time.txt");
            if (date_time.is_open())
            {
                cout << "January\nFebruary\nMarch\nApril\nMay\nJune\nJuly\nAugust\nSeptember\nOptober\nNovember\nDecember" << endl;
                cout << "Select month: " ;
                cin >> month;
                system("cls");
                while(date_time >> date_show >> time1 >> seat1 >> time2 >> seat2 >> time3 >> seat3 >> time4 >> seat4)
                {
                    cout << date_show << endl;
                }
                cout << "Choose date: ";
                cin >> date_selected;
                if(date_selected == "5")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "7")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "10")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "12")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "15")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "30")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else
                {
                    system("cls");
                    cout << "Invalid Choice!";
                }
                date_time.close();
            }
            else cout << "Unable to open file";

        }
        else if(destination_no == 2)
        {
            system("cls");
            destination_name = "Sarawak";
            ifstream date_time ("FireFly_Sarawak_date_time.txt");
            if (date_time.is_open())
            {
                cout << "January\nFebruary\nMarch\nApril\nMay\nJune\nJuly\nAugust\nSeptember\nOptober\nNovember\nDecember" << endl;
                cout << "Select month: " ;
                cin >> month;
                system("cls");
                while(date_time >> date_show >> time1 >> seat1 >> time2 >> seat2 >> time3 >> seat3 >> time4 >> seat4)
                {
                    cout << date_show << endl;
                }

                cout << "Choose date: ";
                cin >> date_selected;
                if(date_selected == "1")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "3")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "10")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "12")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "15")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "30")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else
                {
                    system("cls");
                    cout << "Invalid Choice!";
                }
                date_time.close();
            }
            else cout << "Unable to open file";
        }
        else if(destination_no == 3)
        {
            system("cls");
            destination_name = "Sabah";
            ifstream date_time ("FireFly_Sabah_date_time.txt");
            if (date_time.is_open())
            {
                 cout << "January\nFebruary\nMarch\nApril\nMay\nJune\nJuly\nAugust\nSeptember\nOptober\nNovember\nDecember" << endl;
                cout << "Select month: " ;
                cin >> month;
                system("cls");
                while(date_time >> date_show >> time1 >> seat1 >> time2 >> seat2 >> time3 >> seat3 >> time4 >> seat4)
                {
                    cout << date_show << endl;
                }

                cout << "Choose date: ";
                cin >> date_selected;
                if(date_selected == "1")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "3")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "10")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "12")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "15")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                    cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else if(date_selected == "30")
                {
                    system("cls");
                    cout << "Time available for " << date_selected << endl;
                    cout << time1 << "\t" << time2 << "\t" << time3 << "\t" << time4 << endl;
                    cout << "Choose time: ";
                    cin >> time_selected;
                     cout << "Enter Reference Number : ";
                    cin >> reference_no;
                    cout << "Enter Name: ";
                    cin >> client_name;
                    system("cls");
                    cout << "Are you sure want to book?" << endl;
                    cout << "Press (1) to confirm" << endl;
                    cout << "Press any key to exit" << endl;
                    cin >> confirm_book;
                    if(confirm_book == 1)
                    {
                        ofstream foutput;
                        ifstream finput;
                        finput.open("booking_detail.txt");
                        foutput.open("booking_detail.txt", ios::app);
                        if (finput.is_open())
                        {
                            foutput << reference_no << "\t" << client_name << "\t" << airline_name << "\t" << destination_name << "\t" << month << "\t" << date_selected << "\t" << time_selected << endl;
                            finput.close();
                            foutput.close();
                        }
                        else cout << "Unable to open file";
                    }
                }
                else
                {
                    system("cls");
                    cout << "Invalid Choice!";
                }
                date_time.close();
            }
            else cout << "Unable to open file";
        }
    }
    else
    {
        cout << "Invalid Choice!";
    }

}

void booking::ticket_display()
{
    cout << "Enter Reference No. : ";
    cin >> user_input;
    ifstream booking_detail("booking_detail.txt");
        if (booking_detail.is_open())
        {
            while (booking_detail >> reference_no >> client_name >> airline_name >> destination_name >> month >>date_selected >> time_selected)
            {
                if(booking_detail)
                {
                    if(reference_no == user_input)
                    {
                        cout << "Reference No. : " << reference_no << endl;
                        cout << "Name : " << client_name << endl;
                        cout << "Airline : " << airline_name << endl;
                        cout << "Origin : Kuala Lumpur" << endl;
                        cout << "Destination : " << destination_name << endl;
                        cout << "Date : " << month << "/" << date_selected << endl;
                        cout << "Time : " << time_selected << endl;
                    }
                }
            }
            booking_detail.close();
        }
        else cout << "Unable to open file";
}

int main()
{
    int choice;
    cout << "Welcome to Malaysia Airline" << endl;
    cout << "MAIN MENU" << endl;
    cout << "Press '1' for BOOKING" << endl;
    cout << "Press '2' for DISPLAY YOUR BOOKING DETAILS" << endl;
    cout << "Press '3' for UPDATE YOUR BOOKING" << endl;
    cout << "Press '4' for CANCEL YOUR BOOKING" << endl << endl;
    cout << "ENTER YOUR CHOICE : " ;
    cin >> choice;

    if(choice == 1)
    {
        system("cls");
        booking airline;
        airline.airline_select();
    }
    else if(choice == 2)
    {
        system("cls");
        booking ticket;
        ticket.ticket_display();
    }
    else if(choice == 3)
    {
        //update booking

    }
    else if(choice == 4)
    {
        //cancel booking
    }
    else
    {
        cout << "Invalid Choice!";
    }
    return choice;
    return 0;
}
//copy and modify function from main.cpp to mainextra.cpp
//update (name)
//clean up if else statement
//remove repetition using functions
//search function 
//only display reference_no for forgot own reference no
//delete - cancel booking
