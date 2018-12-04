


#include "lib.h"
#include <iostream>
using namespace std;

void v1(){
	cout<<"void void"<<endl;
}
void v2(int a){
       cout<<"void int"<<endl;
}
void v3(char c){
       cout<<"void char"<<endl;
}
void v4(float f){
	cout<<"void float"<<endl;
}
int i1(){
	cout<<"int void"<<endl;
	return 0;
}
int i2(int a){
        cout<<"int int"<<endl;
        return 0;
}
int i3(char c){
        cout<<"int char"<<endl;
        return 0;
}
int i4(float f){
        cout<<"int float"<<endl;
        return 0;
}
char c1(){
	cout<<"char void"<<endl;
	return 'c';
}
char c2(int a){
        cout<<"char int"<<endl;
        return 'c';
}
char c3(float f){
        cout<<"char char"<<endl;
        return 'c';
}
char c4(float f){
        std::cout<<"char float"<<endl;
        return 'c';
}
float f1(){
	std::cout<<"float void"<<endl;
	return 0.0;
}
float f2(int a){
        std::cout<<"float int"<<endl;
        return 0.0;
}
float f3(char c){
        std::cout<<"float char"<<endl;
        return 0.0;
}
float f4(float f){
        std::cout<<"float float"<<endl;
        return 0.0;
}


