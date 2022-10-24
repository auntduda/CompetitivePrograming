n = io.read("*number")
m = io.read("*number")

ter = {}
val = 1
for i=1,n do
    ter[i] = {}
    for j=1,m do
        ter[i][j] = io.read("*number")
    end
end
for i=2,n do
    for j=2,m do
        if(ter[i][j]==42 and ter[i-1][j-1]==7 and ter[i-1][j]==7 and ter[i-1][j+1]==7 and ter[i][j-1]==7 and ter[i][j+1]==7 and ter[i+1][j-1]==7 and ter[i+1][j]==7 and ter[i+1][j+1]==7) then
            print(i.." "..j)
            val = 0
        end
    end
end
if(val==1) then
    print("0 0")
end
