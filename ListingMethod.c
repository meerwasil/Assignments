#include<stdio.h>
#include<conio.h>
void main()
{
    int s1,s2;
    int domain[20],codomain[20];
    int ir;
    char rel;
    printf("Enter Size of Domain Less than 20\n");
    scanf("%d",&s1);
    printf("Enter Size of Co-Domain Less than 20\n");
    scanf("%d",&s2);
    printf("Enter Values of Domain\n");
    for(int i=0;i<s1;i++)
        scanf("%d",&domain[i]);
    printf("Enter Values of Co-Domain\n");
    for(int i=0;i<s2;i++)
        scanf("%d",&codomain[i]);
    printf("1 for Division\n2 for Equal\n3 for Multiplication\n4 for Addition\5 for Subtraction\n");
    scanf("%d",&ir);
    switch(ir)
    {
    	case 1:
    		printf("{");
			for(int i=0;i<s1;i++)
			{
				for(int j=0;j<s2;j++)
				{
					if(codomain[j]%domain[i]==0)
					printf("(%d,%d),",domain[i],codomain[j]);	
				}
			}
			printf("}");
    		break;
		case 2:
			printf("{");
			for(int i=0;i<s1;i++)
			{
				for(int j=0;j<s2;j++)
				{
					if(domain[i]==codomain[j])
					printf("(%d,%d),",domain[i],codomain[j]);	
				}				
			} 
			printf("}");   		
    		break;
		case 3:
    		rel='*';
    		break;
		case 4:
    		rel='+';
    		break;
		case 5:
    		rel='-';
    		break;    		
	}	
    getch();
}
