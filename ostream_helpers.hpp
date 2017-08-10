#include <iostream>
#include <vector>
#include <list>
#include <set>

template< typename T >
std::ostream & operator<<(std::ostream &os, std::vector<T> v)
{
	os << "[ ";
	for (auto i : v)
		os << i << " ";
	os << "]";
	return os;
}

template< typename T >
std::ostream & operator<<(std::ostream &os, std::list<T> v)
{
	os << "( ";
	for (auto i : v)
		os << i << " ";
	os << ")";
	return os;
}

template< typename T >
std::ostream & operator<<(std::ostream &os, std::set<T> v)
{
	os << "{ ";
	for (auto i : v)
		os << i << " ";
	os << "}";
	return os;
}

template< typename K, typename V >
std::ostream & operator<<(std::ostream &os, std::pair<K,V> p)
{
	os << "{ " << p.first() << ": " << p.second() << " }";
	return os;
}


