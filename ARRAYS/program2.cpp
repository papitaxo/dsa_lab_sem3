#include<iostream>
// deletion of an array 
int* del(int N,int A[], int value);

int main() {
    
    int N;
    int A[N];

    std::cout<<"Enter the size of an array: ";
    std::cin>>N;

    for ( int i=0; i < N; i++) {
        std::cout<<"Enter the element "<< i+1 << ": ";
        std::cin>>A[i];
    }
    int X;

    std::cout<<"Enter Value to Delete: ";
    std::cin>>X;

    del(N,A,X); 

    N--; // size will decrease for the array by one as one element 
        // is removed.

    std::cout<<"{ ";
    for ( int i=0; i < N; i++)  {
        std::cout<<A[i] <<" ";
    }
    std::cout<<" }";

    return 0;
}

// deletion function 

    int* del(int N,int A[], int value) {
        for (int i=0; i<N ; i++) {
            if(A[i]==value) {
                while (i!=N) {
                A[i]=A[i+1];
                }
            }
        }
        return A;
    }