clc;
x0=input('Enter initial approximation x0:');
e=input('Enter tolerance value e:');
N=input('Enter the max number of iterations:');
i=1;
%((7/22)*(asin(-1*x/2) + 44/7))
%(1/tan(x) - 1/(4*x) + x)
g=@(x)(1/tan(x) - 1/(4*x) + x);
while(i<=N)
    x1=g(x0);
    if(abs(x1-x0)<=e)
        fprintf('Solution accurate to within 10^-3 is %f',x1);
        break;
    else
        i=i+1;
        x0=x1;
    end
end