# without dplyr
# Q1 
df<-read.csv('https://raw.githubusercontent.com/fivethirtyeight/data/master/daily-show-guests/daily_show_guests.csv')
df[1:10,]
head(df,10)

# Q2
colnames(df)
newnames<-c("year","job","date","category","guest_name")
for(i in 1:length(newnames)){
  colnames(df)[i]=newnames[i]
}
colnames(df)

# Q3
report<-df[,c('year','date','guest_name')]
report

# Q4
df[,-1]

# Q5
subset1<-subset(df,df$job=="actor"&df$guest_name=="ABC")
subset1

# Q6
df[order(df$date),]

# Q7
exp<-rep(0,times=nrow(df))
df['Experience']<-exp
df

# with dplyr
# Q1 
install.packages("dplyr")
library("dplyr")
df1<-read.csv('https://raw.githubusercontent.com/fivethirtyeight/data/master/daily-show-guests/daily_show_guests.csv')
df1[1:10,]
head(df,10)

# Q2
df1<-rename(df1,year=YEAR)
df1<-rename(df1,job=GoogleKnowlege_Occupation)
df1<-rename(df1,date=Show)
df1<-rename(df1,category=Group)
df1<-rename(df1,guest_name=Raw_Guest_List)
colnames(df1)

# Q3
sample_n(select(df1,year,date,guest_name),10)

# Q4
select(df1,-year)

# Q5
filter(df1,job=="actor"&guest_name=="ABC")

# Q6
arrange(df1,date)

# Q7
mutate(df1,exp=0)
