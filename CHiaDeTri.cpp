#include<bits/stdc++.h>
using namespace std;

void sinh(int *&a, int &n){
	cout<<"\n So phan tu mang can sinh: ";
	cin>>n;
	a = new int[n];
	for(int i = 0; i < n; i++)
		a[i] = rand()%501;
}

void in(int *&a,  int &n){
	cout<<"Mang da sinh: ";
	for(int i = 0; i < n; i++)
		cout<<" "<<a[i];
}


int main(){
	int *a, n;
	
	sinh(a,n);
	in(a,n);
	
	
	
	return 0;
} 
