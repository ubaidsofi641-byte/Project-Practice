
#include <stdio.h>
#include <string.h>

int main() {
    
    char noun[50] = "";
    char verb[50] = "";
    char adjective1 [50] = "";
    char adjective2 [50] = "";
    char adjective3 [50] = "";
    char adjective4 [50] = "";
    
    

    printf("Enter an adjective(description):");
    fgets(adjective1, sizeof(adjective1) , stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf(" Enter a noun(animal or person):");
    fgets(noun, sizeof(noun) , stdin);
     noun[strlen(noun) - 1] = '\0';

   printf("Enter a verb(ending with -ing):");
    fgets(verb, sizeof(verb), stdin);
     verb[strlen(verb) - 1] = '\0';

    printf(" Enter an adjective(description):");
    fgets(adjective2 , sizeof(adjective2) , stdin);
  adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter an adjective(description):");
    fgets(adjective3, sizeof(adjective3), stdin);
 adjective3[strlen(adjective3) - 1] = '\0';

 printf("Enter an adjective(description):");
 fgets(adjective4, sizeof(adjective4), stdin);
 adjective4[strlen(adjective4) - 1] = '\0';



 printf("\n Today i saw a %s on the balcony." , noun);
 printf("\n it started %s towards me after looking at me." , verb);
 printf("\n It was very %s and %s." , adjective1, adjective2);
 printf(" \n I was shit %s after realising the %s state i was in." , adjective3 , adjective4);


        
        




















return 0;
    
}







