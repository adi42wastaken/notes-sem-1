---
Date: 2026-08-00
aliases:
tags:
  - Number-Theory
---
----

# Lecture 6 was class test
----

### 7.1 Residue Systems
>[!note] Complete Residue System
>Let $m>1$ be an integer. A complete residue system is a set $\{r_1,\cdots r_m\}\subset \mathbb{Z}$ such that $\{\bar{r_1},\bar{r_2},\cdots\bar{r_m}\}=\mathbb{Z}/m\mathbb{Z}.$ That is, a set $\{r_1,\cdots r_m\}$
>* $r_i\equiv r_j\pmod m\iff i=j$ 
>* $\forall x\in\mathbb{Z},\exists !$ such that $x\equiv r_i\pmod m$

>[!note] Reduced Residue System
> A reduced residue system is a set $\{r_1,\cdots r_{\phi(m)}\}\subset \mathbb{Z}$ such that $\{\bar{r_1},\bar{r_2},\cdots\bar{r_m}\}=(\mathbb{Z}/m\mathbb{Z})^{\times}.$

>[!note] 
>  $\{r_1,\cdots r_{\phi(m)}\}\subset \mathbb{Z}$ is an RRS iff 
>  * $r_i\equiv r_j\pmod m \iff i= j$
>  * $\gcd(r_i,m)=1, i=1,2,\cdots \phi(m)$


> [!question] 
> * Find all $m$ such that $\{1,3,5,7\}$ is an RRS
> * For a prime $p,$ $\{1\leq p-1\}$ is always an RRS $\pmod p$

### 7.2 Proposition
>[!note] 
>Let $m>1$ be an integer and $\{r_1,\cdots r_m\}$ be a CRS
 mod $m$. Then can integer $a$ coprime with $m,$ ${} \{ar_1,\cdots ar_m\} {}$  is also a CRS mod $m$

>[!abstract]- Proof Draft
>* No two are congruent (by contradiction).
>* Done in problem set
>(similar will hold for RRS)

### 7.3 Corollary
>[! 1. Fermat's Little Theorem]
> If $p$ is a prime and $(a,p)=1$ then $a^{p-1}\equiv 1\pmod p$
> > *Proof. *  $\{1,\cdots p-1\}$ is an RRS mod $p$ and so is $a\cdot\{1,\cdots p-1\}.$ In other words they are same mod $p$ so the product of all will be equivalent. Thus, $(p-1)!\equiv a^{p-1}(p-1)!\pmod m \boxed{}$


>[! 2. Euler-Fermat]
> If $\gcd(a,m)=1,$ where $m>1$ then $a^{\phi(m)}\equiv 1\pmod m.$
>>Proof is very similar to the previous one

### 7.4 Properties of number theoretic functions
>[!note] $\phi$
>For any prime $p:$
>1. $\phi(p^e)=p^e-p^{e-1}$
>2. $\phi$ is multiplicative. If $(m,n)=1$ then $\phi(m\cdot n)=\phi(m)\cdot\phi(n)$
>3. $\phi(n)=n\prod_{p\mid n}(1-\frac{1}{p})$
>4. $\sum_{d\mid n}\phi(d)=n$

>[!abstract] Proof draft
>1. counting argument.
>2. Matrix argument. (each row has $\phi(m)$ coprime to $m$ elements and $\phi(n)$ in each column).
>3. Combination of those two with FTA
>4. Consider $S=\{\frac{1}{n},\cdots \frac{n}{n}\}$ and $A_d=\{\frac{a}{d}\mid 1\leq a\leq d, (a,d)=1\}$ $|S|=n,|A_d|=\phi(d),\forall d.$
>Now note that either is subset of the other($\cup A_{d_i}$) and all $A_{d_i}$ disjoint union. Thus, sum of all elements is same.

### 7.5 Chinese Remainder Theorem
>[!note] CRT
>Let $m_1,m_2,\cdots m_k$ be positive integers which are pairwise coprime. Let $a_1,a_2,\cdots a_k$ be arbitrary integers. Then the system of congruences
>$$
>\begin{align}
>x&\equiv a_1\pmod{m_1}\\
>x&\equiv a_2\pmod{m_2}\\
>&\vdots \\
>x&\equiv a_k\pmod{m_k}\\
>\end{align}
>$$
>has a solution. Any two solutions are congruent to the product $m=m_1\cdots m_k$

>[!abstract] Proof(s) draft
>1.
>Let $n_j=\frac{m}{m_j}$
> $$x=a_1n^{\phi(m_1)}+a_2n^{\phi(m_2)}+\cdots a_kn^{\phi(m_k)}$$
> 2.
> Same set up but no need to raise $n$ by $\phi(m_i)$ Just take a number $b_i$ such that $b_i n_i\equiv 1\pmod {m_i}.$ Then look at $$x=a_1b_1n_1+\cdots a_kb_kn_k.$$
> 3. Then show uniquness upto $\pmod{m}$

>[!question] Are there infinitly many primes of the form $x^2+y^4?$ of the form $p(x)?$
>---
# Lecture 8 was cancelled.
 ---
