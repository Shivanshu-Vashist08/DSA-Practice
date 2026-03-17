#include<iostream>
using namespace std;
int largest_element(int arr[],int size){
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cin>>array[i];
}
int largest_element=largest_element(array,n);
cout<<"Largest Element of the array is: "<<largest_element<<endl;
retur
