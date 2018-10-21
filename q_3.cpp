#include<iostream>
using namespace std;

int max(int arr[],int n,int k){
	// Finding the maximum
	int mx = arr [0];
	for (int i=0;i<n;i++){
		if (mx < arr[i]){mx = arr[i];}}
		
		// Kicking out the current max to get the next max value by recursion
		if (k==1){return mx;}
			for (int i=0;i<n;i++){if(mx==arr[i]){arr[i]=0;}}

	return max(arr,n,k-1);
}

int min(int arr[],int n,int k){
	// Finding the minimum
	int mn = arr [0];
	for (int i=0;i<n;i++){
		if (mn > arr[i]){mn = arr[i];}}
		
		// Kicking out the current min to get the next min value by recursion
		if (k==1){return mn;}
			
		else{
	for (int i=0;i<n;i++){if(mn==arr[i]){arr[i]=max(arr,n,1);}}}

	
	return min(arr,n,k-1);
}

int main(){
int n;

// Forming an array
cout << "Let's form an array first." << endl;
cout << "How many elements you want?" << endl;
cin >> n;
int a[n-1];

cout << "Enter the elements for the array." << endl;
for(int i=0;i<n;i++){cin >> a[i];}
int b[n-1];
for (int i=0;i<n;i++){b[i] = a[i];}
int k;
cout << "Which kth max and min value you wish to find?" << endl;
cin >> k;

// Finding the max
int r1=max(a,n,k);
cout << "Kth max element is " << r1 << endl;

// Finding the min
int r2=min(b,n,k);
cout << "Kth min element is " << r2 << endl;


return 0;
}
