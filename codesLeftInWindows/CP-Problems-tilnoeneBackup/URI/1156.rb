b=2.0
soma=1
a=3.0
while(a<=39) do
    c=a/b
    soma+=c
    b*=2
    a+=2
end

puts "%0.02f" % (soma).round(2)
