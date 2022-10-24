fib = []
fib[0] = 0
fib[1] = 1
n = gets.to_i
res = ""
for i in 2..n-1 do
    fib[i]=fib[i-1]+fib[i-2]
end
for i in 0..n-1 do
    res=res+fib[i].to_s
    if(i==n-1) then
        puts(res)
    else
        res=res+" "
    end
end
