#pragma once

#include <vector>

#include "Cmps.Business/Repositories/IPersonRepository.h"

namespace Cmps::Data::Repositories
{
using namespace Business;

class PersonRepository : public IPersonRepository
{
private:
	std::vector<const Person*> _persons;

public:
	const Person* create(const Person* person) override;
};
}
