#include <cstdio>
#include <vector>
using namespace std;

int main(){

	//键盘输入数字到可变数组vector
	vector<int> vi;
	int x,n,N;
	vi.push_back(0);
	scanf("%d%d",&n,&N);
	for (int i = 1; i <= n; i++)
	{	
		scanf("%d",&x);
		vi.push_back(x);
	}


	/*for (int i = 0; i < vi.size(); i++)
	{
		printf("%d\n",vi[i] );
	}*/

	int i,j,sum=0;
	for(int k=1;k<n;k++){
		i=vi[k];
		j=vi[k+1];
		sum+=(j-i)*k;
	}
	printf("%d\n", sum+(N-vi[n])*n);

	
	return 0;
}