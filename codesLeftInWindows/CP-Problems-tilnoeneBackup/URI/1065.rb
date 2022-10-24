pares=0

for i in 1..5 do
    num = gets.to_i
    if(num%2==0) then
        pares+=1
    end
end

puts "#{pares} valores pares"
