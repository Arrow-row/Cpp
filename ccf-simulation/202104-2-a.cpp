#include <cstdio>

//暴力解法超时

int main(){
	int n,L,r,t,ans=0;
	int xs,xe,ys,ye;
	int A[600][600]={0};
	scanf("%d%d%d%d",&n,&L,&r,&t);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			scanf("%d",&A[i][j]);
			}
	for(int i=0;i<n;i++){
		xs=(i-r)<0?0:i-r;
		xe=(i+r)<n?i+r:n-1;
		//printf("xs=%d xe=%d\n",xs,xe );
		for(int j=0;j<n;j++){
			ys=(j-r)<0?0:j-r;
			ye=(j+r)<n?j+r:n-1;
			int sum=0,count=0;
			//printf("ys=%d ye=%d\n",ys,ye );
			for(int p=xs;p<=xe;p++)
				for(int q=ys;q<=ye;q++){
					//printf("%d ", A[p][q]);
					sum+=A[p][q];
					count++;
				}
			int res=(sum-1)/count+1; //向上取整
			//printf("\n");
			
			//printf("res=%d sum=%d count=%d\n",res,sum,count);

			if(res<=t) ans++;
		}		
	}
	printf("%d",ans);
	return 0;
}
