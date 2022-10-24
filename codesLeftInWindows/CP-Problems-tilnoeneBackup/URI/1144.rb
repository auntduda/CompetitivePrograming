n = gets.to_i

for i in 1..n do
    puts("#{i} #{(i*i)} #{(i*i*i)}")
    puts("#{i} #{(i*i+1)} #{(i*i*i+1)}")
end