soma=0
ns = gets.chomp.split(' ')
a = ns[0].to_i
n = ns[1].to_i
i = 2
while(n<=0) do
    n = ns[i].to_i
    i+=1
end
for i in 0..n-1 do
    soma=soma+a+i
end
puts(soma)