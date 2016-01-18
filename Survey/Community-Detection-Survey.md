#Community Detection Related
##Possible Research Points
1. Evaluation of Prior Detection Methods on Metric and Scalability  
2. Fast Local Community Search/Query  
2. Sampling Large Scale Graph, Using Sample for Approximation Structure  
4. Implementing userful algorithms on GraphX, PowerGraph, Giraph, estimate efficiency  

##Influential Researcher
1. **[Andrea Lancichinetti](https://sites.google.com/site/andrealancichinetti/) (Umeå University)**  
1. **[Jure Leskovec](http://cs.stanford.edu/people/jure/) (Stanford)**  
10. **[Tang Jie](http://keg.cs.tsinghua.edu.cn/jietang/) (Tsinghua)**  

## Good Survey
1. **[Overall Survey](http://lab41.github.io/survey-community-detection/)** (Home Page : http://lab41.github.io/Circulo/)  

##Prior Famous Algorithms
- Reference  
	- (Refer to [Reihaneh Rabbany](https://scholar.google.com.hk/citations?user=Foh_c-QAAAAJ&hl=zh-CN&oi=ao)'s Github: https://github.com/rabbanyk/CommunityEvaluation)  
	- (Refer to [Andrea Lancichinetti](https://sites.google.com/site/andrealancichinetti/)'s Implementation)  

- Algorithms  
	1. 2004, **Fast Modularity**, *[Aaron Clauset]*, Finding community structure in very large networks(PHYSICAL REVIEW E 70, 066111 (2004))  
	2. 2005, **Walker Trap**, *[Pascal Pons]*, Computing Communities in Large Networks Using Random Walks  
	3. 2005, **Spectral Algorithm**, *[Luca Donetti]*, Improved spectral algorithm for the detection of network communities  
	4. 2007, **Label Propogation**, *[Usha Nandini Raghavan]*, Near linear time algorithm to detect community structures in large-scale networks  
	5. 2007, **Modularity Opt(Simulated Annealing)**, *[Marta Sales-Pardo]*, Extracting the hierarchical organization of complex systems  
	7. 2008, **Louvain**, *[Vincent D Blondel]*, Fast unfolding of communities in large networks  
	6. 2008, **Infomap**, *[Martin Rosvall]*, Maps of random walks on complex networks reveal community structure  
	7. 2009, **Potts model**, *[Peter Ronhovde]*, Multiresolution community detection for megascale networks by information-based replica correlations  
	8. 2010, **Link-Plus**, *[Yong-Yeol Ahn]*, Link communities reveal multiscale complexity in networks  
	9. 2010, **MOSES**, *[Aaron McDaid]*, Detecting higly overlapping communities with Model-based Overlapping Seed Expectation  
	10. 2010, **Potts Model**, *[Peter Ronhovde]*, Local resolution-limit-free Potts model for community detection  
	11. 2011, **OSOLOM**, *[Andrea Lancichinetti]*, Finding Statistically Significant Communities in Networks  
	12. 2011, **Multi-Level-Infomap**, *[Martin Rosvall]*, Multilevel Compression of Random Walks on Networks Reveals Hierarchical Organization in Large Integrated Systems  
	13. 2012, **Consensus Clustering**, *[Andrea Lancichinetti]*, Consensus clustering in complex networks  
	14. 2012, **Community-Affiliation Graph Model**, *[Jaewon Yang]*, Community-Affiliation Graph Model for Overlapping Network Community Detection  
	15. 2013, **Large Scale CAG**, *[Jaewon Yang]*, Overlapping Community Detection at Scale: A Nonnegative Matrix Factorization Approach  

- Evaluations  

## Tools
- General
    1. **[Some Recommendations From CppReference](http://en.cppreference.com/w/cpp/links/libs)** (Boost.Graph, LEMON, OGDF, NGraph)  
    1. **Networkx** has implemented **[many graph algorithms](http://networkx.github.io/documentation/networkx-1.10/reference/algorithms.html)**  
    2. **[Snap](https://github.com/snap-stanford/snap)** (Infomap, Fast Newman, BIGCLAM, CESNA, CoDA, RoIX)  
    3. **[igraph](https://github.com/igraph/igraph)** (Infomap, WalkTrap, Leading Eginvector)  

- BLAS
    2. **[Egien](http://eigen.tuxfamily.org/index.php?title=Main_Page)** (Cpp template library for linear algebra related algorithms)  
    5. **[Boost BLAS](http://www.boost.org/doc/libs/1_60_0/libs/numeric/ublas/doc/index.html)** (Boost Library)  
    6. **[ArmAdillo](http://arma.sourceforge.net/)**(Primarily developed at Data61 (Australia) by Conrad Sanderson)  


## Codes
- C++:
    1. [Benchmark2009](https://sites.google.com/site/santofortunato/inthepress2) (Prior 2008 Algorithms Comparison)  
    1. [AI-community-detection](https://github.com/sina-khorami/AI-community-detection) (Combo, Martelot's algorithms)  
    2. [network-community-benchmark](https://github.com/conradlee/network-community-benchmark) (Benchmark with facebok)  
    3. [GossipMap](https://github.com/uwescience/GossipMap) (Built on PowerGraph)  
    4. [GANXIS](https://sites.google.com/site/communitydetectionslpa/) (BLPA)  
    5. [CommunityDetectionC](https://github.com/ddvlamin/CommunityDetectionC) (with n(logn)^2 time complexity published in 2004)  
    6. [Community-Detection-Betweenness](https://github.com/sidrakesh/Community-Detection-Betweenness) ( modified version of Brandes algorithm(BC))  
    7. [Graph-Community-Detection](https://github.com/sranshous/Graph-Community-Detection) (Dense subgraph extraction with application to community detection)  
    8. [Het-SCD](https://github.com/Het-SCD/Het-SCD) (GPU implementation)  
    9. [Par-CD](https://github.com/stijnh/Par-CD) (Multi-core CPU and GPU implementation)  
    10. [paco](https://github.com/CarloNicolini/paco) (Benchmark Refer to Physics Review 2009)  
    11. [SCD](https://github.com/DAMA-UPC/SCD) (Scalable Community Detection)  
    12. [k-clique Percolation](https://sites.google.com/site/cliqueperccomp/) (k-clqiue Percolation 2012)  

- C:
    1. [iGraph](https://github.com/igraph/igraph/tree/master/src) (Pop Repo, Detail Summary:http://www.r-bloggers.com/summary-of-community-detection-algorithms-in-igraph-0-6/)  

- Java:
    1. [distributed-graph-analytics](https://github.com/Sotera/distributed-graph-analytics) (BSP impl,e.g., High Betweenness Set Extraction, Weakly Connected Components, Page Rank, Leaf Compression, and Louvain Modularity)  
    2. [Reihaneh Rabbany](https://github.com/rabbanyk/CommunityEvaluation) (5th-year Phd Student)  
    3. [noesis](https://github.com/sisusisu/noesis)(Some Impls)  

- Python:
    1. [Label-Propagation](https://github.com/liyanghua/Label-Propagation) (Refer to Pyshics 2007)  
    2. [Circulo](https://github.com/Lab41/Circulo) (With Some Implementations and Refer to SNAP)  

## Interesting Published Papers(With Codes)
1. [GossipMap: a distributed community detection algorithm for billion-edge directed graphs](http://dl.acm.org/citation.cfm?id=2807668) (SC15)  
2. [High quality, scalable and parallel community detection for large real graphs](http://www.dama.upc.edu/publications/fp546prat.pdf) (WWW 2014)  
2. [Community detection: effective evaluation on large social networks](http://comnet.oxfordjournals.org/content/2/1/19.full.pdf+html) (Journal of Complex Networks 2014)  
3. [General optimization technique for high-quality community detection in complex networks](http://journals.aps.org/pre/pdf/10.1103/PhysRevE.90.012811) (Physics Review 2014)  
9. [High Quality, Scalable and Parallel Community Detection for Large Real Graphs](http://delivery.acm.org/10.1145/2570000/2568010/p225-prat.pdf) (WWW 2014)  
4. [Fast Multi-Scale Detection of Relevant Communities in Large-Scale Networks](http://comjnl.oxfordjournals.org/content/early/2013/01/22/comjnl.bxt002.full.pdf+html)(The Computer Journal 2013)  
5. [Towards Linear Time Overlapping Community Detection in Social Networks](http://arxiv.org/pdf/1202.2465.pdf) (Advances in Knowledge Discovery and Data Mining 2012)  
6. [Benchmarks for testing community detection algorithms on directed and weighted graphs with overlapping communities](http://journals.aps.org/pre/pdf/10.1103/PhysRevE.80.016118) (Physics Review 2009)  
7. [Finding community structure in very large networks](http://journals.aps.org/pre/pdf/10.1103/PhysRevE.70.066111) (Physics Review 2004)  
8. [Dense Subgraph Extraction with Applicationto Community Detection](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=5677532) (TKDE 2012)  


