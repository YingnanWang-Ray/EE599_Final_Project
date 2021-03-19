# EE599HW7
EE599 Homework7

Question1
What is the definition of a path in a graph?
	A path graph or linear graph is a graph whose vertices can be listed in the order v1, v2, …, vn such that the edges are {vi, vi+1} where i = 1, 2, …, n − 1. 
A simple path is a path that  a Path with no repeated vertices.
A cycle is a path in which a path where v 1 = v n
Topological sort is defined in graphs that are "Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge uv, vertex u comes before v in the ordering".

Question2
K=0	1	2	3	4	5                  
1	0	10	INF	30	100
2	INF	0	50	INF	INF	
3	INF	INF	0	INF	10	
4	INF	INF	20	0	60	
5	INF	INF	INF	INF	0

K=1	1	2	3	4	5
1	0	10	60	30	100
2	INF	0	50	INF	INF	
3	INF	INF	0	INF	10	
4	INF	INF	20	0	60	
5	INF	INF	INF	INF	0

K=2	1	2	3	4	5
1	0	10	60	30	70
2	INF	0	50	INF	60	
3	INF	INF	0	INF	10	
4	INF	INF	20	0	30	
5	INF	INF	INF	INF	0

K=3	1	2	3	4	5
1	0	10	50	30	60
2	INF	0	50	INF	60	
3	INF	INF	0	INF	10	
4	INF	INF	20	0	30	
5	INF	INF	INF	INF	0

K=4	1	2	3	4	5
1	0	10	50	30	60
2	INF	0	50	INF	60	
3	INF	INF	0	INF	10	
4	INF	INF	20	0	30	
5	INF	INF	INF	INF	0

Question3:
O(V+E)
O(V+E)
Assume that the first pair->first as the root.

Question4:
findroot()   ->   O(n)
TopologicalSort()    ->  O(V+E)

Question5:
O(V+E)
