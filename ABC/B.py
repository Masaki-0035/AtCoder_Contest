
S = input()
list(S)
S = S + "00000000"
Ans = 0
a = 1
if ord(S[0]) >= 65 and ord(S[0]) <= 90:
    Ans += 1

while a < 7:
    if ord(S[a]) > 48 and ord(S[a]) <= 57:
        Ans += 1
    a += 1

if ord(S[7]) >= 65 and ord(S[7]) <= 90:
    Ans += 1

if Ans >= 8:
    print("Yes")

else:
    print("No")
