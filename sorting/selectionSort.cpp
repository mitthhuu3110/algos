#include<bits/stdc++.h>
#include<iostream>
using namespace std;




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

	for(int i = 0; i <= n-2; i++){
		int mini = i;
		for(int j = i; j <= n-1; j++){
			if(arr[j] < arr[mini]) mini = j;
		}
		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i] = temp;
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}

