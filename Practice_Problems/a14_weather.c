# include <stdio.h>
char* temp(int temp);
int main() {
    int t;
    scanf("%d",&t);
    printf("%s \n",temp(t));

}
char* temp(int temp){
    if(temp>30){
        return "hot";
    }else{
        return "cold";
    }
}
