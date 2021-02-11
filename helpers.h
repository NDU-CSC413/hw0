#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <memory>

struct NoCopy {
	int _x;
	NoCopy(){}
	NoCopy(int x):_x(x){};
	NoCopy(const NoCopy& rhs)=delete;
	NoCopy(NoCopy&& rhs) noexcept  {
		_x=std::move(rhs._x);
	}
	int x(){return _x;}
	NoCopy& operator=(const NoCopy& )=delete;
	NoCopy& operator=(NoCopy&& rhs)=default;

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
template<typename T>
void my_swap(T& x,T& y){
/* if we don't use constexpr it will give 
* an error even if it evaluates correctly
* at runtime. i.e. If we pass non copy constructible
* it will detect it but for some reason at compile
* time it tries to evaluate both if and else
*/
   if constexpr (std::is_copy_constructible_v<T>){
	   T tmp; tmp=x;
	   x=y;y=tmp;
   }
   else{
	   T tmp=std::move(x);
	   x=std::move(y);
	   y=std::move(tmp);
   }
}

template <typename Iter>
void reverse(Iter begin, Iter end) {
	 while (begin!=end && begin!=--end) {
		if constexpr (std::is_copy_constructible_v<
		typename Iter::value_type>){
			auto tmp=*begin;
			*begin=*end;
			*end=tmp;
		}
		else{
		auto tmp=std::move(*begin);
		*begin=std::move(*end);
		*end=std::move(tmp);
		}
		//my_swap(*begin,*end);
	
		++begin;
	}
}
