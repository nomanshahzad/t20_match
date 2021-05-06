#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(0));


int pscore[10]={0},balls[10]={0},six[10]={0},four[10]={0};
float srate[10]={0};
int l=0,ball,wicket,a=0,tscore=0,tball=0,tsix=0,tfour=0,win=0;

printf("Pakistan    Score\tBalls\tFours  \t Sixes\tS.Rate\n");
for(ball=1,wicket=1;ball<=120&&wicket<11;ball++)
{
  a=rand()%6+1;
  balls[l]=balls[l]+1;

  if(a==4)
  {
    four[l]=four[l]+1;
  }
  else if(a==6)
  {
    six[l]=six[l]+1;
  }
  if(a!=5)
  {
    pscore[l]=pscore[l]+a;
  }
  else
  {
    srate[l]=(pscore[l]/balls[l])*100;
    printf("Player %2d: %4d| %10d |%9d |%9d |%9.2f\n",wicket,pscore[l],balls[l],four[l],six[l],srate[l]);
    tscore=tscore+pscore[l];
    tball=tball+balls[l];
    tfour=tfour+four[l];
    tsix=tsix+six[l];
    wicket++;
    l++;

  }
}

printf("   Total=%6d  %10d  %9d  %9d\n\n",tscore,tball,tfour,tsix);



int pscore2[10]={0},balls2[10]={0},six2[10]={0},four2[10]={0};
float srate2[10]={0};
int l2=0,ball2,wicket2,a2=0,tscore2=0,tball2=0,tsix2=0,tfour2=0;

printf("  India     Score\tBalls\tFours  \t Sixes\tS.Rate\n");
for(ball2=1,wicket2=1;ball2<=120&&wicket2<11;ball2++)
{
  a2=rand()%6+1;
  balls2[l2]=balls2[l2]+1;

  if(a2==4)
  {
    four2[l2]=four2[l2]+1;
  }
  else if(a2==6)
  {
    six2[l2]=six2[l2]+1;
  }
  if(a2!=5)
  {
    pscore2[l2]=pscore2[l2]+a2;
  }
  else
  {
    srate2[l2]=(pscore2[l2]/balls2[l2])*100;
    printf("Player %2d: %4d| %10d |%9d |%9d |%9.2f\n",wicket2,pscore2[l2],balls2[l2],four2[l2],six2[l2],srate2[l2]);
    tscore2=tscore2+pscore2[l2];
    tball2=tball2+balls2[l2];
    tfour2=tfour2+four2[l2];
    tsix2=tsix2+six2[l2];
    wicket2++;
    l2++;
    if(tscore2>tscore)
      break;
  }
}

printf("   Total=%6d  %10d  %9d  %9d\n\n",tscore2,tball2,tfour2,tsix2);

if(tscore>tscore2)
{
  win=tscore-tscore2;
  printf("Pakistan wins by %d runs\n",win);
}
else if(tscore2>tscore)
{
  win=10-wicket2+1;
  printf("India wins by %d wickets\n",win);
}
else
printf("match tied\n");
return 0;

}
