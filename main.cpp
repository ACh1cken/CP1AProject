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


int main(){


    Logo();
    cout <<"Test";
    MainMenu();

    return 0;
}