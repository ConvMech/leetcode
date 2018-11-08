#include <iostream>
#include <vector>
using namespace::std;

void helper (int start, int end){
	if (start == end){
		cout<<"start==end"<<start<<endl;
		return;
	}
	if (start > end){
		cout<<"start > end"<<start<<" "<<end<<endl;
		return;
	}
	int mid = (start + end)/2;
	cout<<"start, middle, end"<<start<<" "<<mid<<" "<<end<<endl;
	helper (start, mid -1);
	helper (mid + 1,end);
	return;
}
int main(){
	vector<int> test;
	for (int i=0 ; i<10; ++i){
		test.push_back(i);
	}
	int start = 0;
	int end = test.size() -1;
	helper(start,end);
}