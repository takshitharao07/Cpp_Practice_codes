#include<iostream>
#include<cmath>
using namespace std;
/*
1.cin
    It is used to read a word or character.
    It terminates on encountering whitespace or endline charater (’\n’)

2. cin.get(char_array,number_of_characters,delimiter)
    To read characters including special characters like ’ ', ‘\n’ and ‘\t’.

3. cin.getline(char_array,max_Size,delimiter)
    It is used to read a sentence or a paragraph.
    It terminates on encountering endline character.
    It also reads the whitespace. 
*/
int main(){
    int x=0,y=0;
    char ch;
    ch=cin.get();
    while(ch!='\n'){
        if(ch=='E'){
            x++;
        }
        else if(ch=='W'){
            x--;
        }
        else if(ch=='N'){
            y++;
        }
        else{
            y--;
        }
        ch=cin.get();
    }
    //1st quadrant
    if(x>=0&&y>=0){
        for(int i=1;i<=x;i++){
            cout<<"E";
        }
        for(int j=1;j<=y;j++){
            cout<<"N";
        }
    }
    //2nd quadrant
    else if(x<=0&&y>=0){  
        for(int j=1;j<=y;j++){
            cout<<"N";
        } 
        for(int i=1;i<=abs(x);i++){
            cout<<"W";
        }    
    }
    //3rd quadrant
    else if(x<=0&&y<=0){  
         for(int j=1;j<=abs(y);j++){
            cout<<"S";
        } 
        for(int i=1;i<=abs(x);i++){
            cout<<"W";
        }          
    }
    //4th quadrant
    else{        
        for(int i=1;i<=x;i++){
            cout<<"E";
        }
        for(int j=1;j<=abs(y);j++){
            cout<<"S";
        }        
    }

    return 0;
}