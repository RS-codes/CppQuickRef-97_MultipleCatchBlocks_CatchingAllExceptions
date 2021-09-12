//97.a Multiple catch blocks
#include <iostream>
using namespace std;

int main(){
    //..
    try{

    //throw("ERROR OCCURED");
    throw(101);
    //throw runtime_error("runtime error");

    }catch(const char *err){
        cout<<err<<endl;
    }
    catch(int err){
        cout<<err<<endl;
    }
    catch(runtime_error e){
        cout<<e.what()<<endl;
    }

    return 0;
}

