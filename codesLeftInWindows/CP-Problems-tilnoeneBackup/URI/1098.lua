i=0
k=0
while i<=2 do
    if(k==0 or k==5 or k==10) then
        print(string.format("I=%.0f J=%.0f", i, i+1))
        print(string.format("I=%.0f J=%.0f", i, i+2))
        print(string.format("I=%.0f J=%.0f", i, i+3))
    else
        print(string.format("I=%.1f J=%.1f", i, i+1))
        print(string.format("I=%.1f J=%.1f", i, i+2))
        print(string.format("I=%.1f J=%.1f", i, i+3))
    end
    i=i+0.2
    k=k+1
end
