Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of odd numbers: 45
Sum of even numbers: 30

CODE:=

#include<iostream>
using namespace std;
int main(){
    int odd=0;
    int even=0;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int j=0;j<size;j++){
        if(arr[j]%2==0){
            even=even+arr[j];
        }
        else{
            odd=odd+arr[j];
        }
    }
    cout<<"Sum of odd numbers: "<<odd<<endl;
    cout<<"Sum of even numbers: "<<even;
    return 0;
}
