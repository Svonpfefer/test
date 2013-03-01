/*
 *  test.cp
 *  test
 *
 *  Created by Stefan Von Pfefer on 01/03/2013.
 *  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
#include "test.h"
#include "testPriv.h"

void test::HelloWorld(const char * s)
{
	 testPriv *theObj = new testPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void testPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

