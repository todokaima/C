#include <stdio.h>
union shared{
	char c;
	int i;
	double d;
};
int x;
main(){
	x=((x!=x)>(x==x));
	printf("%d",x);
	
	union shared s;
	
	s.c = 'a';
	
	printf("\nCHAR: %c", s.c);
	printf("\nAKERAIOS: %d", s.i);
	printf("\nDouble : %f", s.d);
	
	s.d = 10.55;
	
	printf("\nCHAR: %c", s.c);
	printf("\nAKERAIOS: %d", s.i);
	printf("\nDouble : %f", s.d);
	
}

