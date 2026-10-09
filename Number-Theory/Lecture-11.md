---
Date: 2026-08-00
aliases:
tags:
  - Number-Theory
---
----
### 11.1
> 2. Let $G=(\mathbb{Z}/18\mathbb{Z})^{\times}=\{\bar{1},\bar{5},\bar{7},\bar{11},\bar{13},\bar{17}\}$
> $|G|=6.$

### 11.2 Primitive root
> [!Note]
> 1. An integer $m>1$ is said to havee primitive roots (PR) if ${} (\mathbb{Z}/m\mathbb{Z})^{\times} {}$ is cyclic.
> (eg) 12 has no PR while 18 has.)
> 2. If $m>1$ has PR, then an integer $r$ is said to be a primitive root for $m$  if$(\mathbb{Z}/m\mathbb{Z})^{\times}=<\bar{r}>$
> 3. In other words
> - $r$ has order $\phi(m)\pmod m$
> - $\phi(m)$ is the smallest positive integer such that $r^{\phi(m)}\equiv 1\pmod m$

>[! Proposition:]
>Let $m,n>2$ be integers such that $(m,n)=1.$Then $N=mn$ has no primitive root.

>[! Abstract] Proof
> We need to show that for any $a,(a,mn)=1,\exists l$ such that $1\leq l<\phi(mn)$ such that $a^{l}=1\pmod {mn}$
> Consider $l\coloneqq [\phi(m),\phi(n)]$ 
> * $a^l\equiv1\pmod m,\pmod n\implies a^l\equiv 1\pmod{mn}$ [by Euler-Fermat and a corollary]
> * $l=\frac{\phi(m)\phi(m)}{(\phi(m),\phi(n))}<\frac{\phi(m)\phi(m)}{2}<\phi(m)\phi(m)=\phi(mn)\boxed{}$

> This means only $N$ with primitive roots are in ${} \mathcal{P}=\{2^k,2p^k,p^k\}. {}$

> [!note] For odd $a, a^{2^{k-1}}\equiv 1 \pmod{2^k}$
> * Induction
> * $a^{2^{k-2}}=1+2^kx$
> * square and show true for $k+1.$

> Thus, $\mathcal{P}=\{2,4,p^k,2p^k\}.$ In fact, for $N=2,4$ the primitive roots are $\bar{1},\bar{3}$ respectively.
> 
###  11.3 Division algorithm for polynomial
> [!note] Let $F$ be  a field and $f(x),g(x)\neq 0\in F[x]$ then $\exists ! q(x),r(x)\in F[x]$ such that $$f(x)=g(x)q(x)+r(x), r(x)=0 \text{ or } 1\leq\partial(r(x))<\partial(g(x)).$$

> [!abstract]- Proof Sketch
> * Consider $S=\{f(x)-g(x)h(x)\mid h(x)\in F[x]\}$
> * If $0\in S$ we are done
> * Other, let $r(x)$ be the element with the smallest degree.
> * Then show $\partial(r(x))<\partial(g(x))$ by assuming that's not true. (Say degree of $r$ is $m$ and degree of $g$ is $n$) then consider $r_l(x)=r(x)-a_mb_n^{-1}x^{m-n}g(x)$
> * Show that $r_l(x)\in S$ and $\partial (r_l(x))<\partial(r(x))$ which contradicts $r(x)$ having the smallest degree.
> * Show uniqueness by assuming otherwise and then $(r'-r)(x)=g(x)(q'-q)(x)\implies \partial(g)\mid \partial(r'-r)$ which isn't possible unless $r'=r$

### 11.4 Let $F$ be a field and $f\in F[x]$ be a polynomial of degree more than 0. Then $f$ has at most $\partial (f)$ roots.
> Use induction of degree.

$\forall n\in\mathbb Z^+,b\in\mathbb Z^+|\gcd(n,b)=1:\exists f\in\mathbb Z^+|\log_b(nf+1)\in\mathbb Z^+$

----
