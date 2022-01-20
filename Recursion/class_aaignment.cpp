/*    In a mathematics class, Teacher ask Alice to find the number of all n digit distinct integers which is formed by the two distinct digits ai and bi but there is a rule to form n digit integer.
        Rule: She has to form n digit integer by using two digits ai and bi without consecutive bi.
        Help her to find the number of such n digit integers.

    Input Format: The first line contains T, the number of test cases. Further T lines contains the value n which is the number of digit in the integer.
    Constraints: 1<=T<=20, 1<=n<=25
    Output Format: For each test case print the number of such n digit integer.
    Sample Input:                            Sample Output:
    3                                          #1 : 2
    1                                          #2 : 3
    2                                          #3 : 5
    3
    Explanation: For n=1 : integers = a, b ; For n=2 : integers = aa, ab, ba ; For n=3 : integers = aaa, aab, aba, baa, bab   */
    #include<iostream>
    using namespace std;
    int fib(int n){
        //base case
        if(n<=1){
            return n;
        }
        //recursive case
        return fib(n-1)+fib(n-2);
    }
    int main(){
        int t;
        cin>>t;
        int k=1;
        while(t--){
            int n;
            cin>>n;
            cout<<"#"<<k++<<" : "<<fib(n+2)<<endl;
        }
    }