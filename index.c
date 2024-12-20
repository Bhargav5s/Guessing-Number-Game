#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int guess;
  int no_of_guess=0;
  srand(time(0));
  int randomNumber = (rand()%100)+1;
  printf("Random number generated (1-100) %d\n", randomNumber);
  do
  {
    printf("Enter the Guess: ");
    scanf("%d", &guess);
    if(guess==randomNumber)
    {
      printf("Congrats you've won %d points", 100-5*no_of_guess);
      break;
    }
     else if(guess<randomNumber && no_of_guess==19)
    {
      printf("No more tries, you've 0 points");
      break;
    }
     else if(guess>randomNumber && no_of_guess==19)
    {
      printf("No more tries, you've 0 points");
      break;
    }
    else if(guess<randomNumber)
    {
      printf("Enter a higher number \n");
    }
    else if(guess>randomNumber)
    {
      printf("Enter a lower number \n");
    }
        no_of_guess++;
  } while (guess!=randomNumber);
  
  return 0;
}