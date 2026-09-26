// d069
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int year;
		cin>>year;
		if(year%4==0&&year%100!=0||year%400==0)cout << "a leap year\n";
		else cout <<"a normal year\n";
	}
	return 0;
}