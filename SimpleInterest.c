# include <stdio.h>

int main() {
    int pri, rate, time;

    printf("please enter the printcipl on which you want simple interest: ");
    scanf("%d", &pri);

    printf("please enter the rate on which you want simple interest: ");
    scanf("%d", &rate);

    printf("please enter the printcipl on which you want simple interest: ");
    scanf("%d", &time);

    int si = (pri * rate * time)/100;
    printf("so the simple interest calculated on the given principle, rate, time: %d", si);

    return 0;

}