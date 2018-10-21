#include<iostream>
using namespace std;

int f1 (int arr[],int n){
	int max = arr [0];
	for (int i=0;i<n;i++){
	if (max < arr[i]){max = arr[i];}}
return max;
}
	
int f2 (int arr[],int n){
	int min = arr [0];
	for (int i=0;i<n;i++){
	if (min > arr[i]){min = arr[i];}}
return min;
}

float mean(int arr[],int n){
	int me=0;
	for (int i=0;i<n;i++){
	me = me + arr[i];}
float l = n;
float x = me/l;

return x;
}

void swap(int *xp,int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void sort(int arr[]){
	int i,j;
	for (i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if (arr[j] > arr[j+1]){ swap(&arr[j], &arr[j+1]);}
		}
	}
}

int frequency (int arr[],int n){
	int mx=1; int curr=1; int res=arr[0];
	for (int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){curr++;}
	else{
		if(curr>mx){mx=curr;
		res = arr[i-1];}}
	curr = 1;
	}
return res;
}

int main(){

int n;

// Forming the array
cout << "How many elements do you want to have in array?" << endl;
cin >> n;

int arr[n-1];
cout << "Give us numbers to put in the array." << endl;
for (int i = 0;i<n;i++){
cin >> arr[i];}

cout << "The array is ";
for (int i=0;i<n;i++){cout << arr[i]<<" ";}
cout << endl;

//finding the largest of the elements
cout << "The largest of the elements is " <<f1(arr,n) << endl;

//finding the smallest of the elements
cout << "The smallest of the elements is " <<f2(arr,n) << endl;

//finding the mean of the elements
cout << "The mean of the elements is " <<mean(arr,n) << endl;

// Finding the median
sort(arr);
if ((n-1)%2!=0){int y = (n)/2;
	int z = (arr[y]+arr[y-1]);
	float x = z/2.00;
cout << "Median of the array is " << x << endl;
	}
else {int x = (n+1)/2;
	x = arr[x-1];
cout << "Median of the array is " << x << endl;}

// Finding the highest frequency of all elements
 
int freq = frequency(arr,n);
cout << "Most frequent element in array is " << freq << endl;


return 0;
}
