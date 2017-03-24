#include<iostream>
using namespace std;
int main(){
	int *A;
	int n;
	cout << "Please enter the size of array: ";
	cin >> n;
	A = new int[n];
	cout << "Please input the elements:\n";
	for(int k = 0; k < n; k++){
		cin >> A[k];
	}
	int i = n, j = 0;
	int mid;
	
	while(i - j > 1){
		mid = (i + j)/2;
		if(A[mid] >= A[mid + 1]){
			//cout << "A\n";
			i = mid;
		}
		else{
			//cout << "B\n";
			j = mid + 1;
		}
	}
	//cout << i << "," << j << endl;
	if(A[i] > A[j])
		cout << A[i];
	else
		cout << A[j];
	return 0;
}
