#include<iostream>
using namespace std;

int main() {
	char x;
	cin>>x;
	if(x>=65 && x<=90){
		cout<<"1"<<endl;
	}
	else if(x>=97 && x<=122){
		cout<<"0"<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}

