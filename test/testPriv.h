/*
 *  testPriv.h
 *  test
 *
 *  Created by Stefan Von Pfefer on 01/03/2013.
 *  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
 *
 */

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class testPriv
{
	public:
		void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
