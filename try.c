#include<stdio.h>
#include <stdlib.h>

void capitalizePlainText(char string[], int size) {
    for(int i = 0;i<size;i++){
        if(string[i]>96){
            string[i]-=32;
        }
    }
}
int measureSize(char string[]){
    int i;
    for (i = 0; string[i] != '\0'; ++i);
    return i;
}
void checkforJ(char string[], int size) {
    for (int i = 0; i < size; i++) {
        if(string[i] =='J')
            string[i]='I';
    }
}

void repeatLetter(char string[], int size) {
    for (int i = 0; i < size-1; i++) {
        if(string[i]==string[i+1]){
            char current = string[i+1];
            for (int j = i+2; j <size+1 ; j++) {
                char temp = string[j];
                string[j] = current;
                current = temp;
            }
            string[i+1]='X';
            size++;
        }
    }

    if(size%2!=0){
        string[size] = 'X';
        size+=1;
    }
    string[size]='\0';


}

void generateKeyMatrix(char key[], int keySize,char keyMatrix[5][5]) {
  int i,j,k,flag = 0, *dicty;
  dicty = (int*)calloc(26,sizeof(int));
  for(i = 0;i<keySize;i++){
          dicty[key[i]-65] =2;
  }
  dicty['J'-65]=1;
  i =0;
  j = 0;
  for(k =0;k<keySize;k++){
      if (dicty[key[k]-65]==2){
          dicty[key[k]-65]-=1;
          keyMatrix[i][j] = key[k];
          j++;
          if(j==5){
              i++;
              j=0;
          }
      }
  }
  for(k = 0;k<26;k++){
      if(dicty[k]==0){
          keyMatrix[i][j] = (char)(k+65);
          j++;
          if(j==5){
              i++;
              j=0;
          }
      }
  }
}

void printKeyMatrix(char keyMatrix[5][5]){
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            printf("%c   ",keyMatrix[i][j]);
        }
        printf("\n");
    }
}

void searchPosition(char keyMatrix[5][5],int positionArray[4],char a, char b){
    for(int i = 0;i<5;i++){
        for(int j =0;j<5;j++){
            if(keyMatrix[i][j]==a){
                positionArray[0]=i;
                positionArray[1]=j;
            } else if(keyMatrix[i][j]==b){
                positionArray[2]=i;
                positionArray[3]=j;
            }
        }
    }

}

void encryptPlayfair(char plainText[], char keyMatrix[5][5], char cipherText[]) {
    int positionArray[4];

for(int i = 0;i< measureSize(plainText);i+=2){

    searchPosition(keyMatrix,positionArray,plainText[i],plainText[i+1]);
    if(positionArray[0]==positionArray[2]){
        cipherText[i]=keyMatrix[positionArray[0]][positionArray[1]+1];
        cipherText[i+1]=keyMatrix[positionArray[0]][(positionArray[3]+1)%5];
    } else if(positionArray[1]==positionArray[3]){
        cipherText[i] = keyMatrix[(positionArray[0]+1)%5][positionArray[1]];
        cipherText[i+1] = keyMatrix[(positionArray[2]+1)%5][positionArray[1]];
    } else{
        cipherText[i] = keyMatrix[positionArray[0]][positionArray[3]];
        cipherText[i+1] = keyMatrix[positionArray[2]][positionArray[1]];
    }

}
}

void encryptAffineCipher(char cipherText[], char cipherText2[]) {
//Here cipher text is plain text for us.
    for (int i = 0; i < measureSize(cipherText); i++) {
        int x = (int)cipherText[i] - 65;
        int y = (11*x + 15)%26;
        cipherText2[i] = (char) (y+65);
    }

}

void encryptShiftCipher(char cipherText2[], char cipherText3[], int shift) {
    for (int i = 0; i < measureSize(cipherText2) ; i++) {
        int x = cipherText2[i]-65;
        int y = (x+shift)%26;
        cipherText3[i] = (char)(y+65);
    }
}

int main(){
    char keyMatrix[5][5];
    int size;
    int keySize;
    printf("Enter size of plain text:-");
    scanf("%d",&size);
    char string[size];
    printf("Enter a word (Only letters and no space):-\n");
    scanf("%s",&string);
    printf(" Plain Text is :- %s\n",string);
    capitalizePlainText(string,size);
    printf("After converting into uppercase :- %s\n",string);
    checkforJ(string,size);
    printf("After changing J to I :- %s\n",string);
    repeatLetter(string,size);
    printf("After checking for repeating letters and adjusting length:- %s\n",string);
    size = measureSize(string);
    printf("\n\n");
    printf("Enter Size of Key:-\n");
    scanf("%d",&keySize);
    char key[keySize];
    printf("Enter the Key:-");
    scanf("%s",&key);
    printf("The key is :- %s\n",key);
    capitalizePlainText(key,keySize);
    printf("After converting into uppercase :- %s\n",key);
    checkforJ(key,keySize);
    printf("After converting J to I :- %s \n",key);
    generateKeyMatrix(key,keySize,keyMatrix);
    printKeyMatrix(keyMatrix);
    char cipherText[size];
    encryptPlayfair(string,keyMatrix,cipherText);
    printf("After Encrypting with Playfair Cipher text is:- %s\n",cipherText);
    char cipherText2[measureSize(cipherText)];
    encryptAffineCipher(cipherText,cipherText2);
    printf("After Encrypting with Affine Cipher (11,15) cipher text is:- %s\n",cipherText2);
    int keyForShift;
    printf("Enter shift key :-\n");
    scanf("%d",&keyForShift);
    keyForShift = (keyForShift)%26;
    size = measureSize(cipherText2);
    char cipherText3[measureSize(cipherText2)];
    encryptShiftCipher(cipherText2,cipherText3,keyForShift);
    printf("After Encrypting with shift cipher text is :- %s\n",cipherText3);
    return 0;
}