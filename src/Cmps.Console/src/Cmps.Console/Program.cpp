#include <iostream>

#include <Cmps.Business/Person.h>
#include <Cmps.Data/Repositories/PersonRepository.h>

using namespace std;
using namespace Cmps::Business;
using namespace Cmps::Data::Repositories;

int main()
{
	auto repository = PersonRepository();
	auto one = Person("Ghita", "Bobocel");

	repository.create(&one);

	return cin.get();
}
