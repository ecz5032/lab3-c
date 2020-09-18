//Author: Eric Zhang ecz5032@psu.edu
//Collaborator: Cole Carter ctc5367@psu.edu
//Collaborator: Andrew Wang aqw5628@psu.edu
//Collaborator: Ryan Attia rka5347@psu.edu
//Section 5
//Breakout Room 14

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n > 0){
    return n+ sum_n(n-1);
  }
  else {
    return 0;
  }
}
void print_n(const char *s, int n) {
  if (n > 0) {
    printf("%s\n",s);;
    print_n(s, n-1);
  }
}
int main(void) {
  char *num = readline("Enter an int: ");
  int init_num = atof(num);
  int fin_num = sum_n(init_num);
  printf("sum is %d.\n",fin_num);

  char *string = readline("Enter a string: ");
  print_n(string, init_num);
  

}