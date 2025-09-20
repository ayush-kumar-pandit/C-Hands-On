#include <stdio.h>
#include <string.h>
int main() {
    int t_num=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    for(int i=0;s[i]!='\0';i++)
    {
        scanf("%s",&s[i]);
    }   
    for(int i=0;i<=9;i++)
    {   
       t_num=0;
       for(int j=0;s[j]!='\0';j++)
       {    
           if(s[j]==i+48)
           t_num++;
       } 
       printf("%d ",t_num);
    }
    return 0;
}
