#include <iostream>
#include "Container.h"
#include "Files.h"


using namespace std; 



int main()
{

    cout<<"Hello"<<endl; 
    string data = "data.csv";
     read(data);
     charArray s1;

   s1.push_back('a');
   s1.print();
   s1.push_back('b');
   s1.print();
   s1.push_back('a');
   s1.print();
   s1.push_back('b');
   s1.print();
   s1.push_back('a');
   s1.print();
   cout<<"Maximum Values in charArray: "<<s1.getMaxValues()<< endl;
   cout<<"Maximum size of charArray: "<<s1.maxSize()<< endl;
   cout<<"Size of charArray: "<<s1.size() << endl;
   s1.reserve(20);
   cout<<"After calling reserve new Maximum Values in charArray: "<< s1.maxSize()<< endl;
   cout<<"Is array empty or not: " << s1.isEmpty()<<endl;



    cout<<endl;
    return 0;
}