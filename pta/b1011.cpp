#include <cstdio>

int main(){
	int T,k=5,tcase=1;
	scanf("%d",&T);   //输入数据组数T
	while(T--){
		long a,b,c;
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a+b>c)
			printf("Case #%d：true\n",tcase++);   //先用tcase当前值1打印输出，再+1
		else
			printf("Case #%d：false\n",tcase++);
	}

/*
	while(T--){	//执行T次
		printf("%d",T);
	}
	while(--k){	//执行T-1次
		printf("%d",k);	
	}
*/

	return 0;
}
