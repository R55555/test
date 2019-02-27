#include<stdio.h>
#include<string.h>
void checkimpo(char a[],int n,int c)
{	int i;
	for(i=0;i<n;i++)
	{	if(a[i]=='-')
		{	printf("IMPOSSIBLE\n");
			return;
		}
	}
	printf("%d times\n",c);
}
void checkright(char a[],int n,int k)
{	int c=0,i,j;
	//printf("hai\n");
	for(i=0;i<n-k+1;i++)
	{	if(a[i]=='-')
		{	for(j=i;j<i+k;j++)
			{	printf("%d\t",j);
				if(a[j]=='+')
				{	a[j]='-';
				}
				else
				{	a[j]='+';
				}
			}
			printf("\n\n");
			c++;
		}
		printf("%d\n",i);
	}
	checkimpo(a,n,c);
	printf("Hello\n");
} 	
void main()
{	char a[50];
	int k;
	printf("Enter a string as input : ");
	scanf("%s",a);
	printf("%s\n",a);
	printf("%ld\n",strlen(a));
	printf("Enter k : ");
	scanf("%d",&k);
	checkright(a,strlen(a),k);
}

