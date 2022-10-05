data = rnorm(1:10)
data
mean<-mean(data)
mean
median<-median(data)
median
my_mode <- function(x) {
  unique_x <- unique(x)
  tabulate_x <- tabulate(match(x, unique_x))
  unique_x[tabulate_x == max(tabulate_x)]
}
my_mode(data)
sd<-sd(data)
sd
var<-var(data)
var
a<-matrix(1:12,nc=3,nr=4)
a[1,c(1:2)]
install.packages("swirl")
package.version("swirl")
library("swirl")
swirl()
