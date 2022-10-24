l = gets.split(' ')

a = l[0].to_i
b = l[1].to_i
c = l[2].to_i
d = l[3].to_i

if(a*b == c*d) then
    puts("0");
elsif(a*b < c*d) then 
    puts("1");
else
    puts("-1");
end