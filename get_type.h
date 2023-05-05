#include<stdio.h>
#include<stdlib.h>

//For string
typedef char* string;
string get_string(const char* msg) {
    string CharString = NULL;
    size_t size = 0;
    printf("%s", msg);
    getline(&CharString, &size, stdin);
    return CharString;
}


//for int
int get_int(const char* msg) {
    int number;
    printf("%s", msg);
    scanf("%d", &number);
    return number;
}

//for float
float get_float(const char* msg) {
    float number;
    printf("%s", msg);
    scanf("%f", &number);
    return number;
}


//for fouble
double get_double(const char* msg){
	double number;
	printf("%s",msg);
	scanf("%lf",&number);
	return number;
	}

//for long
long get_long(const char* msg){
	long number;
	printf("%s",msg);
	scanf("%ld",&number);
	return number;
	}

//for short
short get_short(const char* msg){
	short number;
	printf("%s",msg);
	scanf("%hd",&number);
	return number;
	}

















