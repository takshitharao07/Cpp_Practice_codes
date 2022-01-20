/*  Farmer has built a new long barn, with N (2<=N<=100,000) stalls. The stalls are located at positions x1,…,xN (line) (0 <= xi <= 1,000,000,000).
    His C(2<=C<=N) cows become aggressive. FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. 
    What is the largest minimum distance?
        Input Format:  First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.
        Output Format: Print one integer: the largest minimum distance.   Explanation:  _________________________
        Sample Input               Sample Output                                       |            |            |
        5 3                        3                             while(start<=end):   start        mid          last
        1 2 8 4 9                                                                      0     0+((xn-x1)/2)     xn-x1
        Constraints:   2<=N<=100,000 ; 0<=xi<=1,000,000,000 ; 2<=C<=N           start=mid+1  <-- =T | =F -->  start=mid-1
 */
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int s=1, e=n, ans=0;  // start,end,ans 
    while(s<=e){
        int mid=(e+s)/2;  // mid point
        int cow=1;        // number of cows to be considered
        int pre=a[0];     // previous stall
        for(int i=1;i<n;i++){
             if(a[i]-pre>=mid){  // a[1]-a[0].... a[2]-a[0]....if >=mid
                 cow++;          // cow=2
                 pre=a[i];       // a[0]-->a[1].... a[0]-->a[2]
                 if(c==cow){     // if cow-->2 = c (entered)
                     break;
                 }
             }
        }
        if(cow==c){    
            ans=mid;  // answer updated
            s=mid+1;  // start updated 
        }
        else{
            e=mid-1;  // end upddated
        }
    }
    cout<<ans;  // final answer
    return 0;
}