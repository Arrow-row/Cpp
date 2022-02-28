#include <cstdio>

int main(){
	int m,n,k,L;
	scanf("%d%d%d",&n,&m,&L);
	int ans[256]={0},A[500][500];	//数组长度：1.必须是正整数 2.可以是整型常量、整型常量表达式、符号常量，不能是变量（C语言不允许对数组长度大小作动态声明）
	for (int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			scanf("%d",&A[i][j]);	//常用初始化方法：1.声明数组同时进行初始化 2.先声明，然后在程序中对其进行初始化
			k=A[i][j];
			ans[k]++;
		}
	/*for (int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			printf("%d",A[i][j]);	
			
			//ans[k]++;
		}
	*/
	for (int i=0;i<L;i++)	printf("%d ",ans[i]);
	return 0;

}
