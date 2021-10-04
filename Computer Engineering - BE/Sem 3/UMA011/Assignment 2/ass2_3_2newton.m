clc;
f=@(x) exp(-x)*(x^2+5*x+2)+1;
f1=@(x) -exp(-x)*(x^2+5*x+2)+exp(-x)*(x*2+5);
x0=-1.0;
N=100;
e=0.00001;
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