#import <stdio.h>

int main(int argc, char **argv) {
   
    int classCount = 0;
    
    int a;
    printf("1 is present, 0 is absent\n");
    
    printf("is Jay here?");
    scanf("%d", &a);
    if (a == 1) {
        // then jay is here
        classCount = classCount + 1;
    }
    
    if (classCount > 0) {
        printf("there are %d in class", classCount);
    } else {
        printf("no one is here.  :(");
    }
    printf("\n");
}