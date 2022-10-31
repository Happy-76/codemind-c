#include <iostream>
using namespace std;
int operate(int arr[], int n)
{
	int sum=0, i=0;
label:
	sum += arr[i++];
	if (i < n) {
		goto label;
	}
	return sum;
}
int main()
{
	int n, sum = 0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	sum = operate(arr, n);
	cout << sum;
}
