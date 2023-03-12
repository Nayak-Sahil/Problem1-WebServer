#include <stdio.h>
// #include <stdlib.h>

struct dataIn {
  int text;
  int img;
  int form;
};

int main(void) {
  int arrLength;
  FILE *fp;
  // -----> just change input file name for bigdata
  // -----> make sure you change output filename in last of program from where you gonna see
  fp = fopen("inputBigData.txt", "r");
  if (fp == NULL) {
    printf("Might be your file name wrong!");
  }
  fscanf(fp, "%d", &arrLength);

  printf("total length test cases %d\n\n", arrLength);

  // Struct Input Object to swap entire row instead of sing value.
  struct dataIn dataObj[arrLength];

  int i = 0;
  while (i < arrLength) {
    // getting file value into struct object Array.
    fscanf(fp, "%d %d %d", &dataObj[i].text, &dataObj[i].img, &dataObj[i].form);
    printf("%d %d %d \n", dataObj[i].text, dataObj[i].img, dataObj[i].form);
    i++;
  }

  fclose(fp);

  for (int i = 0; i < arrLength - 1; i++) {
    for (int j = 0; j < arrLength - 1; j++) {
      if (dataObj[j].text > dataObj[j + 1].text) {
        // when any website has small textcontent then it will first render or serve
        struct dataIn temp = dataObj[j];
        dataObj[j] = dataObj[j + 1];
        dataObj[j + 1] = temp;
      } else if (dataObj[j].text == dataObj[j + 1].text) {
        // when any 2 or more website has same text content but there is more size of image of any website then that website will first serve.
        if (dataObj[j].img < dataObj[j + 1].img) {
          struct dataIn temp = dataObj[j];
          dataObj[j] = dataObj[j + 1];
          dataObj[j + 1] = temp;
        }
      }
    }
  }

  // another file pointer for writing output
  FILE *fwrite;
  fwrite = fopen("outputBigData.txt", "w");

  printf("\n");
  for (int i = 0; i < arrLength; i++) {
    printf("%d %d %d \n", dataObj[i].text, dataObj[i].img, dataObj[i].form);
    fprintf(fwrite, "%d %d %d\n", dataObj[i].text, dataObj[i].img,
    dataObj[i].form);
  }

  return 0;
}