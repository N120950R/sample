#include<stdio.h>
main(){
		char ch[10],k[10],i,count=0;
		scanf("%s",ch);
		for(i=0;ch[i]!='\0';i++){
			count=count+1;
		}
		printf("%d",count);
		for(i=count;ch[i]!=0;i--){
			k[i]=ch[i];
		printf("%s",k);
	}
}
