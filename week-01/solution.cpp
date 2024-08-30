#include <iostream>

int main(){
    int a,b;
    std::cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(i%3==0){
            std::cout << "Foo";
        }
        else if (i%2==0 && !(i%3==0))
        {
            std::cout<< "Bar";
        }
        else if(!(i%3==0)){
            std::cout<<"Baz";
        }
        
    }
}