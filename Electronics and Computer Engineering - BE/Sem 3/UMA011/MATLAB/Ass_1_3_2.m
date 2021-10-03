clc;
f=@(x) x^3+4*x^2-10;
a=1;
b=2;
e= 10^-3;
N=(log(b-a)-log(e))/log(2);
N=ceil(N);
for i=1:N
    c=(a+b)/2;
    if (f(c)==0)
        fprintf('%f is the root', c);
        break;
    elseif ((f(a)*f(c))<0)
        b=c;
    else
        a=c;
    end
end
fprintf('%f is the root', c);