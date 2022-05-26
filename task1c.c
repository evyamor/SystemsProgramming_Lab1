#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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

void charCase(char c){
	if(c >= 'A' && c<= 'Z')
	printf("%c",tolower(c));
	else
	printf("%c",toupper(c));
}


int main(int argc,char**argv){
int i;
char input;
char char_arr[8];
int mode=0;
for(i=1;i<argc;i++){
 if(strcmp(argv[i],"-b")==0)
	mode=1;
 if(strcmp(argv[i],"-c")==0)
        mode=2;
}
input = getchar();
while(input != EOF){
	if(input!=10 ){
		if(mode ==0)
		char2ascii(input);
		else if( mode==1 ){
		char2binary(input,char_arr);
		printf("%s ", char_arr);
		}
		else
		charCase(input);
	}
	input = getchar();
}
}

