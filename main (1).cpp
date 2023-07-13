
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
   
   
    cout << "Please enter your Name: ";//Gayathri.V
    string Name;
    getline(cin, Name);
    cout << "Please enter your CollegeName: ";//Vivekanandha College of Engineering for Women
    string CollegeName;
    getline(cin, CollegeName);
    cout << "Please enter your Email: ";//gayathrivel2003@gmail.com
    string Email;
    getline(cin, Email);
    cout << "Please enter your location: ";
    string location;
    getline(cin, location);
   
   
    string weather[] = {"Cloudy", "Dry", "Rain", "Thunderstrom","Heatwaves"};
    int index = rand() % 5;
    string prediction = weather[index];
    string weather1[] = {"Cloudy", "Dry", "Rain", "Thunderstrom","Heatwaves"};
    int index1 = rand() % 5;
    string prediction1 = weather1[index1];
    string weather2[] = {"Cloudy", "Dry", "Rain", "Thunderstrom","Heatwaves"};
    int index2 = rand() % 5;
    string prediction2 = weather2[index2];
    string weather3[] = {"Cloudy", "Dry", "Rain", "Thunderstrom","Heatwaves"};
    int index3 = rand() % 5;
    string prediction3 = weather3[index3];
   
   
    cout << "\t Today's weather in  " << location << " is " << prediction << endl;
    cout << "\t Yesterday's weather in  " << location << " was " << prediction1 << endl;
    cout << "\t Tommorow's weather in  " << location << " will be " << prediction2 << endl;
    cout << "\t Weekly report in  " << location << " could " << prediction3 << endl;
   
    return 0;
}