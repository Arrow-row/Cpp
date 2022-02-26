#include <stdio.h>


int main(){
	
	int n,N,a[200];	//n=3,N=10
	scanf("%d%d",&n,&N);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int i,j,sum=0;
	for(int k=1;k<n;k++){
		i=a[k];
		j=a[k+1];
		sum+=(j-i)*k;
	}
	printf("%d\n", sum+(N-a[n])*n);
	return 0;
}