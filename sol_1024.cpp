#include <iostream>
using namespace std;
#include <string>
#include <cctype>
int main(){
    
    int t; //declare testcase
    cin >> t; // input testcase
    while(t--){
        string line; //declare string variable
        getline(cin, line); // input string
        int len = line.size(); // findout lenght value of string
        for(int i=0; i<len; i++){
            char text = line[i]; // string character index
            if(isalpha(text)){ // checking alphabet
                line[i] = line[i]+3; // 3index move to right
            }
        }
        for(int i=0; i<len/2; i++){ 
            char temp = line[len-i-1];
            line[len-i-1] = line[i];
            line[i] = temp;
            //reverse entire string
        }
        
        for(int i=len/2; i<len; i++){
            line[i] = line[i]-1;
            //from halfside to last char index : move to left 1 char.
        }
        cout << line << endl; //output
        
    }
    
    
    
    return 0;
}
