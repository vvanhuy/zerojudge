#include<bits/stdc++.h>

using namespace std;
long long daonguocso(long long n){
	//logic ham
	long long sodaonguoc=0;
	while(n!=0){
		sodaonguoc=sodaonguoc*10+n%10;
		n/=10;
	}
	return sodaonguoc;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin>>n;
	cout <<daonguocso(n);
}