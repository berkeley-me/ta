#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

	int i=1, newline=0, word=0, byte=0;
	if (argc==1){
		printf("No FILE_NAME or STDIN\n");
	}
	else{
		char* filepath;
		FILE *fp;
		filepath=argv[1];
		fp = fopen(filepath, "r");
		if (fp){
			bool blank=true;
			int c,prev;

			while ((c=fgetc(fp))!=EOF){
				if (isspace(c)){
					if (c == 10){
						newline++;
					}
					if (c==11 || c==12 || c==13){
						// printf("Special white space: %d; count: %d\n",c,i++);
						blank=false;
					}
					else if (!blank){
						word++;
						blank=true;
					}
				}
				else{
					blank=false;
				}
				byte++;
			}
			if (!blank){
				word++;
			}

			fclose(fp);
		}

		else {
			newline++;
			word = argc - 1;
		}
		printf("%d newline; %d word; %d byte\n",\
			newline, word, byte);
	}

    return 0;
}
