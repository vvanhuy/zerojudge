//a244
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin>>N;
	for(int i=0;i<N;++i){
		long long a,b,c;
		cin>>a>>b>>c;
		if(a==1) cout<<b+c<<"\n";
		else if(a==2) cout <<b-c<<"\n";
		else if(a==3) cout << b*c<<"\n";
		else cout << b/c<<"\n";
	}
	return 0;
}