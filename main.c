#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){

	//if (isdigit(argv[1][0]) == 0) {
	//	printf("Hello\n");
	//}


	if(argc > 2){

		argc = atoi(argv[1]);

		for (int i = 1; i <= argc; i++) {
			printf("%d\n", i);
		}
		return 0;

	}else	if(argc == 2){
		argc = atoi(argv[1]);int i = 1;

		if( isalpha(argv[1][0]) != 0 || argc == 0){
			return 0;

		}

		do{
			printf("%d\n", i);
			i++;

		}while(i <= argc);
		return 0;

	}else if(argc == 1){

		for (int i = 1; i <= 10; i++) {
			printf("%d\n", i);
		}
		return 0;
	}

}
