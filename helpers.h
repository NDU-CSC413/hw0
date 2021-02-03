#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

/// @brief finds first occurence of val in range
/// @tparam iterator 
/// @tparam T 
/// @param begin beginning of the range
/// @param end end of the range
/// @param val value we are searching for
/// @return iterator to the found element or end if not found
template<typename iterator,typename T>
iterator find(iterator begin, iterator end, const T& val) {
	for (iterator itr = begin; itr != end; ++itr) {
		if ((*itr) == val)return itr;
	}
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
	for (iterator itr = begin; itr != end; ++itr) {
		if (pred(*itr))return itr;
	}
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
	begin = std::find(begin, end, val);
	if (begin == end) return begin;
	iterator itr = begin;
	
	for (++itr; itr != end; ++itr) {
		if (*itr != val) {
			*begin = std::move(*itr);
			++begin;
		}

	}
	return begin;
}

template<typename iterator, typename P>
iterator remove_if(iterator begin, iterator end, P pred) {
	begin = std::find_if(begin, end, pred);
	if (begin == end) return begin;
	iterator itr = begin;

	for (++itr; itr != end; ++itr) {
		if (!pred(*itr)) {
			*begin = std::move(*itr);
			++begin;
		}

	}
	return begin;
}
void swap(std::unique_ptr<int>& x, std::unique_ptr< int>& y) {
	std::unique_ptr<int> tmp;
	tmp = std::move(x);
	x = std::move(y);
	y = std::move(tmp);
};
template <typename Iter>
void reverse(Iter begin, Iter end) {
	//std::unique_ptr<int> tmp;
	Iter::value_type tmp;
	while (begin!=end && begin!=--end) {
		//std::swap(*begin, *end);
		//(*begin).swap(*end);
	  tmp = std::move(*begin);
		*begin = std::move(*end);
		*end = std::move(tmp);
		///swap(*begin, *end);
		++begin;
	}
}
