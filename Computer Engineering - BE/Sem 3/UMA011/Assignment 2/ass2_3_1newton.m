clc;
f=@(x)x^2-17;
f1=@(x)2*x;
x0=5;
e=0.00001;
N=100;
i=1;
while(i<=N)
    
       x1=(x0)-((f(x0))/f1(x0));
    if abs(x1-x0)<=e
        fprintf('value of x1=%f and iteration taken=%d',x1,i);
        break;
    else
        x0=x1;
        i=i+1;
    end
end