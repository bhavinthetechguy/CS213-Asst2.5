#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void one(const int a, const int b) 
{
  int c = (a * a) + (b * b);
  printf("%d^2 + %d^2 = %d\n", a, b, c);
}


void two(const char *grade)
 {
 int i;
  i = atoi(grade);
  if ( i >= 70)
    printf("%f passed!\n",(float)i);
  else
    printf("%d not passed!\n", i);
}

void three() 
{
  int x = 4;
  int *p = &x;

  printf("The value of p is: %d\n", *p);
}

void four(const float value) 
{
  if (value>0 && value<1)
    printf("The value is between zero and one.\n");
  else
    printf("The value is not between zero and one.\n");
}

void five(const int *x, const int *y) 
{
  if (*x == *y)
    printf("x and y are equal.\n");
  else
    printf("x and y are different.\n");
}

float *six(const int *x) 
{
	float *p = (float *)malloc(sizeof(x));
	*p = (float)*x;
        return p;
}

void seven(const char *a)
 {
  if (*a >= 65 && *a <= 90)
    printf("a is a letter.\n");
 else if(*a>= 97 && *a<= 122)
  printf("a is a letter.\n");
else
printf("a is not a letter.\n");
}

void eight() 
{
  char *s = malloc(6);

  s[0] = 'H';
  s[1] = 'e';
  s[2] = 'l';
  s[3] = 'l';
  s[4] = 'o';
  s[5] = '\0';
  printf("%s\n", s);

  free(s);
}

void nine() 
{
  float *p =malloc(sizeof(float));
  *p = 12.5;

  printf("The value of p is: %f\n", *p);
}

void ten(int *x) 
{
 *x = 0; 
}

void eleven(const char *str) 
{
  char *s = malloc(12); 
  strcpy(s, "Hello ");
  strcat(s, str);
  printf("%s\n", s);
  free(s);
}

void twelve() 
{
  float *values =malloc(10 * sizeof(float));

  int i, n = 10;
  for (i = 0; i < n; i++)
    values[i] = (float)i / n;

  for (i = 0; i < n; i++)
    printf("%f ", values[i]);
  printf("\n");
}

void thirteen(int a) 
{
	int **values;
	int i , j;
	values =malloc(10 * sizeof(int *));
	for(i=0; i<10; i++)
	{
	  values[i] = malloc(10*sizeof(int));
	  for(j=0;j<10;j++)
	  values[i][j] = i * j * a;
	}
	for(i=0;i<10; i++)
	printf("%d ", values[i][i]);
	printf("\n");
}

void fourteen(const char *s) 
{
  switch (s[0]) 
  {
  case 'b':
    printf("Orange and BLUE!\n");
    break;

  case 'o':
    printf("ORANGE and blue!\n");
    break;

  default:
    printf("orange and blue!\n");
    break;
  }
}

void fifteen(const int value)
 {
  switch (value) 
  {
  case 1:
    printf("You passed in the value of one!\n");
	break;

  case 2:
    printf("You passed in the value of two!\n");
break;

  default:
    printf("You passed in some other value!\n");
break;
  }
}

char *sixteen()
 {
  char *s = malloc(5);
  strcpy(s, "Hello");
	return s;
}

void seventeen(const int d)
 {
  printf("The radius of the circle is: %f.\n", (float)d / 2);
}

void eighteen(int k) 
{
  k = k * k;
  k += k;
  k *= k;
  k -= 1;

  printf("Result: %d\n", k);
}

long int clear_bits(long int value, long int flag) {
  long int output = (value^flag)&value;
return output;
}


