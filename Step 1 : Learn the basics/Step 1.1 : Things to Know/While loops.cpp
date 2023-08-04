#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, even=0, odd=0;
	cin>>n;
	while(n>0){
		int c = n%10;
		n = n/10;
    if(c%2 == 0){
			even += c;
		}
		else{
			odd += c;
		}
		
	}
	cout<<even<<" "<<odd;
}
