#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
	
	time_t ts;
	struct tm *busan_time;
	char *mon_names[]={"JAN","FEB","MAR","APR","MAY","JUN",
						"JUL","AUG","SEP","OCT","NOV","DEC"};
	
	ts =time(NULL);
	//printf("%d\n", ts);
	
	busan_time = localtime(&ts);
	printf("%d\n",busan_time->tm_year+1900);
	printf("%d, %s\n", busan_time->tm_mon+1,
						mon_names[busan_time->tm_mon]);
	printf("%d\n", busan_time->tm_mday);
	
	return 0;
}
