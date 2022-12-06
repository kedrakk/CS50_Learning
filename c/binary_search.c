#include <stdio.h>

int binarySearching(int arrayToSearch[], int numberToSearch,int start,int end);

int main(void){
    int arrayToSearch[]={-10,10,20,30,40,50,60,70};
    int numberToSearch=-1;
    int arraySize=sizeof(arrayToSearch)/sizeof(arrayToSearch[0]);
    int binarySearchResult=binarySearching(arrayToSearch,numberToSearch,0,arraySize-1);
    if(binarySearchResult!=-1){
        printf("Found: %i\n",numberToSearch);
    }else{
        printf("Not Found!\n");
    }
}

int binarySearching(int arrayToSearch[], int numberToSearch,int start,int end){
    int middleIndex=(start+end)/2;
    if(start>end){
        return -1;
    }
    if(numberToSearch==arrayToSearch[middleIndex]){
        return 1;
    }else if(numberToSearch>arrayToSearch[middleIndex]){
        return binarySearching(arrayToSearch,numberToSearch,middleIndex+1,end);
    }
    else if(numberToSearch<arrayToSearch[middleIndex]){
        return binarySearching(arrayToSearch,numberToSearch,start,end-1);
    }else{
        return -1;
    }
}