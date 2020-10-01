#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<windows.h>
#include<vector>
#include<iomanip>

using namespace std;
//copy and modify function from main.cpp to mainextra.cpp
//update (name)
//remove repetition using functions(done)
//search function （already included)
//only display reference_no for forgot own reference no
//delete - cancel booking
//generate report

class booking
{
    protected:
    static const int line_num = 6;
    int date_[line_num];
    int airline_no, destination_no, confirm_book, reference_no, user_input,date_selected;
    string airline_name,time_selected,destination_name,month,client_name;
    public:
    string listmonth[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    void airline_select();
    void ticket_display();
    void edit();

};

class Location :virtual public booking{
    public :
    string time1[line_num], seat1[line_num], time2[line_num], seat2[line_num], time3[line_num], seat3[line_num], time4[line_num], seat4[line_num];
    void fileIntoArray(string filename,string dest);
    void booking_details(int x);
    ~Location(){
        cout << "I was destroyed \n";//test
    }
};

class Report : virtual public booking, Location{
    public:
    ~Report(){
        cout <<"I blew up \n";//test
    }
    int airlinereportChoice,reportChoice;
    vector <string> passenger_name;
    int numPassenger;
    void reportMenu();
    void getDestReport(string x, string y,string airlineN);
    void getMonthReport(string x, string y,string airlineN);
    void displayAll(string x);
    void displayAll(string x, string y);

};

void newl(int x);//used in table
void booking::edit(){


    string newname;
    string newairline;
    string newlocation;
    string newmonth;
    int newdate;
    string newtime;

    int count =1;

    int idd[9];
    string namee[9];
    string airlinee[9];
    string  locationn[9];
    string  monthh[9];
    int  date[9];
    string  timee[9];
    int z;
     int i = 0;
     int choice;

   fstream file;
   ofstream tempfile ("tempfile.txt");

   file.open("booking_detail.txt");
   if(file.is_open()){

    while(file>>idd[i]>>namee[i]>>airlinee[i]>>locationn[i]>>monthh[i]>>date[i]>>timee[i]){
    i++;

    }


   }else{
   cout<<"file not open"<<endl;
   }

newl(135);
for(int i =0;i<9;i++){//loop

    cout<<"| "<<"ID : "<<setw(10)<<idd[i]<<" "<<"Name :"<<setw(15)<<namee[i]<<" "<<"Airline :"<<setw(15)<<airlinee[i]<<" "<<"Location :"<<setw(13)<<locationn[i]<<" "<<"Month :"<<setw(15)<<monthh[i]<<" "<<"Date :"<<setw(5)<<date[i]<<" "<<"Time :"<<setw(5)<<timee[i]<<setw(2)<<" |"<<endl;
}
newl(135);
int id;
cout<<"Enter ID number"<<endl;
cin>>id;

for(z = 0;z<9;z++){
    if(id == idd[z]){
    cout<<"Welcome "<<namee[z]<<endl;
        break;


}}

cout<<"What do you need to change ?"<<endl;
    cout<<"Enter 1 to change name "<<endl;
    cout<<"Enter 2 to change airline "<<endl;
    cout<<"Enter 3 to change destination "<<endl;
    cout<<"Enter 4 to change month "<<endl;
    cout<<"Enter 5 to change day "<<endl;
    cout<<"Enter 6 to change time "<<endl;
    cin>>choice;



    switch(choice){
case 1:
    cout<<"Enter new name "<<endl;
    cin>>newname;
    namee[z] = newname;
    cout<<"New name changed !"<<endl;
    cout<<namee[z]<<endl;;

    break;
case 2:
    cout<<"Enter new airline "<<endl;
    cin>>newairline;
    airlinee[z] = newairline;
    cout<<"New airline changed !"<<endl;


    break;
case 3:
  cout<<"Enter new destination "<<endl;
    cin>>newlocation;
    locationn[z] = newlocation;
    cout<<"New location changed !"<<endl;

    break;
case 4:
  cout<<"Enter new month "<<endl;
    cin>>newmonth;
    monthh[z] = newmonth;
    cout<<"New month changed !"<<endl;

    break;
case 5:
  cout<<"Enter new date "<<endl;
    cin>>newdate;
    date[z] = newdate;
    cout<<"New date changed !"<<endl;

    break;
case 6:
  cout<<"Enter new time "<<endl;
    cin>>newtime;
    timee[z] = newtime;
    cout<<"New time changed !"<<endl;

    break;

    }
newl(135);
for(int i =0;i<9;i++){//loop2

    cout<<"| "<<"ID : "<<setw(10)<<idd[i]<<" "<<"Name :"<<setw(15)<<namee[i]<<" "<<"Airline :"<<setw(15)<<airlinee[i]<<" "<<"Location :"<<setw(13)<<locationn[i]<<" "<<"Month :"<<setw(15)<<monthh[i]<<" "<<"Date :"<<setw(5)<<date[i]<<" "<<"Time :"<<setw(5)<<timee[i]<<setw(2)<<" |"<<endl;
}
newl(135);
z=0;

for(int i =0;i<9;i++){

    tempfile<<idd[i]<<" "<<namee[i]<<" "<<airlinee[i]<<" "<<locationn[i]<<" "<<monthh[i]<<" "<<date[i]<<" "<<timee[i]<<""<<endl;
}
file.close();
tempfile.close();
remove("booking_detail.txt");
rename("tempfile.txt","booking_detail.txt");
}


void clearconsole(){//Clear terminal
    system("cls");
}

void logo(string x){
    string tmp;
    ifstream ifs (x);
	string lines = "";

    if (ifs){
		while (ifs.good ()){
	    	string TempLine;
	    	getline (ifs ,tmp);
	    	tmp =tmp+"\n";

	    	lines = lines + tmp;
		}
	cout << lines;
	}

    Sleep(2000);
    clearconsole();
    ifs.close();
}



void mainmenu(){
int choice;
    cout << "Welcome to Malaysia Airline Booking System.\n" << endl;
    newl(50);
    cout <<left<<"|"<< "\t\t    MAIN MENU" <<setw(23)<<right<<"|"<< endl;
    newl(50);
    cout <<left<<"| "<<setw(49)<< "Press '1' for BOOKING" <<right<<"|"<< endl;
    cout <<left<<"| "<<setw(49)<< "Press '2' for DISPLAY YOUR BOOKING DETAILS" <<right<<"|"<< endl;
    cout <<left<<"| "<<setw(49)<< "Press '3' for UPDATE YOUR BOOKING" <<right<<"|"<< endl;
    cout <<left<<"| "<<setw(49)<< "Press '4' for CANCEL YOUR BOOKING" <<right<<"|"<< endl;
    cout <<left<<"| "<<setw(49)<< "Press '5' to VIEW REPORT"<<right<<"|"<<endl;
    cout <<left<<"| "<<setw(49)<< "Press '6' to EXIT the booking program"<<right<<"|"<<endl;
    newl(50);
    cout <<left<< "ENTER YOUR CHOICE : ";
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
        system("cls");
        booking edt;
        edt.edit();
        //update booking

    }
    else if(choice == 4)
    {
        //cancel booking
    }
    else if(choice == 5){
        cout << "Loading Database...\n";
        //Sleep(2000);
        clearconsole();
        Report report1;
        report1.reportMenu();
    }
    else if(choice == 6){
        cout << "You will now exit the program...\n";
        Sleep(1250);
        clearconsole();
        logo("thankyou.txt");
    }
    else
    {
        cout << "Invalid Choice!\n";
        Sleep(500);
        clearconsole();
        mainmenu();
    }
}



