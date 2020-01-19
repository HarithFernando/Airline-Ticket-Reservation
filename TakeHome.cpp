
// A simple C++ program to show working of getline 
#include <iostream> 
#include <cstring> 
#include <string>
#include <fstream>

using namespace std; 
int main() 
{ 
std::ifstream inFile("./Flights.txt");
	if(!inFile)
	{
		cout<<"Couldn't open the file"<<endl;
		exit(1);
	}
	
	string line;
    int i=0;
    string arr[5];
	while( getline(inFile, line)  )
        {
           arr[i]= line;
           i=+1;
        }

        for(int x=0; x<5 ; x++){
            cout << arr[x];
        }
} 
