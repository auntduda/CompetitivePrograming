x = gets.to_i

if x%2==0
    x+=1
end

for i in 1..6 do
    puts x
    x+=2
end