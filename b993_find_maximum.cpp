//b993;
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	while(cin>>N){
		int pmax;
		cin>>pmax;
		for(int i=1;i<N;++i){
			int p;
			cin>>p;
			if(p>pmax) pmax=p;
		}
		cout << pmax<< "\n";
	}
}