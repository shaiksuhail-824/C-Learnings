# include <stdio.h>
int marksPercentage(int chem,int phy,int math);
int  main() {
    int chem,phy,math;
    printf("Enter the chem ,phy and math marks respectively:");
    scanf("%d %d %d",&chem,&phy,&math);
    printf("%d",marksPercentage(chem,phy,math));
    return 0;
}
int marksPercentage(int chem,int phy,int math){
    int percentage = (chem+phy+math)/3;
    return percentage;
}