/*
 * Copyright (C) 2005 National Association of REALTORS(R)
 *
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished
 * to do so, provided that the above copyright notice(s) and this
 * permission notice appear in all copies of the Software and that
 * both the above copyright notice(s) and this permission notice
 * appear in supporting documentation.
 */
#include <iostream>
#include "TestObject.h"

using namespace librets;
using namespace std;

TestObject::~TestObject()
{
}

ostream & TestObject::Print(ostream & outputStream) const
{
    return outputStream << "TestObject: " << mNumber;
}

bool TestObject::Equals(const RetsObject * object) const
{
    const TestObject * rhs = dynamic_cast<const TestObject *>(object);
    if (rhs == 0)
    {
        return false;
    }
    return mNumber == rhs->mNumber;
}
