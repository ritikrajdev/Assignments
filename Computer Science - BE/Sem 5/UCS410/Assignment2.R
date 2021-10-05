LAB ASSIGNMENT 2
#dataset from kaggle - https://www.kaggle.com/manasgarg/ipl?select=matches.csv
deliveries <- read.csv("~/deliveries.csv")
> Mean_od_overs<-mean(deliveries.over)
Error in mean(deliveries.over) : object 'deliveries.over' not found
> Mean_od_overs<-mean(deliveries$over)
> print(Mean_od_overs)
[1] 10.14269
> sd_of_overs<-sd(deliveries$over)
> print(sd_of_overs)
[1] 5.674335
> median_of_over<-median(deliveries$over)
> print(median_of_over)
[1] 10
> mean_of_balls<-mean(deliveries$ball)
> print(mean_of_balls)
[1] 3.6165
> sd_of_balls<-sd(deliveries$ball)
> print(sd_of_balls)
[1] 1.807691
> median_of_ball<-median(deliveries$ball)
> print(median_of_ball)
[1] 4
>q1<-quantile(deliveries$ball,.25)
>q2<-quantile(deliveries$ball,.75)
>y = IQR(deliveries$ball)
>balls<-array(deliveries$ball)
>for (i in 1:len(deliveries$ball)
{
    if(balls[i]<(q1 - 1.5*y))
    f_m_b[i] = balls[i]
    if(balls[i]>(q2 + 1.5*y))
    f_m_a[i] = balls[i]
}
print(f_m_b)