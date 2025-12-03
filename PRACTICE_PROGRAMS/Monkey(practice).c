// There is a monkey who is climbing on a pole and it climbs
// 5ft up inn the first minute, next minute slips 2ft down.
// WAP to accept height of the pole from the user. determine
// what time it will take to reach the top
#include <stdio.h>

int main() {
    int height, min,sec,climbed,rh,st;
 
    printf("Enter the height of the pole (in feet): ");
    scanf("%d", &height);
    st=height/3;// steps the monkey will take
    st--;
    rh=height-(st*3); //remaining height to be covered
    min=st*2;//minutes taken
    sec=rh*(60/5);//seconds taken
    if(sec==60){
        min++;
        sec=0;
    }
    
    printf("The monkey will reach the top in %d minutes %d seconds.\n", min, sec);

    return 0;
}