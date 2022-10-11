# Q1
A<-array(c(12,13,14,15,16))
print(A)

# Q2
sum(A)

# Q3
prod(A)

# Q4
max(A)
min(A)

# Q5
range(A)

# Q6
mean(A)
median(A)
var(A)
sd(A)

# Q7
B<-sort(A)
print(B)
C<-sort(A, decreasing = TRUE)
print(C)

# Q8
matrix(c(1:12),3,4)

# Q9
rw<-matrix(c(A,B,C),3,5,byrow = TRUE)
cw<-matrix(c(A,B,C),5,3,byrow = FALSE)
print(rw)
print(cw)

# or
RW<-rbind(A,B,C)
CW<-cbind(A,B,C)
print(RW)
print(CW)

# Q10
RW[2:3,]

# Q11
CW[,c(1,3)]

# Q12
x<-matrix(c(RW[2,3],CW[2,3]))
print(x)

