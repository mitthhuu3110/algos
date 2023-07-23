#include<bits/stdc++.h>
#include<iostream>
using namespace std;


// if you run the loop until a place where the element does not exist then the compiler throws a run time error

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	for(int i = n-1; i >= 0; i--){
		for(int j= 0; j <= i-1; j++){
				if(arr[j] > arr[j+1]){
					int temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp; 
				}
		}
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

  return 0;
}