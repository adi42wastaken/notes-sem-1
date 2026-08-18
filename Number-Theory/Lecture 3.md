---
Date: 2026-07-31
aliases:
  - primes
tags:
  - Number-Theory
  - FTOA
  - Euclidean-Algorithm
  - lcm
---
----

### 3.1 Euclidean Algorithm
> [! Statement] 
> For $a\geq b>0$, we can write $a=q_1b+r_1$ for $0\leq r_1 <b$ If it happens so that $r_1=0, (a,b=b).$ Otherwise we can continue this process finitely many times like 
> $$\begin{align} \\
> b&=q_{2}r_{1}+r_{2} \text{ such that } 0\leq r_{2}<r_{1}  \\
> r_{1}&=q_{3}r_{2}+r_{3} \text{ such that } 0\leq r_{3}<r_{2}  \\
> &\vdots \\
> r_{n-2}&=q_{n}r_{n-1}+r_{n} \text{ such that } 0\leq r_{n}<r_{n-1}  \\
> r_{n-1}&=q_{n+1}r_{n}+0
> \end{align}$$
> this so that $r_n=(a,b).$

>[! Abstract] Proof
> The proof directly comes from the fact that if $a=qb+r,$ then $(a,b)=(b,r).$ Which is easily provable.

> [!note] LCM
> Let $a,b\in \Bbb{Z}^+$, then the least common multiple of $a,b$ denoted by $[a,b]$ or lcm$(a,b)$ is the positive integer $m$ satisfying
> - $a\mid m,b\mid m$
> - If $a\mid c,b\mid c$ then $m\leq c.$

# 3.2 $(a,b)\cdot[a,b]=a\cdot b$
> [! Abstract]- Proof Sketch
> Let $m\coloneqq \frac{ab}{\gcd(a,b)}$ 
> Show $m$ is LCM by showing that $a,b\mid m$ and if $c$ does that too then $\frac{c}{m}\in\Bbb{Z}$
> (There is one more way: use DA on $m>n$ and find a contradiction (The assumption being there are smaller elements than $m$ and thus the least element $n$)!)

> **Corollary:** For a choice of $a,b\in\Bbb{Z}^+,$ $[a,b]=ab\iff (a,b)=1.$   

### 3.3 Prime Numbers
> [! Prime] 
> A positive integer $p>1$ is said to be a prime if it's only positive divisors are $1$ and $p$.

> [! Note] $p\mid ab\implies p\mid a$ or $p\mid b.$
> comes directly from [[Lecture 2#2.4 Euclid's Lemma | Euclid's lemma]]. This is sometimes also used as an alternate definition of primes.

> **Corollary:** The above can be generalized to:
> - $p\mid a_1\cdot a_2\cdots a_n\implies p\mid a_i$ for some $i.$
> - $p\mid p_1\cdot p_2\cdots p_n\implies p= p_i$ for some $i.$


# 3.4 Fundamental Theorem of Arithmetic
> [!note] Every positive integer $n>1$ can be expressed as a product of primes; this representation is unique, apart from the order in which the factors occur.

> [!abstract]- Proof Sketch
> Ignore trivial cases. $n$ has a divisor such that $1<d<n,$ let the smallest one be $p_1$ (show it's prime!) 
> Now write $n=p_1\cdot n_1$ Use similar argument for $n_1$ and write it as $p_2 \cdot n_2.$
> Repeat. As $n_1>n_2>\cdots >1$ is finite, we have written $n$ as product of primes.
> Uniqueness comes easily from the Corollary.

### 3.5 (Euclid) There is an infinite number of primes
###### Proof  is by finding contradiction in $N=p_1\cdot p_2\cdots p_n+1$ having no prime factor from $\{p_1,p_2,\cdots, p_n\}$ and [[#3.4 Fundamental Theorem of Arithmetic]].
----
