#pragma once

#include "Cmps.Business/Person.h"

namespace Cmps
{
namespace Business
{
class IPersonRepository
{
protected:
	IPersonRepository() = default;

public:
	virtual ~IPersonRepository() = default;
	virtual const Person* create(const Person* person) = 0;
};
}
}
