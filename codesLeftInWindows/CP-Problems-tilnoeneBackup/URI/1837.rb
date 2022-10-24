ns = gets.chomp.split(' ')

a = ns[0].to_i
b = ns[1].to_i
q = (a/b)
r = a%b

if(r<0) then
    if(a-((q-1)*b)>=0) then
        q=q-1
    else
        q=q+1
    end 
    r = a-(q*b)
end
        
puts "#{q} #{r}"