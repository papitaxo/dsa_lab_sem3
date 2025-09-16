#include<iostream>
#include<vector>

//union of two sets.
void uni(std::vector<int> A, std::vector<int> B, std::vector<int> C);

int main () {

    std::vector<int> A;
    std::vector<int> B;
    std::vector<int> C;

    int sizeA,sizeB,sizeC;
    int temp;

    std::cout<<"Enter the size of Set A: ";
    std::cin>>sizeA;

    std::cout<<"Enter the elements of Set A: \n";

    for (int i=0 ; i < sizeA ; i++) {
        std::cin>>temp;
        A.push_back(temp);
    }
    std::cout<<"Enter the size of Set B: ";
    std::cin>>sizeB;

    std::cout<<"Enter the elements of Set B: \n";

    for (int i=0 ; i < sizeB ; i++) {
       std::cin>>temp;
       B.push_back(temp);
    }

    std::cout<<"THE UNION OF SET: ";
    
    uni(A,B,C);

}

void uni(std::vector<int> A, std::vector<int> B, std::vector<int> C) {
    int i=0,j=0;
    while(i< A.size() && j< B.size()) {
        if (A[i]<B[j]) {
            C.push_back(A[i++]);
        }
        else if (A[i]>B[j]) {
            C.push_back(B[j++]);
        }
        else {
            C.push_back(A[i++]);
            j++;
        }
    }

    while ( i < A.size()) {
        C.push_back(A[i++]);
    }

    while ( j < B.size()) {
        C.push_back(B[j++]);
    }

    //printing the output

    std::cout<<"{ ";
    for(int i : C) {
        std::cout<<i<<" ";
    }
    std::cout<<"} ";
}