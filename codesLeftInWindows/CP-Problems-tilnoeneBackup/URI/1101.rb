while(true) do
    ns = gets.chomp().split(' ');
    n = ns[0].to_i
    m = ns[1].to_i
    if(m<=0 || n<=0) then
        break;
    end
    if(m>n) then
        temp=n
        n=m
        m=temp
    end
    soma=0
    for i in m..n do
        soma+=i;
        print(i)
        print(" ")
    end
    puts "Sum=#{soma}"
end
