#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void duplicates(string s){
    unordered_map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }

    for( auto ch : m){
        if( ch.second > 1){
            cout << ch.first << ":"<< ch.second << " "<<endl;
        }
    }
}

int main(){
    string s = "geeksforgeeks";
    printf("The duplicate characters in the string are: ");
    duplicates(s);
    return 0;
}