#include<iostream>
using namespace std;

//Solution code, this is where the problem is being solved
bool solution(string s ){
    bool isEven;
    int charArr[256] = {0};
 //for loop.
    // because loops are good XD
    for(int i = 0; i < s.length(); i++){
            charArr[(int)s[i]]++;
    }
    if((s.length()) % 2 == 0){
        isEven = true;
        for(int i = 0; i < 256; i++){
            if(charArr[i] %2 == 1)
                return false;
        }
        return true;
    }else{
        isEven = false;
        int singleOccurance = 0;
        for(int i = 0; i < 256; i++){
            if( charArr[i] %2 == 1 && singleOccurance >= 1)
                return false;
                
            if(charArr[i] == 1)
                singleOccurance++;
        }
        return true;

    }


}

int main(){
    //test case inputs calling the solution function which returns a bool value, either true or false.
    cout<<solution("racecar")<<endl;
    cout<<solution("racacer")<<endl;
    cout<<solution("racing")<<endl;
    cout<<solution("raccar")<<endl;
    cout<<solution("tactcoa")<<endl;
}
