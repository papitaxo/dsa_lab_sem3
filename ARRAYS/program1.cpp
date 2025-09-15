#include<iostream>


// insertion of an element in the array

int* insert(int size,int Array[],int value, int pos);

int main() {
    int N;
    int A[N];

    std::cout<<"Enter the size of an array: ";
    std::cin>>N;

    for ( int i=0; i < N; i++) {
        std::cout<<"Enter the element "<< i+1 << ": ";
        std::cin>>A[i];
    }
  
    //insertion 
    int value,pos;

    std::cout<<"Enter value and its pos for insertion: ";
    std::cin>>value>>pos;
    
    insert(N,A,value,pos); //calling the function

    N++; // size will increase for the array by one as one element 
        // is added.

    std::cout<<"{ ";
    for ( int i=0; i < N; i++)  {
        std::cout<<A[i] <<" ";
    }
    std::cout<<" }";

    return 0;
}

// function for inserting a value in array at an pos.

int* insert(int size,int Array[],int value, int pos) {
    size++;
    for ( int i=size; i >= pos; i--) {
        Array[i]=Array[i-1];
    }
    Array[pos-1]=value;
    return Array;
}