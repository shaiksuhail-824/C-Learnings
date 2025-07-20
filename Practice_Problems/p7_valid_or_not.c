# include <stdio.h>
int main() {
    printf("%d \n",8^8); // valid
    int x ;int y=x; // valid
    int x,y = x; //invalid
    char star = "**";
    printf("%d \n",x); //invalid
}