void Report:: reportMenu(){
    string exitchoice;
    cout << "Please select which airline report that you want to view.\n"
         << "1) Air Asia.\n"
         << "2) Firefly.\n"
         << "3) Both Air Asia and Firefly.\n\n"
         << "Press any other keys to return to main menu.\n"
         << "Enter your choice : \n";
    std::cin >> airlinereportChoice;
    clearconsole();
    if (airlinereportChoice == 1){
        cout << "You have selected Air Asia report."<<endl<<endl;
        cout << "Please select desired report : \n"
             << "1) Sorted by destination.\n"
             << "2) Sorted by month.\n"
             << "3) Full report.\n"
             << "4) Exit report selection.\n"
             << "Please enter your selection :"<<endl;
        cin >> reportChoice ;
        switch(reportChoice){
            case 1 :
            clearconsole();
            cout << "Miri:"<<endl;
            newl(53);
            getDestReport("booking_detail.txt","Miri","AirAsia");
            cout << "Sabah: "<<endl;
            newl(53);
            getDestReport("booking_detail.txt","Sabah","AirAsia");
            cout << "Sarawak: "<<endl;
            newl(53);
            getDestReport("booking_detail.txt","Sarawak","AirAsia");
            cout << endl<<endl
            << "Return to Main Menu? (Y/N)\n";
            cin >> exitchoice;
            if (exitchoice == "Y"|| exitchoice == "y"){
                clearconsole();
                mainmenu();
            }
            break;

            case 2:
            clearconsole();
            for (int cx = 0;cx < 12; cx++){
                getMonthReport("booking_detail.txt",listmonth[cx],"AirAsia");
            }
            cout << endl<<endl
            << "Return to Main Menu? (Y/N)\n";
            cin >> exitchoice;
            if (exitchoice == "Y"|| exitchoice == "y"){
                clearconsole();
                mainmenu();
            }
            break;

            case 3:
            clearconsole();
            displayAll("AirAsia");
            cout << endl<<endl
            << "Return to Main Menu? (Y/N)\n";
            cin >> exitchoice;
            if (exitchoice == "Y"|| exitchoice == "y"){
            clearconsole();
            mainmenu();
            }
            break;

            case 4:
             reportMenu();
             clearconsole();
            break;

            default : mainmenu();
            break;
        }

       // getDestReport();
    }else if (airlinereportChoice == 2){
        clearconsole();
        cout << "You have selected FireFly report."<<endl<<endl;
        cout << "Please select desired report : \n"
             << "1) Sorted by destination.\n"
             << "2) Sorted by month.\n"
             << "3) Full report.\n"
             << "4) Exit report selection.\n"
             << "Please enter your selection :"<<endl;
        cin >> reportChoice ;
        switch(reportChoice){
            case 1 :
            clearconsole();
            cout << "Miri:"<<endl;
            cout << "==============================================\n";
            getDestReport("booking_detail.txt","Miri","FireFly");
            cout << "Sabah: "<<endl;
            cout << "==============================================\n";
            getDestReport("booking_detail.txt","Sabah","FireFly");
            cout << "Sarawak: "<<endl;
            cout << "==============================================\n";
            getDestReport("booking_detail.txt","Sarawak","FireFly");
            cout << endl<<endl
            << "Return to Main Menu? (Y/N)\n";
            cin >> exitchoice;
            if (exitchoice == "Y"|| exitchoice == "y"){
                clearconsole();
                mainmenu();
            }
            break;

            case 2:
            clearconsole();
            for (int cx = 0;cx < 12; cx++){
                getMonthReport("booking_detail.txt",listmonth[cx],"FireFly");
            }
            cout << endl<<endl
            << "Return to Main Menu? (Y/N)\n";
            cin >> exitchoice;
            if (exitchoice == "Y"|| exitchoice == "y"){
                clearconsole();
                mainmenu();
            }
            break;

            case 3 :
            clearconsole();
            displayAll("FireFly");
            cout << endl<<endl
            << "Return to Main Menu? (Y/N)\n";
            cin >> exitchoice;
            if (exitchoice == "Y"|| exitchoice == "y"){
                clearconsole();
                mainmenu();
            }
            break;

            case 4 :
            clearconsole();
            reportMenu();
            break;

            default : mainmenu();
            break;
        }

       // getDestReport();
    }else if (airlinereportChoice == 3){
        displayAll("AirAsia","FireFly");
        cout << endl<<endl
        << "Return to Main Menu? (Y/N)\n";
        cin >> exitchoice;
        if (exitchoice == "Y"|| exitchoice == "y"){
            clearconsole();
            mainmenu();
        }
    }else {mainmenu();}
}


