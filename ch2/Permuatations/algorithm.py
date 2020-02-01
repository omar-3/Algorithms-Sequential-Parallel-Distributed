def generate_permutations(L,i=None,n=None):
	if i==None:
		i=0
	if n==None:
		n=len(L)-1
	if i==n:
		print(L)
	else:
		for j in range(i,n+1):
			L[i],L[j]=L[j],L[i]
			generate_permutations(L,i=i+1,n=n)
			L[i],L[j]=L[j],L[i]


L=[1,2,3,4,5]
generate_permutations(L)

