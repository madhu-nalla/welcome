#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Int vector;
void bar(void)
{
printf("Augh!I've been hacked!\n");
}
void InsertInt(unsidned index,unsigned long value)
{
printf("writing memory at %p\n",&(Int vector [index]);
Int vector[index]=value;
}
bool Init vector(int size)
{
Int vector=(int *)malloc(size of(int)*size);
printf("address of Int vector is %p\n",Int vector);
if(Intvector==NULL)
return false;
else
return true;
}
int main(int arg c, char*arg v[])
{
unsigned long index,value;
if(arg c!=3)
{
printf("Address of bar is %p\n",bar);
if(!Init vector (Oxfff))
{
printf("cannot initialize vector !\n");
return-1;
}
insex=ato1(arg v[1]);
value=ato1(arg v[2]);
InsertInt(index,value);
return 0;
}