#include<iostream>
using namespace std;

bool solution(string s ){
    bool isEven;
    int charArr[256] = {0};
 
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
    cout<<solution("racecar")<<endl;
    cout<<solution("racacer")<<endl;
    cout<<solution("racing")<<endl;
    cout<<solution("raccar")<<endl;
    cout<<solution("tactcoa")<<endl;
}
