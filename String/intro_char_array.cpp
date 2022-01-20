#include<iostream>
using namespace std;
int main(){

	// int arr[]={1,2,3,4};//arr-->act as a pointer
	// cout<<arr<<endl; //first bucket address
/*
1. cin
    It is used to read a word or character.
    It terminates on encountering whitespace or endline charater (’\n’)

2. cin.get(char_array,number_of_characters,delimiter)
    To read characters including special characters like ’ ', ‘\n’ and ‘\t’.

3. cin.getline(char_array,max_Size,delimiter)
    It is used to read a sentence or a paragraph.
    It terminates on encountering endline character.
    It also reads the whitespace.

Difference?
    The get() function is much like getline() but rather than read and discard the newline character, get() leaves that character in the input queue.
    get() leaves the delimiter in the queue thus letting you able to consider it as part of the next input.

Explanation:
    cin.getline() reads input up to ‘\n’ and stops
    cin.get() reads input up to ‘\n’ and keeps ‘\n’ in the stream
*/
	// // 1t INITIALIZATION --------------------------------------------
	char ch[]={'A','B','C','D','\0'};
	cout<<ch<<endl;//ABCD
	char ch2[]={'C','D','E','F','\0'};
	cout<<ch2<<endl;//CDEFABC


	// // 2nd INITIALIZATION --------------------------------------------
	char ch3[]="hello"; //by default strings have NULL at end;
	cout<<ch3<<endl;

	// // 3rd INITIALIZATION --------------------------------------------
	char ch4[11]="helloworld"; //by default strings have NULL at end;
	cout<<ch4<<endl;

	// // 4th INITIALIZATION --------------------------------------------
	char ch5[100];
	cin>>ch5;//"coding"//this will work for words without space
	cout<<ch5<<endl;

	// // 5th INITIALIZATION --------------------------------------------
	char ch6[100];//"hi co$sb\n"
	char ch_=cin.get();//h
	int i=0;

	// // loop
	// while(ch!='$'){
	while(ch_!='\n'){
		ch6[i]=ch_;
	i++;//6
	ch_=cin.get(); //'\n'
	}
	// ch6[i]='\0';
	cout<<ch6<<endl;

	// 6th INITIALIZATION --------------------------------------------
	// sentence
	char ch7[100];
	// cin.getline(arrname,size,'\n')
	cin.getline(ch7,100,'$');
	cout<<ch7<<endl;

	return 0;
}