n = gets.to_i
 
res = "Top "
if(n <= 1) then res += "1"
elsif(n <= 3) then res += "3"
elsif(n <= 5) then res += "5"
elsif(n <= 10) then res += "10"
elsif(n <= 25) then res += "25"
elsif(n <= 50) then res += "50"
else res += "100"
end

puts res