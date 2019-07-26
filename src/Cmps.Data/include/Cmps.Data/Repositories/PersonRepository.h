#pragma once

#include <vector>

#include <Cmps.Data/Preprocessor.h>
#include "Cmps.Business/Repositories/IPersonRepository.h"

namespace Cmps::Data::Repositories
{
using namespace Business;

class PUBLIC PersonRepository : public IPersonRepository
{
private:
	std::vector<const Person*> _persons;

public:
	const Person* create(const Person* person) override;
};
}
