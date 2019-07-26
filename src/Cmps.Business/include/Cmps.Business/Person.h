#pragma once

namespace Cmps::Business
{
class Person
{
private:
	const char* _firstName;
	const char* _lastName;

public:
	explicit Person(const char* firstName, const char* lastName);
	const char* firstName() const;
	const char* lastName() const;
};
}