x0 , v0 , t = map(int,input().split())
g = 9.8
xt = x0 + v0 * t - 1/2 * g * t * t
print(xt - x0)