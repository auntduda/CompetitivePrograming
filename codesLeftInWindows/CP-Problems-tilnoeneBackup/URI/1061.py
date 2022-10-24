di = int(input().split()[1])
ti = input()
df = int(input().split()[1])
tf = input()

hi = int(ti[0:2])
mi = int(ti[5:7])
si = int(ti[10:12])

hf = int(tf[0:2])
mf = int(tf[5:7])
sf = int(tf[10:12])

st=(sf-si)+(mf*60-mi*60)+(hf*3600-hi*3600)+(86400*df-86400*di);

print("{} dia(s)\n{} hora(s)".format(st//86400, (st%86400)//3600))
print("{} minuto(s)\n{} segundo(s)".format(((st%86400)%3600)//60, (((st%86400)%3600)%60)))
