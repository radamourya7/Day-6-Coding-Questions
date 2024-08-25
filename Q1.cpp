Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of the array: 75

CODE:=

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: ";
    int sum=0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int j=0;j<size;j++){
        sum=sum+arr[j];
    }
    cout<<sum;
    return 0;
}
