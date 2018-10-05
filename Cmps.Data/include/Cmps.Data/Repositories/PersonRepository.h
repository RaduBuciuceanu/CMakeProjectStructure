#pragma once

#include "Cmps.Business/Repositories/IPersonRepository.h"

namespace Cmps
{
namespace Data
{
namespace Repositories
{
using namespace Business;

class PersonRepository : public IPersonRepository
{
public:
	const Person* create(const Person* person) override;
};
}
}
}
