#include"Container.h" 
#include<iostream>
#include<cassert>
using namespace std;

 

charArray::charArray(int max):maxValues(max), numValues(0) {
    data = new char[maxValues];
}

charArray::~charArray(){
    delete[] data;
}
int charArray::getMaxValues() const {
    return maxValues;
}
int charArray::getNumValues() const {
    return numValues;
}
char* charArray::getData() const{
    return data;
}



void charArray::clear() { 
    numValues = 0; 
    maxValues =5;
    delete[] data;
    data = new char[maxValues];
}

//empty needed

bool charArray::isEmpty() const{
    if (getNumValues() == 0){
        return true;
    }
    else 
    return false;
}
//size needed

int charArray::size() const{
    int size = getNumValues();
    return size;
}
//maxSize needed

int charArray::maxSize() const{
    int maxSize = getMaxValues();
    return maxSize;
}
//reserve needed

void charArray::reserve(int newMaxValue) const{

    int maxValue = getMaxValues();
    int numValue = getNumValues();
    if(newMaxValue > maxValue) {
        char* newData = new char[newMaxValue];
        for (int i=0; i<numValue ; ++i){
            newData[i] = data[i];
        }
        delete[] data;
        char* data = newData;
        maxValue = newMaxValue;

    }
}
//pushback needed

 void charArray::push_back(int value){
    int maxValue = getMaxValues();
    int numValue = getNumValues();
    if(numValue == maxValue)
     { reserve(maxValue *2) ;};
     data[numValues] = value;
     numValues++;

 }



//print needed

void charArray::print() 
{
    cout<< numValues<<"  "<< maxValues<<endl;
    for(int i=0; i<numValues; ++i) {cout << data[i] << " "; }
    cout << "\n";
}

char charArray::at(int index) const{

    int size = getNumValues();
    assert(index < size);
    return data[index];
}

void charArray::pop_back() {
    int numValues = getNumValues();
    if (numValues == 0){
        cout<<"No elements to pop"<< endl;
    }
    else
        numValues = numValues-1;
}

 // sorted needed

void charArray::sortedinsert(int value){
    int maxValue = getMaxValues();
    int numValue = getNumValues();
    if(numValue == maxValue)
     { reserve(maxValue *2) ;};
     data[numValues] = value;
     numValues++;
    
    int n;
    int a[n];
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
}
void charArray::erase(int index)
{
    char data[8];

    int c;

    for(auto i: data)
    {
        cout<<i<<" ";
   		c++;
    }
    assert(index >= 0 && index < c);
    for (int i = index; i< c -1; ++i)
    {
        data[i] = data[i + 1];
    }
    
    --c;

}




/*

int main(){
    cout<<endl;

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
  // s1.reserve(20);
  // cout<<"After calling reserve new Maximum Values in charArray: "<< s1.maxSize()<< endl;
   cout<<"Is array empty or not: " << s1.isEmpty()<<endl;
   cout<< "data at index 2 is : "<< s1.at(3)<< endl;
    s1.push_back('h');
    s1.push_back('w');
    s1.push_back('z');
   s1.pop_back();
   cout<< "Array size after pop_back: "<< s1.size()<< endl;
   cout<<endl;

return 0;

}
*/
