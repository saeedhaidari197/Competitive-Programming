#include <bits/stdc++.h>
int k,r,a[105];char c;
main() {
	scanf("%d",&k);
	k++;
	while(k--){if(c=getchar()=='B') a[r]++;else if(a[r])r++;}
	if(a[r])r++;
	printf("%d\n",r);
	for(int i=0;i<r;i++) printf("%d ",a[i]);
}