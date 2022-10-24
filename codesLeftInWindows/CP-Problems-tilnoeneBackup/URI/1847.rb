ls = gets.split(' ')

a = ls[0].to_i
b = ls[1].to_i
c = ls[2].to_i

feliz = false
if(a>b and b<=c) then feliz=true
elsif(b>a and c>b and c-b>=b-a) then feliz=true
elsif(a>b and b>c and b-c<a-b) then feliz=true
elsif(a==b and c>b) then feliz=true end
        
if(feliz) then puts(":)")
else puts(":(") end