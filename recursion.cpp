#include<iostream>

namespace  mine
{
   class cout{
    public: int var = 25;
};
} // namespace  mine

using namespace mine;

int fact(int num){
    if(num==0){
        return 1;
    }
    std::cout<<num << " ";
    return num * fact(num-1);
}


int fib(int num){
    if(num <=2){
        return 1;
    }
    std::cout<<num<<std::endl;
    return num + fib(num-1) + fib(num-2);
}

int main()
{

    std::cout<<std::endl<<fib(10)<<std::endl;

    std::cout<<cout().var;

    return 0;
}