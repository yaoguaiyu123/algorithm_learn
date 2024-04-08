#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#define int __int128 //用__int128稳一点 
using namespace std;
int f[10000010]={1,1};
vector<int> v;
signed main(){
	for(int i=2;i<=10000010;i++){//欧拉筛求素数 
		if(f[i]==0){//如果没被标记过，那么i是质数 
			v.push_back(i);
		}
		for(int j=0;j<v.size()&&v[j]*i<=10000010;j++){
			f[v[j]*i]=1;//标记以i为最大因数的数为不是素数（除了1和本身）
			if(i%v[j]==0){//如果p[j]是i的因数，那么后面的数都不是以i为最大因数的 
				break;
			}
		}
	}
	cout << "筛选完毕" <<endl;
	cout << v.size() <<endl;
	long long ans=0; 
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]*v[i]*v[j]*v[j]<2333)continue;//小于那就不要，继续 
			if(v[i]*v[i]*v[j]*v[j]>23333333333333)break;//大于直接退出 
			ans++;
		}
	}
	cout<<ans<<endl; 
} 
