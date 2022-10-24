ns = gets.chomp().split(' ')

x = ns[0].to_i
y = ns[1].to_i
res = ""

for i in 1..y do
    res=res+i.to_s
    if(i%x==0 || i==y) then
        puts(res)
        res=""
    else
        res=res+" "
    end
end