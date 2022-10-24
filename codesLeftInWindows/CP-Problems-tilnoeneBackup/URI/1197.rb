
s = gets.split(' ')
prod = 1

s.each do |valor|
    prod*=valor.to_i
end

puts "#{prod*2}\n"