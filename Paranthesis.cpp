# include<bits/stdc++.h>
using namespace std;
bool isPar(string x){
    stack<char>  s;
    for(char ch:x){
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }
        else if(ch==')'||ch=='}'||ch==']'){
            if(s.empty()){
                return false;
            }
            char top=s.top();
            s.pop();
            if((ch==')'&&top!='(') || (ch=='}'&&top!='{') || (ch==']'&&top!='[')){
                return false;
            }
        }
    }
    return s.empty();
}
int main(){
    string x;
    cin>>x;
    if(isPar(x)){
        cout<<"Balanced";
    }else{
        cout<<"Not balanced";
    }
}
