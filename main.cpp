#include <iostream>
#include<fstream>
using namespace std;
/*class Passenger{
    protected:
    string name;
    string destination;
    string arrivaltime;
    string depaturetime;
    //placeholder class

};*/

/*void Logo(){
    cout << R"(
__  _                                                                                                       __  _
\ `/ |                                                                                                      \ `/ |
 \__`!                                                                                                       \__`!
 / ,' `-.__________________                  -------------------------------------------------------         / ,' `-.__________________
'-'\_____                LI`-.                Welcome to the Airline Transportation Booking System          '-'\_____                LI`-.
   <____()-=O=O=O=O=O=[]====--)              -------------------------------------------------------           <____()-=O=O=O=O=O=[]====--)
     `.___ ,-----,_______...-'                                                                                   `.___ ,-----,_______...-'
          /    .'                                                                                                     /    .'
         /   .'                                                                                                      /   .'
        /  .'                                                                                                       /  .'
        `-'                                                                                                         `-'


    )"<<endl;
}*/

void MainMenu(){
    char choice;
    do {
        cout << "Do you want to exit the program?";
        cin >> choice;
    }while(choice == 'Y' | 'y' );
}

void modify(Passanger &i){
int choice;
string newname;
int newarrivaltime;
string newdestination;
int newdepaturetime;

cout<< " what do you want to modify ?"<<endl<<endl;

cout<< "1) modify your name"<<endl;
cout<< "2) modify your destination"<<endl;
cout<< "3) modify your arrival time"<<endl;
cout<< "4) modify your depature time"<<endl;

cout<< " Enter the number you want to modify."<<endl;
cin>>choice;
if(choice<4 && choice>=1){
do{
        switch(choice)
        {
        case 1 :
                cout<<"Enter your new name"<<end;
                cin>>newname;
                i.Name = newname;
                cout<<"new name updated !"<<endl;;

                break;
        case 2 :
                cout<<"Enter your new destination"<<end;
                cin>>newdestination;
                i.Destination = newdestination;

                cout<<"new destination updated"<<endl;
                break;
        case 3 :
                cout<<"Enter your new arrival time"<<endl;
                cin>>newarrivaltime;
                i.ArrivalTime = newarrivaltime;
                cout<<"new arrival time !"<<endl;;

                break;

        case 4 :
                cout<<"Enter your new departure time"<<endl;
                cin>>newdepaturetime;
                i.DepatureTime = newdepaturetime;

                cout<<"new name departure time updated !"<<endl;;


                break;

        }




}while(choice<4 && choice>=1);
}else{
        cout<<"Enter number from 1 to 4 only"<<endl;

        }



}

void add_passenger()
{
  /*void get_data(char firstname,char lastname,char address, char reservation_no,char current,char dest)
 {
    cout<<"\n\n        -------------------Please enter the required information for passenger number-------------------"<<endl;
    cout<<"\n\n\nEnter the firstname of passenger: ";
    cin>>firstname;
    cout<<"Enter the lastname of passenger: ";
    cin>>lastname;
    cout<<"Enter address of passenger:  ";
    cin>> address;
    cout<<"Enter the reservation no. of ticket: ";
    cin>> reservation_no;
    cout<<"Please enter the passenger current location (IN CAPITAL LETTERS ONLY):  ";
    cin,current;
    cout<<"Please enter the passenger destination (IN CAPITAL LETTERS ONLY):  ";
    cin,dest;
    cout<<endl<<endl;
 }*/

/*void display_data(char firstname,char lastname,char address, char reservation_no,char current,char dest)
{

    cout<<"Your E-Ticket is :"<<endl;
    cout<<"                           AIRLINE TICKET                                 "<<endl;
    cout<<"|Ticket No.\tA";
    cout<<"\t\t\t\tReference No.";
    cout<<"\t  "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|Reservation No. :"<<reservation_no<<"                                    "<<endl; //auto display
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|Passenger Information :                                                  "<<endl;
    cout<<"|Name :"<<lastname<<"\t"<<firstname<<"                                     "<<endl;
    cout<<"|                                                                         "<<endl;
    cout<<"|Address :"<<address<<"                                                   "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|flight Information :                                                     "<<endl;
    cout<<"|Date:                                                                    "<<endl; //date
    cout<<"|International/Local:                                                     "<<endl; //auto display from client
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|Depart :"<<current<<"                                                    "<<endl;
    cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
    cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
    cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
}
*/
    char firstname[100];
   char lastname[100];
   char address[255];
    char current[100];
    char dest[100];
    char reservation_no[100];
   // get_data(firstname, lastname, address, reservation_no, current, dest);
    cout<<"\n\n        -------------------Please enter the required information for passenger number-------------------"<<endl;
    cout<<"\n\n\nEnter the firstname of passenger: ";
    cin>>firstname;
    cout<<"Enter the lastname of passenger: ";
    cin>>lastname;
    cout<<"Enter address of passenger:  ";
    cin>> address;
    cout<<"Enter the reservation no. of ticket: ";
    cin>> reservation_no;
    cout<<"Please enter the passenger current location (IN CAPITAL LETTERS ONLY):  ";
    cin>>current;
    cout<<"Please enter the passenger destination (IN CAPITAL LETTERS ONLY):  ";
    cin>>dest;
    cout<<endl<<endl;
    //display_data(firstname, lastname, address, reservation_no, current, dest);
     cout<<"Your E-Ticket is :"<<endl;
    cout<<"                           AIRLINE TICKET                                 "<<endl;
    cout<<"|Ticket No.\tA";
    cout<<"\t\t\t\tReference No.";
    cout<<"\t  "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|Reservation No. :"<<reservation_no<<"                                    "<<endl; //auto display
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|Passenger Information :                                                  "<<endl;
    cout<<"|Name :"<<lastname<<"\t"<<firstname<<"                                     "<<endl;
    cout<<"|                                                                         "<<endl;
    cout<<"|Address :"<<address<<"                                                   "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|flight Information :                                                     "<<endl;
    cout<<"|Date:                                                                    "<<endl; //date
    cout<<"|International/Local:                                                     "<<endl; //auto display from client
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|Depart :"<<current<<"                                                    "<<endl;
    cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
    cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
    cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
}


int main(){


    //Logo();
    cout <<"Test";
    //MainMenu();

    return 0;
}
