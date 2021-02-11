#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <type_traits>
#include <memory>
#include "helpers.h"

/* this function could server as a driver 
* for your implementations. Choose the #define 
* according to which problem you are testing
*/

#define EX1 //choose one of  EX1,EX2,EX3,EX4,EX5,EX6,EX7

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
	for (auto& x : v)std::cout << x << ",";
	std::cout << "\n";

#endif
#ifdef EX6
 
	std::unique_ptr<int> a{ new int(1) }, b{ new int(2) }, c{ new int{3} };
	std::vector<std::unique_ptr<int>> v;

	/* add a,b and c to vector v */
	/* TODO: Write your code here */

	/* call reverse */
	::reverse(v.begin(), v.end());
	for (auto& p: v)std::cout << *p<<",";
	std::cout << "\n";

#endif

#ifdef EX7
	NoCopy v;

#endif // EX7

}

