/*
 * https://vjudge.net/contest/500740#problem/J
 */

#include<stdio.h>
#include<string.h>
 
int main(){
 
	int n;
	
	char s[1001][41];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf(" %[^\n]",s[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(s[i],s[j])==0){
				printf("Yes\n");
				return 0;
			}
		}
	}
	
	printf("No\n");
	
	return 0;
}