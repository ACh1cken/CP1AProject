#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<windows.h>
#include<vector>
#include<iomanip>
#include<limits>
#undef max();
using namespace std;
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
    void deleteUser();

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
    vector <int> passenger_no;
    int numPassenger;
    void reportMenu();
    void getDestReport(string x, string y,string airlineN);
    void getMonthReport(string x, string y,string airlineN);
    void displayAll(string x);
    void displayAll(string x, string y);

};

void clearconsole();
void newl(int x);//used in table
void mainmenu();

void booking::edit(){
    const int a= 18;
    string newname;
    string exitchoice;
    int count =1;

    int idd[a];
    string namee[a];
    string airlinee[a];
    string  locationn[a];
    string  monthh[a];
    int  date[a];
    string  timee[a];
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

newl(145);
for(int i =0;i<9;i++){//loop

    cout<<"| "<<"Reference No : "<<setw(10)<<idd[i]<<" "<<"Name :"<<setw(15)<<namee[i]<<" "<<"Airline :"<<setw(15)<<airlinee[i]<<" "<<"Location :"<<setw(13)<<locationn[i]<<" "<<"Month :"<<setw(15)<<monthh[i]<<" "<<"Date :"<<setw(5)<<date[i]<<" "<<"Time :"<<setw(5)<<timee[i]<<setw(2)<<" |"<<endl;
}
newl(145);
int id;
cout<<"Enter Reference number"<<endl;
cin>>id;

for(z = 0;z<9;z++){
    if(id == idd[z]){
    cout<<"Welcome "<<namee[z]<<endl;
        break;


}}

    cout<<"Enter new name "<<endl;
    cin>>newname;
    namee[z] = newname;
    cout<<"New name changed !"<<endl;
    cout<<namee[z]<<endl;;

newl(145);
for(int i =0;i<9;i++){//loop2

    cout<<"| "<<"Reference No : "<<setw(10)<<idd[i]<<" "<<"Name :"<<setw(15)<<namee[i]<<" "<<"Airline :"<<setw(15)<<airlinee[i]<<" "<<"Location :"<<setw(13)<<locationn[i]<<" "<<"Month :"<<setw(15)<<monthh[i]<<" "<<"Date :"<<setw(5)<<date[i]<<" "<<"Time :"<<setw(5)<<timee[i]<<setw(2)<<" |"<<endl;
}
newl(145);
z=0;

for(int i =0;i<9;i++){

    tempfile<<idd[i]<<" "<<namee[i]<<" "<<airlinee[i]<<" "<<locationn[i]<<" "<<monthh[i]<<" "<<date[i]<<" "<<timee[i]<<""<<endl;
}
file.close();
tempfile.close();
remove("booking_detail.txt");
rename("tempfile.txt","booking_detail.txt");
cout << endl<<endl
<< "Return to Main Menu? (Y/N)\n";
cin >> exitchoice;
if (exitchoice == "Y"|| exitchoice == "y"){
    system("cls");
    mainmenu();
}
}

void booking::deleteUser(){
    clearconsole();
    const int a = 18;
    int idd[a];
    string namee[a];
    string airlinee[a];
    string  locationn[a];
    string  monthh[a];
    int  date[a];
    string  timee[a];
    int i = 0;
    int k;
    int refno;

    cout<<"Enter reference number: "<<endl;
    while(!(cin >> refno)){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Returning to main menu..."<<endl;
    Sleep(1000);
    clearconsole();
    mainmenu();
    }
    ifstream infile("booking_detail.txt");
    ofstream tmpfile("JAOF.txt");
    if (infile.is_open()){

        while (infile >>idd[i]>>namee[i]>>airlinee[i]>>locationn[i]>>monthh[i]>>date[i]>>timee[i]){
            if (refno != idd[i] ){
                tmpfile<<idd[i]<<" "<<namee[i]<<" "<<airlinee[i]<<" "<<locationn[i]<<" "<<monthh[i]<<" "<<date[i]<<" "<<timee[i]<<""<<endl;
                
            }else {
                k = i;
                cout << "Removed user : "<<namee[k]<<endl;
                cout << "Reference number of : "<<idd[k]<<endl;
                
            }
            i++;
        }
    }else {cout << "Unable to open file!\n";}
        infile.close();
        tmpfile.close();
        remove("booking_detail.txt");
        rename("JAOF.txt","booking_detail.txt");

    string exitchoice;
    cout << endl<<endl
    << "Return to Main Menu? (Y/N)\n";
    cin >> exitchoice;
    if (exitchoice == "Y"|| exitchoice == "y"){
    system("cls");
    mainmenu();
    }
    
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

    while(1)
    {
    if(cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;
    cout << "Invalid input.  Try again: ";
    }
    if(!cin.fail())
    break;
    }

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
        booking dlt;
        dlt.deleteUser();
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
        cin.ignore();
        cout <<"Invalid input!"<<endl;
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
            cout <<"AirAsia: \n"<<endl;
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
            cout <<"AirAsia: \n"<<endl;
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

            default : 
            clearconsole();
            mainmenu();
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
            cout <<"FireFly"<<endl;
            cout << "Miri:"<<endl;
            newl(53);
            getDestReport("booking_detail.txt","Miri","FireFly");
            cout << "Sabah: "<<endl;
            newl(53);
            getDestReport("booking_detail.txt","Sabah","FireFly");
            cout << "Sarawak: "<<endl;
            newl(53);
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
            cout <<"FireFly"<<endl;
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

            default : 
            clearconsole();
            mainmenu();
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
                passenger_no.push_back(reference_no);
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
            cout << "Passenger number "<<o+1<<" : "<<setw(10)<<passenger_name[o]<<" Ref number : "<<passenger_no[o]<<endl;
            }cout<<endl<<endl;
            passenger_name.clear();
            passenger_no.clear();
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
                passenger_no.push_back(reference_no);
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
            cout << "Passenger number "<<o+1<<" : "<<setw(10)<<passenger_name[o]<<" Ref number : "<<passenger_no[o]<<endl;
            }
            }else {cout << "There is no passenger travelling on "<<y<<endl;}
       newl(53);
        cout<<endl;
        passenger_name.clear();
        passenger_no.clear();
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
        if (time_selected == time1[x]||time_selected == time2[x] ||time_selected == time3[x] ||time_selected == time4[x]){
            cout << "You have entered : "<<time_selected<<endl;
        }else{
            cout << "Invalid input!\n";
            cout << "You will be returned to the main menu!\n";
            Sleep(1000);
            clearconsole();
            mainmenu();
        }

        cout << "Please enter desired Reference Number : ";
        while(!(cin >> reference_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
        }

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
            //cout << reference_no << " " << client_name << " " << airline_name << " " << destination_name << " " << month << " " << date_selected << " " << time_selected << endl;
            if (finput.is_open())
            {
                foutput << reference_no << " " << client_name << " " << airline_name << " " << destination_name << " " << month << " " << date_selected << " " << time_selected << endl;
                finput.close();
                foutput.close();
                cout <<"Booking successful! Welcome : "<<client_name<<endl;
                string exitchoice;

                cout << endl<<endl
                << "Return to Main Menu? (Y/N)\n";
                cin >> exitchoice;
                if (exitchoice == "Y"|| exitchoice == "y"){
                    system("cls");
                    mainmenu();
                }

            }
            else cout <<  "Unable to open file";
        }else {
            cout <<"Booking cancelled. Returning to main menu"<<endl;
            Sleep(1500);
            clearconsole();
            mainmenu();
        }

}

