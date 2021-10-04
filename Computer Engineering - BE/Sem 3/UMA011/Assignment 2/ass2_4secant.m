clc;
f=@(x)9*exp(-x)*sin(2*pi*x)-3.5;
N=100;
h=0.01;
for i= -N:h:N
    if(f(i)*f(i+h)<0)
        x0=(i);
        x1=(i+h);
        break
    end
end
e=0.00001;
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