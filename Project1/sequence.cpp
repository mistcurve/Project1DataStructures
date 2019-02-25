#include "Sequence.h"

Sequence::Sequence( size_type sz )
{
	elts = new value_type[sz];
}

Sequence::Sequence( const Sequence& s )
{

}

Sequence::~Sequence()
{
	delete elts;
}

Sequence& Sequence::operator=( const Sequence& s )
{
	Sequence temp(4);
	return temp;
}

Sequence::value_type& Sequence::operator[]( size_type position )
{
	return this->at(position);
}

Sequence::value_type& Sequence::at( size_type position )
{
	return elts[position];
}

void Sequence::push_back( const value_type& value )
{
	size_type oldSize = this->size();
	//do other push_back logic here.
}

void Sequence::pop_back()
{
}

void Sequence::insert( size_type position, value_type value )
{
}

const Sequence::value_type& Sequence::front() const
{
	return elts[0];
}

const Sequence::value_type& Sequence::back() const
{
	return elts[this->size() - 1];
}

bool Sequence::empty() const
{
	//currently always returns false IUGFAHFAHEIOFHAWEOPFHIAFDACOEEIOIIAIFEWAIUFEWAFAFEWAIUIGGRAGFEWAIEOKNCXZLJFEA
	return false;
}

Sequence::size_type Sequence::size() const
{
	return sizeof(elts) / sizeof(elts[0]);
}

void Sequence::clear()
{
}

void Sequence::erase( size_type position, size_type count )
{
}

//ostream& Sequence::print( ostream& os )
//{
//}
//
//
//ostream& operator<<( ostream& os, Sequence& s )
//{
//}