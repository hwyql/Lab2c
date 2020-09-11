// Author: Zhengze Li zml5279@psu.edu
// Collabrator: Feven Molla fmm5265@psu.edu
// Collabrator: Daniela Carnnante dfc5457@psu.edu
// Collabrator: Simon Wallace sqw5638@psu.edu
// section: 7
// Break room: 3
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double Mygrade = atof(grade);
  if (Mygrade >= 93.0){
    printf ("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (Mygrade >= 90.0){
    printf ("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (Mygrade >= 87.0){
    printf ("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (Mygrade >= 83.0){
    printf ("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (Mygrade >= 80.0){
    printf ("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (Mygrade >= 77.0){
    printf ("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (Mygrade >= 70.0){
    printf ("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (Mygrade >= 60.0){
    printf ("Your letter grade for CMPSC 131 is D.\n");
  }
  else if (Mygrade < 60.0){
    printf ("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}