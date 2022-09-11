#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	vector<int>k;
	vector<int>p;
	vector<pair<int,int>>vct;   // declaring the vector pairs 
	for(int i = 0 ;i<a;i++){
		int b;
		cin>>b;
		k.emplace_back(b);
	}
	for (int i =0 ;i<a;i++){
		int c;
		cin>>c;
		p.emplace_back(c);
	}
	for(int i =0 ;i<a;i++){
		vct.push_back({k[i],p[i]});    // pusshing the values to vector pairs 
	}


	sort(vct.begin(),vct.end());


	for (int i = a-1 ;i>=0;i--){
		cout<<vct[i].first<<" "<<vct[i].second<<"\n";
		}
}
	