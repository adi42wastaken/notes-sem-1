---
Date: 2026-08-07
aliases:
tags:
  - Number-Theory
---
----

### 4.1 Prime Counting
> [! Note] $$\pi(x)=\#\{p\leq x\mid p \text{ is a prime}\}$$
> 
>|x      | 1 | 2 | 3 | 4 | 10 | 100 | $10^{2026}$ |   
| ---   | --- | --- | --- | --- | --- |---| --- |
|$\pi(x)$| 0 | 1 | 2 | 2| 4| 25|${} \frac{10^{2026}}{\log(10^{2026})}$|

# 4.2 (Gauss) Prime Number Theorem

 $$\boxed{\lim_{x\rightarrow\infty}\frac{\pi(x)\log(x)}{x}=1}$$
 
> PNT lore drop.


# 4.3 $\pi(x)\geq \log(\log(x))$

> [!abstract] Proof Sketch
> - Show that $p_{n}<2^{2^{n-1}},n\geq 2.$ (induction)
> - Let $X\in\Bbb{R}$ be very large such that $e^{e^{n-1}}<X\leq e^{e^{n}}$ which gives $$n-1<\log(\log(X))\leq n$$
> - $$\pi(X)\geq \pi(e^{e^{n-1}})\geq \pi(e^{2^{n-1}})\geq \pi(2^{2^{n-1}})>\pi(p_n)=n\geq \log(\log(X))$$
> using the fact that $\pi(x)$ is non-decreasing. $\boxed{}$
> 
> To see how bad this bound is compared to [[#4.3 $ pi(x) geq log( log(x))$| PMT]] take a look at [this desmos graphs](https://www.desmos.com/calculator/3rlmmr0tfl).

### 4.4 Infinite primes of certain form.


>[!abstract] $\infty$ primes of the form $4k+3$
> * Suppose finite ($p_1,p_2,\cdots ,p_n$)
> * $N=p_1\cdots p_n +3$
> * Either $N$ is a prime **or** has all factors of the form $4k+1$ **or** one factor is from those $p_i.$ 

>[!abstract] $\infty$ primes of the form $4k+1$
> * Suppose finite
> * $N=(n!)^2+1$
> * Ultimately you get $n!^2\equiv -1\pmod p\implies 1\equiv (-1)^{\frac{p-1}{2}}\implies p=4k+1$

### 4.5 Congruences  
>[!note]
>Say $m\in\mathbb{Z}^+$ $$m\mid x-y\iff x\equiv y\pmod m$$
>This($\equiv$) is an equivalence relation(on $\mathbb{Z}$) with $m$ classes

> Then we did some basic properties.
----