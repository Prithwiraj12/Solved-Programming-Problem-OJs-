#include<stdio.h>
#include<math.h>
int main()
{
    int a,i=1;
    double b,c,d,e,f,g,h;
    scanf("%d",&a);
    while(a--){
        scanf("%lf %lf %lf",&b,&c,&d);

                if(c>d||d==0&&c==0||d==0||c==d||c==0){printf("Case %d: can't determine\n",i);}

        else{
                e=sqrt(pow(d,2)-pow(c,2));
                f=b/e;
                g=b/d;
                h=f-g;
                printf("Case %d: %.3lf\n",i,h);}
        i++;


}return 0;
}
