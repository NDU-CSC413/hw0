# Programming Assignment 0


Modify the __body__ of the four functions in the file ```helpers.h``` used by the 
```main.cpp``` file. In addition to the explanations below you will find in  ```main.cpp```
different use cases with input and the expected result
__IMPORTANT__ :
1. you __CANNOT__ use __any__ STL algorithm unless explicitly allowed.
2. The __only__ files you are allowed to modify are ```main.cpp``` and  ```helpers.h```

For your convenience below are links to the STL definitions
1. find and find_if:  https://en.cppreference.com/w/cpp/algorithm/find
1. remove and remove_if: https://en.cppreference.com/w/cpp/algorithm/remove
1. reverse: https://en.cppreference.com/w/cpp/algorithm/reverse

## part 1 (17 points)

Implement the function 
```cpp
template<typename Iter,typename T>
Iter find(Iter begin, Iter end, const T& val);
```
It should take a range from begin to end and finds the __first__ occurrence of val.
It returns an iterator to the first occurrence.

## part 2 (17 points)

Implement the function
```cpp
template<typename Iter, typename P>
Iter find_if(Iter begin, Iter end, P pred);
```
It should take a range from begin to end and finds the __first__  element for which (function or function object) __pred__ returns true, i.e. the first element _e_ such that ``` pred(e)``` returns true. It returns an iterator to the first such occurrence.


## part 3 (17 points)

Implement the function 
```cpp
template <typename Iter,typename T>
Iter remove(Iter begin,Iter end, T val);
```
It should "remove" all occurrences of _val_. It returns an iterator  to the end of the "useful" values. Let _itr_ be the returned iterator then the range ```[begin,itr)``` does __not__ contain _val_ anymore. The range ```[itr,end)``` may or may not contain _val_. Note that the order of the elements in the range ```[begin,itr)``` should be the same as the original. To understand more the effect of this function, let _v_ be a vector then the code below removes all occurrence of the value _val_ from the vector while retaining the original order of the elements.

```cpp
auto itr=remove(v.begin(),v.end(),val);
v.erase(itr,end);
```

## part 4 (17 points)

Implement the function 

```cpp
template<typename Iter,typename P>
Iter remove_if(Iter begin,Iter end, P pred);
```

The effect of this function is the same as remove() in part 3 except that it "removes" all the elements _e_ for which ```pred(e)``` returns true. 

## part 5 (17 points)

Implement the function
```cpp
template <typename Iter>
void reverse(Iter begin,Iter end);
```

## part 6 (10 points)

Implement a function similar to ```reverse```, call it ```nc_reverse```, that  works with __non-copyable__ types. 
You can test your implementation by reversing a vector containing two ```std::unique_ptr<int>``` elements.


## part 7 (5)

Define a class ```struct NoCopy;```  that has __no__ member variables and is __not__ copyable.
