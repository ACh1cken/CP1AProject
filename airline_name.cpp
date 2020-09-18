#include <iostream>
#include <fstream>
using namespace std;

int main () {
   ofstream myfile ("airline_name.txt");
  if (myfile.is_open())
  {
    myfile << 1 << "\tAirAsia\n";
    myfile << 2 << "\tFireFly\n";
    myfile << 3 << "\tMaskargo\n";
    myfile.close();
  }
  else cout << "Unable to open file";

  ifstream airline_name_file ("airline_name.txt");
        if (airline_name_file.is_open())
        {
            while (airline_name_file >> airline_no >> airline_name)
            {
                if(airline_name_file)
                {
                    if(airline_no == 2)
                    {
                        cout << "You have choose " << airline_name;
                    }
                }
            }
            airline_name_file.close();
        }
        else cout << "Unable to open file";
  return 0;
}
