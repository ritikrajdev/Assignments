%while expression
%statement
%end
%n=10;
%f=n;
%while n>1
 %   n=n-1;
 %   f=f*n
%end
  %fprintf('result=%d', f)
  
  %if -else -end
  %if conditional expression
  %statement -1
  %else
  %statement -2
  %end
  
  %x=5;
  %if x<5
  %    y=exp(x);
  %else
  %    y=factorial(x);
  %end
  %y
  %x=1;
  %if x<1
  %    y=exp(x)
  %elseif x>1
   %   y=x*x
  %else
   %   y=log(x)
  %end
  %for statement 
  %for space name of variable=intitial point: increment: end point
  %statement
  %end
  %k=k^2
  %k=1 to 10 with one increment 
  %for k=1:10
   %   k=k^2
  %end
  %sum=1+2+3...+10
  %sum=0;
  %for i=1:10
  %    sum=sum+i
  %end
  %product=1*2*3...*10
  %product=1;
  %for i=1:10
  %    product=product*i
  %end
  
  %nested looping 
  %for k=1:10
  %    for i=1:10
  %        statement (k, 1)
  %    end
  %end
  %fibonacci
  %x(n)=x(n-1)+x(n-2), n>=3
  %x(1)=1
  %x(2)=1
  %x(1)=1
  %x(2)=1;
  %for i=3:5
  %    x(i)=x(i-1)+x(i-2)
  %end
  %x(n)=(((1+sqrt(5))/2)^n-(1-sqrt(5))/2)^n)/sqrt(5), n>=1
  
  for i=1:5
      a=(1-sqrt(5))/2;
      b=(1-sqrt(5))/2;
      x(1)=(a^i-b^i)/sqrt(5)
  end