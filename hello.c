#include <stdio.h>
int main()
{
	file *f = fopen("doska.txt");
	char T[10][10];
	int i = 0, j = 0;
	while(!feof(f))
{
	fscanf(f, %c, &T[i++][j]);
	if(i==9)
	{
	i = 0; j++;
	}
}
for(i=0; i<9; i++)
{
for(j=0; j<9; j++)
{
printf("%c",T[i][j])
}
printf("/n");
}
return 0;

