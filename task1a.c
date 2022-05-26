#include <stdio.h>
#include <string.h>

void char2ascii(char c)
{
printf("%d ", c);
}


int main(int argc,char**argv){
int i;
char input;
input = getchar();
while(input != EOF){
	if(input!=10)
	char2ascii(input);

	input = getchar();
}
}
