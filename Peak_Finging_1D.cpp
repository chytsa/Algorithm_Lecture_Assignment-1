#include<iostream>
using namespace std;
int main(){
	int A[7] = {1, 6, 4, 3, 12, 19, 18};
	int i = 0, j = 6;
	int mid;
	
	while(j - i > 1){
		mid = (i + j)/2;
		if(A[mid] >= A[mid - 1]){
			//cout << "A\n";
			i = mid;
		}
		else{
			//cout << "B\n";
			j = mid - 1;
		}
	}
	//cout << i << "," << j << endl;
	if(A[i] > A[j])
		cout << A[i];
	else
		cout << A[j];
	return 0;
}
