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

	for(int i = 0; i <= n-1; i++){
		int j = i;
		while(j > 0 && arr[j-1] > arr[j]){
			int temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}