#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int char2ascii(char c)
{
 return c;
}

void char2binary(char c, char* c_arr){
    for (int bit = 7; bit>=0; --bit)
	{
		c_arr[ 7 - bit] = (c & (1 << bit)) ? '1' : '0';
	}
}

char charCase(char c){
	if(c >= 'A' && c<= 'Z')
	return tolower(c);
	else
	return toupper(c);
}


int main(int argc,char**argv){
FILE *output=stdout;
FILE *fileInput=stdin;
int i;
char input;
char char_arr[8];
int mode=0;
for(i=1;i<argc;i++){
 if(strcmp(argv[i],"-o")==0)
	output=fopen(argv[++i],"w");
if(strcmp(argv[i],"-i")==0)
	fileInput=fopen(argv[++i],"r");
 if(strcmp(argv[i],"-b")==0)
	mode=1;
 if(strcmp(argv[i],"-c")==0)
        mode=2;
}
input = fgetc(fileInput);
while(input != EOF){
	if(input!=10 ){
		if(mode ==0)
		fprintf(output, "%d ", char2ascii(input));
		else if( mode==1 ){
		char2binary(input,char_arr);
		fprintf(output,"%s ", char_arr);
		}
		else
		fprintf(output, "%c ", charCase(input));
	}
	input = getchar();
}
  if(output!=stdout)
    fclose(output);
}


