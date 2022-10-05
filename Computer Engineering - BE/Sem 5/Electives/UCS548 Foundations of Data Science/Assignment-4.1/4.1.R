# Q1
PatientID<-c(1,2,3,4)
AdmDate<-c("10/15/2009", "11/01/2009", "10/21/2009", "10/28/2009")
Age<-c(25,34,28,52)
Diabetes<-c("Type1","Type2","Type1","Type1")
Status<-c("Poor","Improved","Excellent", "Poor")

DF<-data.frame(PatientID,AdmDate,Age,Diabetes,Status)
DF

# Q2
# A)
Subset1<-subset(DF, select=c(PatientID,Age))
Subset1
select(DF,PatientID,Age)

# B)
Subset2<-subset(DF, c(Diabetes)=="Type1")
Subset2

# C)
countStatus<-colSums(DF == "Poor")
countStatus[countStatus > 0]

# D)
summary(DF)

# E)
mean(DF$Age)

# F)
new_row = c(10,"10/12/2001","21","No Type")
DF<-rbind(DF,new_row)
DF

#Q3
MyList<-list("My First List")
MyList

# A)
a<-list(c(12,14,16,20))
MyList<-append(MyList,a)
MyList

# B)
list3<-list(A = matrix(
  c(1, 2, 3, 4, 5, 6, 7, 8, 9, 10),
  nrow = 5,  
  ncol = 2,        
  byrow = TRUE         
))

MyList <- append(MyList,list3)
MyList

# C)
s<-c("First","Second","Third")
MyList<-c(a,list3,s)
MyList
