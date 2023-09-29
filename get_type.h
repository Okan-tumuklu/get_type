#include<stdio.h>
#include<stdlib.h>

//For string
typedef char* string;

string get_string(const char* msg) {
    string CharString = NULL;
    size_t size = sizeof(CharString);
    printf("%s", msg);
    getline(&CharString, &size, stdin);
    return CharString;
}

/*
use of.
String StringName = get_string("Plase input a string:");
*/

//==========================================


//for int
int get_int(const char* msg) {
    int number;
    printf("%s", msg);
    scanf("%d", &number);
    return number;
}

/*
use of.
int İntName = get_int("Plase input a int:");
*/

//==========================================

//for float
float get_float(const char* msg) {
    float number;
    printf("%s", msg);
    scanf("%f", &number);
    return number;
}

/*
use of.
float FloatName = get_float("plase input a float:");
*/
//=================================================

//for fouble
double get_double(const char* msg){
	double number;
	printf("%s",msg);
	scanf("%lf",&number);
	return number;
	}
	
/*
use of.
double DoubleName = get_double("plase input a double:");
*/

//=============================================

//for long
long get_long(const char* msg){
	long number;
	printf("%s",msg);
	scanf("%ld",&number);
	return number;
	}

/*
use of.
long LongName = get_long("plase input a long:");
*/

//===============================================

//for short
short get_short(const char* msg){
	short number;
	printf("%s",msg);
	scanf("%hd",&number);
	return number;
	}

/*
use of.
short ShortName = get_short("plase input a short:");
*/

//===============================================
