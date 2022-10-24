m1=0
m2=0
m3=0
m4=0
n = gets.to_i
ns = gets.chomp().split(' ')

for i in 0..(n-1) do
    v = ns[i].to_i
    if(v%2==0) then
        m1=m1+1
    end
    if(v%3==0) then
        m2=m2+1
    end
    if(v%4==0) then
        m3=m3+1
    end
    if(v%5==0) then
        m4=m4+1
    end
end

puts("#{m1} Multiplo(s) de 2")
puts("#{m2} Multiplo(s) de 3")
puts("#{m3} Multiplo(s) de 4")
puts("#{m4} Multiplo(s) de 5")
