#include<iostream>
#include<string>
using namespace std;

// lets do a simple implimentation with two functions encode and decode which takes string as input and give run length encoding 
// and decoding respectively 
// and  program takes both text files and command line input 



string  Encode(string stringToEncode){

    string RLE="";
    int count=1;
    for( int i=0; i<stringToEncode.length();i++){
        if(stringToEncode[i]==stringToEncode[i+1]){
            count+=1;
        }
        else{
            RLE=RLE+ to_string(count)+ stringToEncode[i];
            count=1;
        }
    }
    if(stringToEncode.length()<RLE.length()){
        cout<< "The string after encoding is larger than before so no encoding is done "<< endl; 
        return stringToEncode;
    }
    
    return RLE;

}

int main (int argc, char* argv[]){

    string input;
    cin>> input;
    string b= Encode(input);
    cout<< b<<endl;

        
    return 0;
}