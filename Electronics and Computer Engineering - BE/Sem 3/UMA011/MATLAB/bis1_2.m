format long;
clc;
f=@(x) (x^2-2);
a=input('Enter value of a=');
b=input('Enter value of b=');
e=input('Enter value of e=');

N=(log(b-a)-log(e))/log(2);

N=ceil(N);

for i=1:N
    c=(a+b)/2;
    if f(a)*f(c)<0
        a=a;
        b=c;
    else
        b=b;
        a=c;
    end
end
fprintf('Root= %f and iteration= %d',c,N);
