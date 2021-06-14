#include <stdio.h>
#include <conio.h>

int inUzynBirlikYzygiderliligi(int* arr, int arrUzynlyk);

int main (){
	int arr[] = {1,0,1,1,0,1,1,1};
	int netije = inUzynBirlikYzygiderliligi(arr, 10);
	printf("Arraydakik in uzyn birliklerin yzygiderlilik: %d", netije);
	getch();
	return 0;
}

int inUzynBirlikYzygiderliligi(int* arr, int arrUzynlyk){
	    int i, j, birliklerinMukdary = 0, arrJemiBirlikler = 0;
	    for (i = 0; i < arrUzynlyk; i++){
	        if (arr[i] == 1){						/*1'leri tapdy diymek bm 1*/
	            birliklerinMukdary=1;
	            for (j = i + 1; j < arrUzynlyk; j++)
	                if (arr[j] == 1) 					/*1'leri sanap baslaya*/
	                    birliklerinMukdary++;
	                else
	                    break;
	            i = j; 								/*i su yerden baslar*/
	        }
	        if (birliklerinMukdary > arrJemiBirlikler)
	            arrJemiBirlikler = birliklerinMukdary;
	    }
	    return arrJemiBirlikler;
	}
