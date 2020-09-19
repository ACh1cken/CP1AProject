#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<windows.h>


using namespace std;
//copy and modify function from main.cpp to mainextra.cpp
//update (name)
//clean up if else statement(done)
//remove repetition using functions(done)
//search function 
//only display reference_no for forgot own reference no
//delete - cancel booking
//generate report

class booking
{
    public:
    static const int line_num = 6;
    int date_[line_num];
    int airline_no, destination_no, confirm_book, reference_no, user_input,date_selected;
    string airline_name,time_selected,destination_name,month,client_name;

    string listmonth[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    void airline_select();
    void ticket_display();

    void clearconsole(){//Clear terminal
        system("cls");
    }
};

class Location :virtual public booking{
    public : 
    string time1[line_num], seat1[line_num], time2[line_num], seat2[line_num], time3[line_num], seat3[line_num], time4[line_num], seat4[line_num];
    void fileIntoArray(string filename,string dest);
    void booking_details(int x);
};


void Location::booking_details(int x){
        system("cls");
        cout << "Time available for " << date_selected << endl;
        cout << time1[x] << "\t" << time2[x] << "\t" << time3[x] << "\t" << time4[x] << endl;
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


void Location :: fileIntoArray(string filename,string dest){
    clearconsole();
    destination_name = dest;

    ifstream file(filename);
    if (file.is_open()){
        int i = 0;
        //string temp_month;
        while(file >> date_[i] >> time1[i] >> seat1[i] >> time2[i] >> seat2[i] >> time3[i] >> seat3[i] >> time4[i] >> seat4[i]){
            cout << date_[i] << " "<<time1[i]<<" "<<seat1[i]<<endl;;
            i++;
        }clearconsole();

        cout << "The months available are : "<<endl;
            for(int k = 0;k < 12; k++){
                cout << listmonth[k]<<endl;
            }
            cout << "Please select desired month: ";
            cin >> month;
            clearconsole();

        cout << "Dates available for booking are :";
            for(int j = 0; j < line_num;j++){
                cout << date_[j]<<"th "<<endl;
            }
        cout << R"("Please select desired date (without "th"): )";
        cin >> date_selected;
        if(date_selected == date_[0]){
            cout << date_[0]<<endl;
            booking_details(0);
        }else if(date_selected == date_[1]){
            cout << date_[1]<<endl;
            booking_details(1);
        }else if(date_selected == date_[2]){
            cout << date_[2]<<endl;
            booking_details(2);
        }else if(date_selected == date_[3]){
            cout << date_[3]<<endl;
            booking_details(3);
        }else if(date_selected == date_[4]){
            cout << date_[4]<<endl;
            booking_details(4);
        }else if(date_selected == date_[5]){
            cout << date_[5]<<endl;
            booking_details(5);
        }else{
            cout << "Invalid Choice! \n"<< "You will now be sent back to the Main Menu"<<endl;
            Sleep(2000);
        }
        
    }else {
        cout << "Unable to open file."<<endl;
    }file.close();
}



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
            Location A_Miri;
            A_Miri.fileIntoArray("AirAsia_Miri_date_time.txt","Miri");
        }
        else if(destination_no == 2)
        {
            Location A_Sarawak;
            A_Sarawak.fileIntoArray("AirAsia_Sarawak_date_time.txt","Sarawak");
        }
        else if(destination_no == 3)
        {
            Location A_Sabah;
            A_Sabah.fileIntoArray("AirAsia_Sabah_date_time.txt","Sabah");
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
            Location F_Miri;
            F_Miri.fileIntoArray("FireFly_Miri_date_time.txt","Miri");
        }
        else if(destination_no == 2)
        {
            Location F_Sarawak;
            F_Sarawak.fileIntoArray("FireFly_Sarawak_date_time.txt","Sarawak");
        }
        else if(destination_no == 3)
        {
            Location F_Sabah;
            F_Sabah.fileIntoArray("FireFly_Sabah_date_time.txt","Sabah");
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
