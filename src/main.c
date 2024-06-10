#include <stdio.h>

int main(int argc, char **argv)
{
  int c; 
  if(argc < 1){
    fprintf(stderr, "error: parameter missing\n");
    return -1;
  }
  
  FILE *file = fopen(argv[1], "r");
  while((c = fgetc(file)) != EOF){
    switch(c){
    case '#':
      printf("\n");
      while((c = fgetc(file)) != '\n'){
	printf("%c", c);
      }
      printf("\n");
      break;
    case '!':
      break;
    }
  }
  fclose(file);
  return 0;
}
