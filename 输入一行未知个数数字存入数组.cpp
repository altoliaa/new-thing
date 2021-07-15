#include<stdio.h>
#include<ctype.h>
int main()
{
    int a[1000];
    char c;
    int i = 0;
    int n = 0;
    while ((c = getchar()) != '\n')
    {
        if (isdigit(c))
        {

            ungetc(c, stdin);//将c送回输入流
            
            scanf("%d", &a[n++]);
        }  
         
    }
         for (i = 0; i < n; i++)
             {
                 printf("%d ", a[i]);
             }
         return 0;
     
}
