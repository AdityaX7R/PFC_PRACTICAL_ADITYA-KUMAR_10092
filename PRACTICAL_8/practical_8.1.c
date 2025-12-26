#include<stdio.h>
int sumOfDigit(int n){
    // Aditya Kumar 10092
    int output=0;
    while(n!=0){
        int ld=n%10;
        output+=ld;
        n=n/10;
    }
    return output;
}
int main(){
    int n;
    scanf("%d",&n);
    int ans=sumOfDigit(n);
    printf("%d",ans);
}



// 456
// 15


