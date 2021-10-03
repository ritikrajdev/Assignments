clc;
f=@(x)x^2-2;
x0=input('Enter value of x0=');
x1=input('Enter value of x1=');
e=input('Enter accuracy value e=');
N=input('Enter value of max number of iterations=');
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