#include <bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n, int sum)
{
	for (int i = 0; i < n; i++) {
		int curr_sum = arr[i];

		// try all subarrays starting with 'i'
		for (int j = i + 1; j <= n; j++) {
			if (curr_sum == sum) {
				cout << "Sum found between indexes "
					<< i << " and " << j - 1;
				return 1;
			}
			if (curr_sum > sum || j == n)
				break;
			curr_sum = curr_sum + arr[j];
		}
	}

	cout << "No subarray found";
	return 0;
}

int main()
{
    int size;
    int sum;
    cout << "Array Length : ";
    cin>> size;
    int arr[size];
    cout << "Enter The Array Elements : "<<endl;
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
	cout<<"Enter The sum You want to found : ";
	cin>>sum;
	// int arr[] = { 1,4,20,3,10,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	subArraySum(arr, n, sum);
	return 0;
}
