#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void char2ascii(char c)
{
printf("%d ", c);
}

void char2binary(char c, char* c_arr){
    for (int bit = 7; bit>=0; --bit)
	{
		c_arr[ 7 - bit] = (c & (1 << bit)) ? '1' : '0';
	}
}


int main(int argc,char**argv){
int i;
char input;
char char_arr[8];
int binary=0;
for(i=1;i<argc;i++){
 if(strcmp(argv[i],"-b")==0)
	binary=1;
}
input = getchar();
while(input != EOF){
	if(input!=10 ){
		if(binary ==0)
		char2ascii(input);
		else
		char2binary(input,char_arr);
		printf("%s ", char_arr);
		}
	input = getchar();
}
}

