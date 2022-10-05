# Q1
a<-seq(1.3,4.9,0.3)
print(a)
b<-rep(c(1,2,3,4),5)
print(b)
c<-seq(14,0,-2)
print(c)
d<-rep(c(5,12,13,20),each=2)
print(d)

# Q2
data(iris)
# A
structure(iris)
typeof(iris)
class(iris)
# B
ncol(iris)
nrow(iris)
# C
Filter(is.factor,iris)
levels(iris$Species)

# Q3
# A
s1<-subset(iris,Species=="setosa")
mean(s1$Sepal.Length)
sd(s1$Sepal.Length)
s2<-subset(iris,Species=="virginica")
mean(s2$Sepal.Length)
sd(s2$Sepal.Length)
s3<-subset(iris,Species=="versicolor")
mean(s3$Sepal.Length)
sd(s3$Sepal.Length)
mean(s1$Sepal.Width)
sd(s1$Sepal.Width)
mean(s2$Sepal.Width)
sd(s2$Sepal.Width)
mean(s3$Sepal.Width)
sd(s3$Sepal.Width)

# B
iris.class<-iris
Calyx.width<-vector(mode="character",length=150)
for(i in 1:150){
  if(iris.class$Sepal.Length[i]<5)
    Calyx.width[i]<-"short"
  else
    Calyx.width[i]<-"long"
}
iris.class$Calyx.width<-Calyx.width
head(iris.class)

# Q4
data(mtcars)
str(mtcars)
names(mtcars)

# A
subset(mtcars, cyl>5)

# B
head(mtcars,10)

# C
mtcars[substr(row.names(mtcars),1,5)=="Honda",]

