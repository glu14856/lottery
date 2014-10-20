#include <stdio.h>
#include <stdlib.h>

#define LUCKY_NUMBER 7
#define MAX_WHITE_BALL 59
#define MAX_POWER_BALL 39

int calculate_result(int white_balls[5], int power_ball)
{
	for(int i=0; i<5; i++)
	{
		if((white_balls[i]<1)||(white_balls[i]>MAX_WHITE_BALL))
			{return -1;}
	}
	if((power_ball<1)||(power_ball>MAX_POWER_BALL))
    {
		return -1;
	}
	return 0;
}

int main(int argc, char** argv)
{

	//Kommentar weil die �nderung zu lang ist

	int favourite = 0; //this should be a tool

	//more comments

	for (int i = 1; i < argc; i++)
	{
		const char* arg = argv[i];


	}

    if (argc != 7)
    {
        fprintf(stderr, "Usage: %s power_ball (5 white balls)\n", argv[0]);
        return -1;
    }

    int power_ball = atoi(argv[6]);

    int white_balls[5];
    for (int i=0; i<5; i++)
    {
		char* endptr = NULL;
		long val = strtol(argv[1 + i], &endptr, 10);
		if (*endptr)
		{
			fprinf(stderr, "Invalid arguments\n");
			return -1;
		}
		white_balls[i] = (int)val;
    }

    int result = calculate_result(white_balls, power_ball);
	
	if(result<0)
	{
		fprintf(stderr, "Invalid arguments\n");
		return -1;
	}

	if (LUCKY_NUMBER == power_ball)
	{
		result=result*2;
	}


	

	
	for (int i = 0; i < 5; i++){
		if ((white_balls[i]<1) || (white_balls[i])>59){
			return -1;
		}
	}
		if ((power_ball<1) || (power_ball>39)){
			return -1;
		}
	printf("%d percent chance of winning\n", result);
    return 0;
}