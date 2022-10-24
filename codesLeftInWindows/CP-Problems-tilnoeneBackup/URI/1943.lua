n = io.read("*number")
 
res = "Top "
if(n <= 1) then res = res .. "1"
elseif(n <= 3) then res = res .. "3"
elseif(n <= 5) then res = res .. "5"
elseif(n <= 10) then res = res .. "10"
elseif(n <= 25) then res = res .. "25"
elseif(n <= 50) then res = res .. "50"
else res = res .. "100"
end

print(res)