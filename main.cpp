#include <iostream>
#include <sstream>
using namespace std;

int main() {
	unsigned int n;
	
	string line;
	getline(cin,line);
	istringstream numstream(line);
	if(!(numstream>>n)){
		cout<<"An error has occuried while reading input data.";
		exit(0);
	}
	
	getline(cin,line);
	istringstream arrstream(line);
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		if(!(arrstream>>arr[i])){
		        cout<<"An error has occuried while reading input data.";
		        exit(0);
		}
		
	}
	
	int lastindex=0;
	while(lastindex!=n-1){
		for(int i=lastindex;i<n;i++){
			if(arr[lastindex]>arr[i]){
				swap(arr[lastindex],arr[i]);
				break;
			}
			if(i==n-1){
				lastindex++;
			}
		}
		
	}
	for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
	}
	return 0;
}
