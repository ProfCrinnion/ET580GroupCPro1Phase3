#ifndef Algorithms_H
#define Algorithms_H
#include <set>

template <typename Z>
class charArray {
private: 

    int maxValues;
    int numValues; 
    char* data;
  
public:
 charArray(int max = 5);

    ~charArray();

    bool isPartof(const vector<int>& A, const vector<int>& B);
    static set<Z>* commonValues(const set<Z>& A1,const set<Z>& B1);




};
#endif