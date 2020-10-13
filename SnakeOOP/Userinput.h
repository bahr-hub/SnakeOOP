#pragma once
#include "direction.h"
#include<stdio.h>  
#include<conio.h> 
#include <iostream>
using namespace std;

class Userinput
{
public:
	DIRECTION Khit(DIRECTION dir);
	string name;
	int speedlevel;
	void getUsername();
	void getspeedLevel();

};

