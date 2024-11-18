#ifndef CONTAINER_H 
#define CONTAINER_H
    
class charArray {
private: 

    int maxValues;
    int numValues; 
    char* data;
  
public:
 charArray(int max = 5);

    ~charArray();

     int getMaxValues() const;
     int getNumValues() const;
     char* getData() const;

     bool isEmpty() const;
     int size() const;
     void clear();
     int maxSize() const;
     void reserve (int newMaxValue) const;
     void push_back(int value);  // dont mark as const
     void print();
     char at(int index) const;
     void pop_back();
     void sortedinsert(int value);
     void erase(int data);

    
 };
#endif 

