
format long;
clc;
C=input('Enter the elements of the Matrix C: ' ) ;
b=input('Enter the elements of the Matrix b: ' ) ;

A=[C b];
n=size(A,1);                                               
x=zeros(n,1);                                             
for i=1:n-1
    for j=i+1:n
        m = A(j,i)/A(i,i);
        A(j,:) = A(j,:) - m*A(i,:);
    end
end

x(n) = A(n,n+1)/A(n,n);

for i=n-1:-1:1
    summ = 0;
    for j=i+1:n
        summ = summ + A(i,j)*x(j,:);
        x(i,:) = (A(i,n+1) - summ)/A(i,i);
    end
end
x