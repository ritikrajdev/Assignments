clc;
g=@(x)(0.5*sqrt(10-(x^3)));
x0=input('Enter value of x0=');
e=input('Enter value of e=');
N=input('Enter value of max number of iterations=');
i=1;
while(i<=N)
    
       x1=g(x0)
   % if abs(x1-x0)<=e
   %     fprintf('value of x1=%f and iteration taken=%d',x1,i);
   %     break;
   % else
        x0=x1;
        i=i+1;
    end
%end