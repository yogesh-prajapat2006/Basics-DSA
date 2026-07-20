#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int target=100;
    bool flag=false;



    for( int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                printf("target is find index is= %d %d",i,j);
                flag=true;
            }
            
        }
    }
    if(!flag)
    printf("target is not find");
    
    return 0;

}