void Report::getDestReport(string x,string y,string airlineN){
    ifstream inf(x);
    string prefix;
    string prefix1;
    if (inf.is_open()){
        numPassenger = 0;
        while (inf >> reference_no >> client_name >> airline_name >> destination_name >> month >>date_selected >> time_selected)
        {
            if (destination_name == y && airline_name == airlineN){
                passenger_name.push_back(client_name);
                numPassenger = numPassenger + 1;
            }
        }
            if (numPassenger == 1){
            prefix = " passenger ";
            prefix1 = "His/Her name is ";
            }else {prefix = " passengers ";
            prefix1 = "Their names are ";}

            cout << "There is a total of "<<numPassenger<<prefix<<"travelling to "<< y <<"."<<endl;
            if (numPassenger  == 0){
                cout << "No passengers"<<endl;
            }else {cout <<prefix1<< ":\n";}

            for (int o = 0 ; o < numPassenger;o++){
            cout << "Passenger number "<<o+1<<" : "<<passenger_name[o]<<endl;
            }cout<<endl<<endl;
            passenger_name.clear();
            inf.close();
    }else cout << "Unable to open file!\n"<<endl;

}

void Report::getMonthReport(string x, string y,string airlineN){
    ifstream inf(x);
    string prefix2;
    string prefix3;
    if (inf.is_open()){
        numPassenger =0;
        while (inf >> reference_no >> client_name >> airline_name >> destination_name >> month >>date_selected >> time_selected)
        {
            if (month == y && airline_name == airlineN){
                passenger_name.push_back(client_name);
                numPassenger = numPassenger + 1;
            }
        }
        if (numPassenger == 1){
            prefix2 = " passenger ";
            prefix3 = "His/Her name is ";
        }else {prefix2 = " passengers ";
            prefix3 = "Their names are ";}
        if(numPassenger >= 1){
            cout << "There is a total of "<<numPassenger<<prefix2<<"travelling on "<< y <<endl;
            cout<< prefix3<<":\n";
            for (int o = 0 ; o < numPassenger;o++){
            cout << "Passenger number "<<o+1<<" : "<<passenger_name[o]<<endl;
            }
            }else {cout << "There is no passenger travelling on "<<y<<endl;}
       newl(53);
        cout<<endl<<endl;
        passenger_name.clear();
        inf.close();

    }else {cout << "Unable to open file!\n"<<endl;}

}

