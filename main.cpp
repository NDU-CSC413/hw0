#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <type_traits>
#include <memory>
#include "helpers.h"
struct NoCopy {
	std::unique_ptr<int> p;
	NoCopy(std::unique_ptr<int> x) :p(std::move(x)) {}
};
#define EX6

int main(){
	
#ifdef EX1
	{
		std::cout << "exercise 1: implement find(). 20 pts\n"; \
	    std::cout << "As an EXAMPLE, the code below should output\n";
		std::cout << "4,5,5,4,3,2,1,0,\n";
		std::cout<<"-------------------\n";
		std::vector<int> v{ 1,2,3,4,5,5,4,3,2,1,0 };
		auto itr = ::find(v.begin(), v.end(), 4);
		std::cout << "output\n";
		for (auto i = itr; i != v.end(); ++i)
			std::cout << *i << ",";
		std::cout << std::endl;
		std::cout<<"----------------------\n";
		std::cout<<"----------------------\n";

	}
#endif
#ifdef EX2
	{
		std::cout << "exercise 2: implement find_if(). 20 pts\n";
		std::cout << "As an EXAMPLE, the code below should output\n";
		std::cout << "5,5,4,3,2,1,0,\n";
		std::cout<<"-------------------\n";
		std::vector<int> v{ 1,2,3,4,5,5,4,3,2,1,0 };
		auto itr = ::find_if(v.begin(), v.end(), [](int n) {return ((n % 2 == 1) && n > 3); });
		std::cout << "output\n";
		for (auto i = itr; i != v.end(); ++i)
			std::cout << *i << ",";
		std::cout << std::endl;
		std::cout<<"----------------------\n";
		std::cout<<"----------------------\n";
	}
#endif 
#ifdef EX3
	std::cout << "exercise 3: implement remove(). 20 pts\n";
	std::cout << "As an EXAMPLE, the code below should output\n";
	std::cout << "1,2,4,5,5,4,2,1,2,1,3,\n";
	std::cout << "1,2,4,5,5,4,2,1,\n";
	std::cout<<"-------------------\n";
	{
		std::vector<int> v{ 1,2,3,4,5,5,4,3,2,1,3 };
		std::vector<int> u = v;
		auto itr= ::remove(v.begin(), v.end(),3);
		std::cout << "output\n";
		for (auto x : v)std::cout << x << ","; std::cout << "\n";
		v.erase(itr, v.end());
		for (auto& x : v)
			std::cout << x << ",";
		std::cout << std::endl;
		std::cout << "----------------------\n";
		std::cout << "----------------------\n";

	}
#endif 
#ifdef EX4
	std::cout << "exercise 4: implement remove_if(). 20 pts\n";
	std::cout << "As an EXAMPLE, the code below should output\n";
	std::cout << "1,3,5,5,3,1,4,3,2,1,0,\n";
	std::cout << "1,3,5,5,3,1,\n";
	std::cout<<"-------------------\n";
	{
		std::vector<int> v{ 1,2,3,4,5,5,4,3,2,1,0 };
		auto itr = ::remove_if(
			v.begin(), v.end(), [](int n) { return (n % 2 == 0); });
		std::cout << "output\n";
		for (auto& x : v)
			std::cout << x << ",";
		std::cout << std::endl;
		v.erase(itr, v.end());
		for (auto& x:v)
			std::cout << x << ",";

		std::cout << std::endl;
		std::cout << "----------------------\n";
		std::cout << "----------------------\n";
	}
#endif 
#ifdef EX5
	std::cout << "exercise 4: implement remove_if(). 20 pts\n";
	std::cout << "As an EXAMPLE, the code below should output\n";
	std::cout << "1,2,3,4,5,\n";
	std::cout << "5,4,3,2,1,\n";
	std::cout << "-------------------\n";
	std::vector<int> v{ 1,2,3,4,5};
67ty54er3dw2sq1a`	QW	S1ED23457OP'}
for (auto& x : v)std::cout << x << ",";
	std::cout << "\n";

#endif
#ifdef EX6
 
	std::unique_ptr<int> a, b, c;
	a = std::make_unique<int>(1);
	b = std::make_unique<int>(2);
	c = std::make_unique<int>(3);
	
	std::vector<std::unique_ptr<int>> v;
	/* add a,b,c to v */
	v.push_back(std::move(a));
	v.push_back(std::move(b));
	v.push_back(std::move(c));
	/* call reverse */
	::reverse(v.begin(), v.end());
	for (auto& p : v)std::cout << *p<<",";
	std::cout << "\n";
	
#endif
}

