#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n){

	for( int itr = 1;itr <= n-1;itr++){
		for( int j = 0; j<=(n-itr-1);j++)
		{
			if (a[j]>a[j+1]){
			swap(a[j],a[j+1]);
	    	}
		}
	}
}

int main(){
	int n;
	int a[1000];
	
	cout<<"Enter the length of the array : "<<"\n";
	cin>>n;
	
	cout<<"Enter the elements in the array : "<<"\n";
	for(int i =0; i<n ; i++){
		cin>>a[i];
	}
	
    bubble_sort(a,n);
	cout<<"Elements after bubble sort are: "<<"\n";
	for(int i = 0 ; i< n ; i++){
		cout<<a[i]<<" ";
	}
	
	return 0 ;
	
}
