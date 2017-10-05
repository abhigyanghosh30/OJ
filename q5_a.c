#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(;t>0;t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int a[n],b[1000000];
		int i;
		for(i=0;i<1000000;i++)
			b[i]=0;
		int max=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]]++;
			max=a[i]>max?a[i]:max;
		}
		long int sum=0;
		int c=0;
		for(i=max;i>=0;i--)
		{
			if(b[i]>0)
			{
				int j;
				for(j=1;j<=b[i];j++)
				{
					c++;
					sum+=i;
					if(sum>=k)
						break;
				}
				if(sum>=k)
					break;
			}
		}
		if(sum<k)
			printf("-1\n");
		else 
			printf("%d\n",c);
	}
	return 0;
}
