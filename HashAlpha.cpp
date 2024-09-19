#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s; 
    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            char lowerChar = tolower(s[i]);
            hash[lowerChar-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(hash[i]>0){
            cout<<"Frequency of "<<char('a'+i)<<" : "<<hash[i]<<endl;
        
        }
    }
    return 0;
}