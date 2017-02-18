#include<stdio.h>
main(){
		long long int n,k,count=0,i=0,j=0,r=0;
		scanf("%lld",&n);
		scanf("%lld",&k);
		long long int a[n],temp[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<=n;j++){
				if(a[i]==a[j])
					j++;
					else{
				if(a[i]+a[j]%k!=0){
				temp[i]=a[i];
			}
			printf("%d\n",temp[i]);
			}
		}
	}		
}

