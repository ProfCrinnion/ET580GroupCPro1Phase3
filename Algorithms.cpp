#include"Algorithms.h" 
#include<iostream>
#include<cassert>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

template <typename Z>

//bool charArray::isPartof(int A, int B){

bool charArray::isPartof(const vector<int>& A, const vector<int>& B) {
    int A,B;
    if( A.empty()) {
        return true; // Empty set is a subset of any set
    }

    // Find the first occurrence of A's first element in B
    auto clap = search(B.begin(), B.end(), A.begin(), A.end());

    // If A's first element is not in B, it can't be a subset
    if (clap == B.end()) {
        return false;
    }

    // Checking if the remaining elements of A are consecutive in B
    for (size_t i = 1; i < A.size(); ++i) {
        if (*(++clap) != A[i]) {
            return false;
        }
    }

    return true;
}

 /*
set<Z>* charArray::commonValues(const set<Z>& A1,const set<Z>& B1)
{
    auto* C1 = new const set<Z>();
    for (const auto& elem : A1)
    {
        if (B1.find(elem) != B1.end())
        {
            C1->insert(elem);
        }
    }
    return C1;
} 

*/
/*
int main() {
    vector<int> A = {2, 3, 4};
    vector<int> B = {1, 2, 3, 4, 5};

    if (isPartof(A, B)) {
        cout << "A is a consecutive ordered subset of B" << endl;
    } else {
        cout << "A is not a consecutive ordered subset of B" << endl;
    }

    return 0;
}

/*


