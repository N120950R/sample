#include<stdio.h>
main(){
		int n,k,s,i,j,count=0;
		scanf("%d %d",&n,&k);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
					s=a[i]+a[j];
					if(s%k==0){
						count=count+1;
					}	
                	}
             }	
			 printf("%d\n",count);		
				}
				
