clc;
f=@(x)x^2-2;
f1=@(x)2*x;
x0=input('Enter value of x0=');
e=0.0000005;
N=input('Enter value of max number of iterations=');
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