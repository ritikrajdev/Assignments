Question 2)  

n= input('Enter no. of Eq. : ');
A = zeros(n,n+1);
x1 = zeros(1,n);
 
A=[4 2 3 8; 3 -5 2 -14; -2 3 8 27];
x1=[0 0 0];
 
tol = input('Tolerance(tol): ');
m = input('Enter maximum no of iterations(m): ');
w = input('Enter parameter w(omega) ');
 
k=1;
while k<=m
    err = 0;
    for i= 1 : n
        s=0;
        for j = 1 : n
            s= s-A(i,j)*x1(j);
        end
        s = w*(s+A(i,n+1)/A(i,i));
    end
end






Question 3)
(a)	
a = [10 8 -3 1 -16 ; 2 10 1 -4 9 ; 3 -4 10 1 10 ; 2 2 -3 10 1]
e = [1 1 1 1]
tol=0.001;
n=4;
x=[0 0 0 0];
o=1.2;
while norm(e,inf)>=tol
    xold=x;
    for i=1:n
        sum=0;
        for j=1:n
            if i~=j
                sum = sum + a(i,j)*x(j);
            end
        end
        x(i)=(a(i,n+1)-sum)/a(i,i);
        e(i)=x(i)-xold(i);
    end
end
    disp(x);



(b)

a = [4 1 -1 1 -2; 1 4 -1 -1 -1 ; -1 -1 5 1 0; 1 -1 1 3 1];
n = 4;
x = [0 0 0 0];
tol = 0.001;
e = [1 1 1 1];
o = 1.2;
while norm (e , inf)>=tol
    xold = x;
    for i = 1:n
        sum = 0;
    for j = 1:n;
        if i~=j;
            sum = sum + a(i,j)*x(j);
        end
    end
    x(i)=(a(i,n+1)-sum)/a(i,i);
    e(i)=x(i)-xold(i);
    end
end
disp(x)



Question 4 )

A=[4.63 -1.21 3.22;-3.07 5.48 2.11;1.26 3.11 4.57 ]
b=[2.22;-3.17;5.11]
n=size(A,1);
maxerr=10^(-3);
x=zeros(1,size(A,1));
err=inf;
itr=0;
while (err>maxerr)
    x_old=x;
    for i=1:n
        sum=0;
        for j=1:i-1
            sum=sum+A(i,j)*x(j);
        end
        for j=i+1:n
            sum=sum+A(i,j)*x_old(j);
        end
        x(i)=(1/A(i,i))*(b(i)-sum);
    end
    itr=itr+1;
    y(itr,:)=x;
    err=abs(x_old-x);
end
fprintf('No. of iteration = %d\n',itr);
disp(x)
