while(true) do
    ns = gets.chomp().split(' ')
    a = ns[0].to_i
    if(a==0) then
        break
    end
    b = ns[1].to_i
    c = ns[2].to_i
    puts "%0.00f" % (Math.sqrt((a*b)*(100.0/c))).floor
end