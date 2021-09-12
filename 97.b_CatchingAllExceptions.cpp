//97.b Catching all Exceptions
#include <iostream>
using namespace std;

int main(){
    //..
    try{

    //throw("ERROR OCCURED");
    throw(101);
    //throw runtime_error("runtime error");

    }catch(...){
        cout<<"catches any type of exception thrown,\nif it has no matching catch block";
    }

    return 0;
}

