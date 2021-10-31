#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
	int i ,n , key ;
	int a[10] ={0};
	
	cout<<"Enter the number of elements you want to enter in the array : ";
	cin>>n;
	
	for ( i = 0 ; i< n ; i++){
		cin>>a[i];
	}
	
	int largest = INT_MIN;
	int smallest = INT_MAX;
	
	for (i = 0; i< n ; i++){
	    largest =  max(a[i],largest);
		smallest =  min(a[i],smallest);
	}
	
	cout<<"Largest "<< largest <<"\n";
		cout<<"Smallest"<<smallest<<"\n";
	
	
	return 0 ;
}
