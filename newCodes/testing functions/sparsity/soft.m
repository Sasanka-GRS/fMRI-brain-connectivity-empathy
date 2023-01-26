function y = soft(x,a)

if(x<-a)
    y = x+a;
elseif(abs(x)<=a)
    y = 0;
else
    y = x-a;
end

end