void newl(int x){
    cout <<"+";
    for (int i = 0 ; i<x;i++){cout << "-";}
    cout <<"+";
    cout << endl;
}

void Report::displayAll(string x,string y){//overloaded function

    int airline_no, destination_no, confirm_book, reference_no, user_input,date_selected;
    string airline_name,time_selected,destination_name,month,client_name;
    newl(99);
    cout << setw(16)<<left<<"| Reference Num"<<setw(20)<<left<<"| Passenger Name"<<setw(12)<<left<<"| Airline"<<setw(16)<<left<<"| Destination"<<setw(12)<<left<<"| Month"<<setw(12)<<left<<"| Date"<<setw(10)<<left<<"| Time"<<setw(3)<<right<<"|"<<endl;
    newl(99);
    ifstream inf("booking_detail.txt");
    while (inf >> reference_no >> client_name >> airline_name >> destination_name >> month >>date_selected >> time_selected){
        if (airline_name == x || airline_name == y){
        cout<<left<<"|"<<setw(14)<<right<<reference_no<<left<<" |"<<setw(18)<<right<<client_name<<left<<" |"<<setw(10)<<right<<airline_name<<left<<" |"<<setw(14)<<right<<destination_name<<left<<" |"<<setw(10)<<right<<month<<left<<" |"<<setw(10)<<right<<date_selected<<left<<" |"<<setw(10)<<right<<time_selected<<" |"<<endl;
        }
    }newl(99);
};
void Report::displayAll(string x){//overloaded function

    int airline_no, destination_no, confirm_book, reference_no, user_input,date_selected;
    string airline_name,time_selected,destination_name,month,client_name;
    newl(99);
    cout << setw(16)<<left<<"| Reference Num"<<setw(20)<<left<<"| Passenger Name"<<setw(12)<<left<<"| Airline"<<setw(16)<<left<<"| Destination"<<setw(12)<<left<<"| Month"<<setw(12)<<left<<"| Date"<<setw(10)<<left<<"| Time"<<setw(3)<<right<<"|"<<endl;
    newl(99);
    ifstream inf("booking_detail.txt");
    while (inf >> reference_no >> client_name >> airline_name >> destination_name >> month >>date_selected >> time_selected){
        if (airline_name == x ){
        cout<<left<<"|"<<setw(14)<<right<<reference_no<<left<<" |"<<setw(18)<<right<<client_name<<left<<" |"<<setw(10)<<right<<airline_name<<left<<" |"<<setw(14)<<right<<destination_name<<left<<" |"<<setw(10)<<right<<month<<left<<" |"<<setw(10)<<right<<date_selected<<left<<" |"<<setw(10)<<right<<time_selected<<" |"<<endl;
        }
    }newl(99);
};


void Location::booking_details(int x){
        system("cls");
        cout << "Time available for " << date_selected << endl;
        cout << time1[x] << "\t" << time2[x] << "\t" << time3[x] << "\t" << time4[x] << endl;
        cout << "Choose time: ";
        cin >> time_selected;
            cout << "Please enter desired Reference Number (6 digits): ";
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
            cout << "Invalid Choice! \n"<< "You will now be sent back to the Main Menu..."<<endl;
            Sleep(2000);
            mainmenu();
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
            system("cls");
            mainmenu();
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
        system("cls");
        mainmenu();
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
    logo("welcome1.txt");
    mainmenu();
    return 0;
}
