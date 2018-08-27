#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    while(true){
        for(int i = 8; i < 256 ; i++){
            if(GetAsyncKeyState(i) == -32767){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
