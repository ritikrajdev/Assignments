clc;
f=@(x)exp(-x)*(x^2+5*x+2)+1;
x0=1;
x1=0;
e=0.00001;
N=100;
i=1;
while(i<=N)
    
        x2=x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
    if abs(x2-x1)<=e
        fprintf('value of x2=%f and iteration taken=%d',x2,i);
        break;
    else
        x0=x1;
        x1=x2;
        i=i+1;
    end
end