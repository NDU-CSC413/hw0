#include <iostream>
#include <vector>
#include <memory>
#include <exception>
#include "helpers.h"
struct Test{
  ~Test(){
    std::cout<<"dtor\n";
  }
};
int main(){
  try{
    Test t;
    throw std::exception{};
  }
  catch(std::exception e){
    std::cout<<e.what()<<"\n";
  }
}   