#include"main.h"
/**
*_strncpy-copyastring
*@dest:inputvalue
*@src:inputvalue
*@n:inputvalue
*
*Return:dest
*/
char*_strncpy(char*dest,char*src,intn)
{
intj;

j=0;
while(j<n&&src[j]!='\0')
{
dest[j]=src[j];
j++;
}
while(j<n)
{
dest[j]='\0';
j++;
}

return(dest);
}

