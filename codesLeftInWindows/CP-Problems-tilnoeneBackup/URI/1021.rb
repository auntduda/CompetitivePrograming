a = gets.to_f
n = a.to_i

puts "NOTAS:\n#{(n/100).to_i} nota(s) de R$ 100.00\n#{((n%100)/50).to_i} nota(s) de R$ 50.00\n#{(((n%100)%50)/20).to_i} nota(s) de R$ 20.00\n#{((((n%100)%50)%20)/10).to_i} nota(s) de R$ 10.00\n#{(((((n%100)%50)%20)%10)/5).to_i} nota(s) de R$ 5.00\n#{((((((n%100)%50)%20)%10)%5)/2).to_i} nota(s) de R$ 2.00"
v = a*100-n*100
puts "MOEDAS:\n#{((((((n%100)%50)%20)%10)%5)%2).to_i} moeda(s) de R$ 1.00\n#{(v/50).to_i} moeda(s) de R$ 0.50\n#{((v%50)/25).to_i} moeda(s) de R$ 0.25\n#{(((v%50)%25)/10).to_i} moeda(s) de R$ 0.10\n#{((((v%50)%25)%10)/5).to_i} moeda(s) de R$ 0.05\n#{((((v%50)%25)%10)%5).to_i} moeda(s) de R$ 0.01"