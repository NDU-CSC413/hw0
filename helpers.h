#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <memory>

struct NoCopy {
/* TODO: Write your code here*/

};
	
/// @brief finds first occurrence of val in range
/// @tparam iterator 
/// @tparam T 
/// @param begin beginning of the range
/// @param end end of the range
/// @param val value we are searching for
/// @return iterator to the found element or end if not found
template<typename iterator,typename T>
iterator find(iterator begin, iterator end, const T& val) {
	/* TODO: Write your code here*/
	return end;
}
/// @brief finds the first occurence when predicate returns true
/// @tparam iterator 
/// @tparam P 
/// @param begin beginning of the range
/// @param end end of the range
/// @param pred supplied predicate
/// @return iterator to the first such element or the end
template<typename iterator, typename P>
iterator find_if(iterator begin, iterator end, P pred) {
	/* TODO: Write your code here*/
	return end;
}

/// @brief 
/// @tparam iterator 
/// @tparam T 
/// @param begin 
/// @param end 
/// @param val 
/// @return 
template <typename iterator,typename T>
iterator remove(iterator begin,iterator end,const  T& val) {
	/* TODO: Write your code here*/
	return begin;
}

template<typename iterator, typename P>
iterator remove_if(iterator begin, iterator end, P pred) {
	/* TODO: Write your code here*/
	return begin;
}


template <typename Iter>
void reverse(Iter begin, Iter end) {
	/* TODO: Write your code here*/
}