void Location :: fileIntoArray(string filename,string dest){
    clearconsole();
    destination_name = dest;

    ifstream file(filename);
    if (file.is_open()){
        int i = 0;
        int w;
        //string temp_month;
        while(file >> date_[i] >> time1[i] >> seat1[i] >> time2[i] >> seat2[i] >> time3[i] >> seat3[i] >> time4[i] >> seat4[i]){
            i++;
        }clearconsole();

        cout << "The months available are : "<<endl;
            for(int k = 0;k < 12; k++){
                cout << "("<<k+1<<")" <<listmonth[k]<<endl;
            }
            cout << "Please select desired month: ";
            cin >> w;
            
            while(1)
            {
            if(cin.fail())
            {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"You have entered wrong input"<<endl;
            cout<<"Please enter again."<<endl;
            cin>>w;
            }
            if(!cin.fail())
            break;
            }

            for (int z =0; z<12;z++){
                if (w-1 == z){
                    month = listmonth[z];
                    break;
                }
            }
            clearconsole();
            cout <<"You have selected :"<< month<<endl;

        cout << "Dates available for booking are :"<<endl;
            for(int j = 0; j < line_num;j++){
                cout << date_[j]<<"th "<<endl;
            }
        cout << R"(Please select desired date (without "th"): )";
        while(!(cin >> date_selected)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
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
            clearconsole();
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
        cout << airline_name;
        cout << "ENTER YOUR DESTINATION : " << endl;
        cout << "(1) - Miri" << endl << "(2) - Sarawak" << endl << "(3) - Sabah" << endl << endl;
        cin >> destination_no;
        if(destination_no == 1)
        {
            Location A_Miri;
            A_Miri.airline_name = "AirAsia";
            A_Miri.fileIntoArray("AirAsia_Miri_date_time.txt","Miri");
        }
        else if(destination_no == 2)
        {
            Location A_Sarawak;
            A_Sarawak.airline_name = "AirAsia";
            A_Sarawak.fileIntoArray("AirAsia_Sarawak_date_time.txt","Sarawak");
        }
        else if(destination_no == 3)
        {
            Location A_Sabah;
            A_Sabah.airline_name = "AirAsia";
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
            F_Miri.airline_name = "FireFly";
            F_Miri.fileIntoArray("FireFly_Miri_date_time.txt","Miri");
        }
        else if(destination_no == 2)
        {
            Location F_Sarawak;
            F_Sarawak.airline_name = "FireFly";
            F_Sarawak.fileIntoArray("FireFly_Sarawak_date_time.txt","Sarawak");
        }
        else if(destination_no == 3)
        {
            Location F_Sabah;
            F_Sabah.airline_name = "FireFly";
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
    string exitchoice;
    cout << "Enter Reference No. : ";
    while(!(cin >> user_input)){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Returning to main menu..."<<endl;
    Sleep(1000);
    clearconsole();
    mainmenu();
    }
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
                        string exitchoice;
                        cout << endl<<endl
                        << "Return to Main Menu? (Y/N)\n";
                        cin >> exitchoice;
                        if (exitchoice == "Y"|| exitchoice == "y"){
                            system("cls");
                            mainmenu();
                        }
                    }
                    
                }
            }
            booking_detail.close();
        }
        else cout << "Unable to open file";
                cout << endl<<endl
        << "Number not found! \n"
        << "Return to Main Menu? (Y/N)\n";
        cin >> exitchoice;
        if (exitchoice == "Y"|| exitchoice == "y"){
            system("cls");
            mainmenu();
        }
}


int main()
{
    logo("welcome1.txt");
    mainmenu();
    return 0;
}
