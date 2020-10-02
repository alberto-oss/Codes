#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int lo, int hi){
	int ret = lo-1;
	int pivot = hi;
	for(int i = lo; i < hi; i++){
		if(arr[i] < arr[hi]){
			ret++;
			swap(arr[ret], arr[i]);
		}
	}
	swap(arr[hi], arr[++ret]);
	if(ret == 2) cout << "yes" << "\n";
	return ret;
}
void quick_sort(int arr[], int lo, int hi){
	if(lo >= hi) return;
	int pi = partition(arr, lo, hi);
	quick_sort(arr, lo, pi-1);
	quick_sort(arr, pi+1, hi);
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	quick_sort(arr, 0, n-1);
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
