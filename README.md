# Problem 1: WebServer
Serving Webpage based on some Protocol so that no websites remain unresponsive for more than a minute

### Some Important thing that you need to make sure while running this repositories file:
1. Consider *main.c* file to execute program
2. Make sure that, To execute smallInputData file you will first change name as **inputSmallData.txt** in main.c program file in follwing line
```c 
    FILE *fp;
    fp = fopen("inputBigData.txt", "r");
``` 
3. Make sure that, To generate Output file you will first change name as **outputSmallData.txt** or **outputBigData.txt** based on inputFile in main.c program file in follwing line
```c 
  FILE *fwrite;
  fwrite = fopen("outputBigData.txt", "w");
```
4. And Please, Consider My Program Approch before you consider.

### Problem Statements:
Given you have T websites on a server. You have to serve data for each website from your server in such a way that no websites remain unresponsive for more than a minute.

**Each of your websites contains:**
1. Home page
2. About Us page
3. Contact Us page

**Each page listed has the following content with a maximum size that needs to be served:**
1. Text content piece - 5 MB each
2. Images - Total of 20 MB. Each image is of equal size totalling 20 MB.
3. Forms - Total of 5 MB. Each form is of equal size.

Take into account that for each website to be considered operational, we consider only loading the homepage. And the priority is that we need to load the content first, then the images and finally the forms.

A noted improvement is that the more images on the homepage perform better to keep the page operational, so the server favours the homepage with less content and more images to be served first.

Write an algorithm to arrange the T input in a way that should be served first to last, given that the maximum server speed is 2 Mbps.

**Input:**
The first line of input T  is the number of test cases
**Each Test case contains sizes of**
1) **Text content**  =  A
2) **Images** = B
3) **Forms** = C


**Output:**
Arrange the T website as shown in the sample output.

**Limits:**

:point_right: Small Set
1) 1 < A < 15
2) 1 < B < 23
3) -1 < C < 10

:point_right: Large Set
1) 1 < A <= 100
2) 1 < B <= 120
3) -1 < C <= 75

**Thanks in advance! if anything you will find wrong in this repository please let me know.**
