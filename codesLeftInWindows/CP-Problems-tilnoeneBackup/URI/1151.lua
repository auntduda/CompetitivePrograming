fib = {}
fib[0] = 0
fib[1] = 1
n = io.read("*number")
res = ""
for i=2,n-1,1 do
    fib[i]=fib[i-1]+fib[i-2]
end
for i=0,n-1,1 do
    res=res..fib[i]
    if(i==n-1) then
        print(res)
    else
        res=res.." "
    end
end