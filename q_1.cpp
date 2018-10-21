#include<iostream>
using namespace std;

void f1 (int arr[], int n){
	for (int i =0; i<=n; i++){
		arr[i] = i;}
}


int f2  (int arr[], int n){
int sum = 0;
	for (int i=0;i<=n;i++){
		sum = sum + arr[i];}
return sum;
}

int main(){

int n;
cout << "Upto where do you wish to find the sum?" << endl;
cin >> n; 

int arr [n];

// Putting the values in array

f1 (arr, n);

// Adding the values in array

int r = f2 (arr,n);

// Printing the sum
cout << "The sum is " << r << endl;

return 0;
}
