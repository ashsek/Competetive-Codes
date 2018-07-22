import sys
sys.setrecursionlimit(1000000000)
po = []
 
# A function to do postorder tree traversal
def printPostorder(root):
 
    if root:
 
        # First recur on left child
        printPostorder(root.left)
 
        # the recur on right child
        printPostorder(root.right)
 
        # now print the data of node
        po.append(root.val)
 
pr = []
# A function to do postorder tree traversal
def printPreorder(root):
 
    if root:
 
        # First print the data of node
        pr.append(root.val)
 
        # Then recur on left child
        printPreorder(root.left)
 
        # Finally recur on right child
        printPreorder(root.right)

class Tree:
  def __init__(self, _val = None):
    self.val = _val
    self.right, self.left = None, None
  def __iter__(self):
    yield self.val
    yield from [[], self.left][bool(self.left)]
    yield from [[], self.right][bool(self.right)]
  def _insert_vals(self, _start, _d):
    self.val = _start
    for a, b in zip(['left', 'right'], _d[_start]):
      if b is not None:
        setattr(self, a, Tree())
        getattr(self, a)._insert_vals(b, _d)

for T in range(int(input())):
	n,k3 = list(map(int,input().split()))
	l = [0]*n
	l9 = [0]*n
	d = {}
	for i in range(n):
		a,b = list(map(int,input().split()))
		if a == 0:
			a = None
		if b == 0:
			b = None
		d[i+1] = [a,b]
	# root = Node(1)
	# d2 = {}
	# d2[1] = root
	# root.left = d[1][0]
	# root.right = d[1][1]
	t = Tree()
	t._insert_vals(1, d)
	#print('Pre Order')
	printPreorder(t)
	#print(pr)
	#print('Post Order')
	printPostorder(t)
	#rint(po)
	pr2 = pr[:]
	po2 = po[:]
	groups = []
	for _ in range(n):
		groups.append([])
	al = []
	g = 0
	for k in pr2:
		while True:
			if k not in al:
	#			print('G', g)
				index = pr2.index(k)
				al.append(k) 
				k2 = po2[index]
				groups[g].append(k)
				groups[g].append(k2)
				pr.remove(k)
				po.remove(k2)
				k = k2
			else:
	#			print('G', g)
				g += 1
				break
	for i in range(len(groups)):
		groups[i] = list(set(groups[i]))
	groups.sort(reverse = True)
	#print('Groups')
	#print(groups)
	t_g = 0 
	t_l = 0
	g2 = []
	for j in groups:
		if len(j) > 0:
			t_g += 1
			t_l += len(j)
			g2.append(j)
		else:
			break
	c = 1
	if t_g >= k3 and t_l == n:
		for j in g2:
			for p in j:
				l9[p-1] = c
			c += 1
		print('Case #{0}:'.format(T+1), *l9)
	else:
		print('Case #{0}: Impossible'.format(T+1))

	pr = []
	po = []