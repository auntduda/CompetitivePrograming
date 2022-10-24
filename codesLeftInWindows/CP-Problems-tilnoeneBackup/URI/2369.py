n = int(input())

tot = 7

if(n >= 101):
    tot = tot + (n-100)*5;
    n = 100;

if(n >= 31):
    tot = tot + (n-30)*2;
    n = 30;

if(n >= 11):
    tot = tot + (n-10);
    n = 10;
    
print(tot)