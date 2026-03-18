#include<iostream>
using namespace std;
void Rev_array(int arr[],int size){
int start=0;
int end=size-1;
while(start<end){
swap(arr[start],arr[end]);
start++;
end--;
}
}
int main(){
int size;
cout<<"Enter the size of the array: "<<endl;
cin>>size;
int array[size];
cout<<"Enter the element of the array: "<<endl;
for(int i=0;i<size;i++){
cin>>array[i];
}
cout<<"Array element before reverse array: "<<endl;
for(int i=0;i<size;i++){
	cout<<array[i]<<endl;
}
Rev_array(array,size);
cout<<"Array element after reverse array: "<<endl;
for(int i=0;i<size;i++){
	cout<<array[i]<<endl;
}
return 0;	
}
