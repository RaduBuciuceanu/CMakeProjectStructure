#pragma once

#include <Cmps.Business/Preprocessor.h>
#include "Cmps.Business/Person.h"

namespace Cmps::Business
{
class CMPS_BUSINESS_PUBLIC IPersonRepository
{
protected:
	IPersonRepository() = default;

public:
	virtual ~IPersonRepository() = default;
	virtual const Person* create(const Person* person) = 0;
};
}
