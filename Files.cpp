#include <iostream>
#include <fstream>
#include <sstream> // to use c_str()
#include <string> // to use  getline()
#include <vector> // 
#include "Files.h"
using namespace std; 



void read(string data)
{ //initialze vector char dynamic array
    
    ifstream myFile;
    myFile.open(data); //Opens csv file

    int x = 0; 


    char arrary_Data[8]; //declaring arrary size 

    

    while(myFile.good())
    { //good() While True the file is open, it will turn false once file is close, ending this while loop ~ Imran.Y 

        string letters;
        getline(myFile,letters,',');
        const char* cletters = letters.c_str(); // converts each letter to string using pointers and c_str()
        
        arrary_Data[x] = *cletters;
        //cout<<arrary_Data[x]<<endl;
        x++;
        

    }
}

/*
int main()
{
    string file = "data.csv";
    read(file);

    return 0; 
}*/