#include <iostream>
#include<fstream>
using namespace std;

void Logo(){
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
}

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



}




int main(){


    Logo();
    cout <<"Test";
    MainMenu();

    return 0;
}


