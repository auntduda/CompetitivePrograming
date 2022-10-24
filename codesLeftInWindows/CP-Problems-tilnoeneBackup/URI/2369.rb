n = gets.to_i

tot = 7

if(n >= 101) then
    tot = tot + (n-100)*5;
    n = 100;
end

if(n >= 31) then
    tot = tot + (n-30)*2;
    n = 30;
end

if(n >= 11) then
    tot = tot + (n-10);
    n = 10;
end
    
puts(tot)