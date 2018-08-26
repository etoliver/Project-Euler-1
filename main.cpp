#include<iostream>//like a boss
using namespace std;//this allows us to not have to use the std::cout, but be careful!!!
int main(){//int means we're working with integers, you don't need to put anything in the parenthesis
    int sum=0,counter=3;//start sum at zero, start counter at 3
    while(counter<1000){//while is its own function that repeats so long as the argument fits the condition
        if(counter%3==0||counter%5==0)
            sum+=counter;//same as "sum = sum+counter"
        counter++;//same as "counter = counter + 1"
    }
    cout<<"The value is "<<sum<<std::endl;//without line 2, we would say std::cout
    return 0;
}
