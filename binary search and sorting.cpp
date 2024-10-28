#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, terkecil; // a adalah int yang mau kita inputkan di masing masih array arr
	cin >> a;
	int arr[a+5];
	
	for (int i=0; i<a; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<a; i++){
		terkecil=arr[i];
		for(int j=i; j<a; j++){
			if(terkecil>arr[j]){
				terkecil = arr[j];
				b=j;
			}
		}
		if(terkecil!=arr[i]){
			arr[b] = arr[i];
			arr[i] = terkecil;
		}
	}
	
	for(int i=0; i<a; i++){
		cout << arr[i] << " ";
	}
}