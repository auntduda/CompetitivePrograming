def min(a, b)
   if a > b then
       return b
    else
        return a
    end
end

a = [gets.to_i, gets.to_i, gets.to_i]

t1=a[1]*2+a[2]*4
t2=a[0]*2+a[2]*2
t3=a[0]*4+a[1]*2

puts min(min(t1, t2), t3)