#include <bits/stdc++.h>
using namespace std;

int Reverse(int arr[],int start, int end){
	
	while(start<end){
		int temp;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void Display(int arr[], int size){
	
	int i;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int n,i;
	cout<<"Enter size of an array :"<<endl;
	cin>>n;
	cout<<"Enter elements :"<<endl;
	int arr[n];	
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
		
	cout<<"Original Array is :"<<endl;
	Display(arr,n);
	
	cout<<"\nReversed Array is :"<<endl;
	Reverse(arr,0,n-1);
	Display(arr,n);
	
	return 0;
}
