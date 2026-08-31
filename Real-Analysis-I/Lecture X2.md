---
Date: 2026-08-19
aliases:
tags:
  - Real-Analysis
---
----

### Sequence
>[!note] A sequence is a function $f:\mathbb{N}\rightarrow\mathbb{R}$
>*Notation:* $$\{x_n\}_{n\geq 1}\mid n\mapsto x_n\in\mathbb{R}\mid \{x_1,x_2,\cdots\}$$
>Then few examples.

### Limit of a sequence
>[!note] Let $\{x_n\}$ be a sequence. Then $x\in\mathbb{R}$ is said to be the limit of $\{x_n\}$ if $\forall \varepsilon>0,\exists n_{\varepsilon}\geq 1$ such that $|x_n-x|<\varepsilon,\forall n\geq n_{\varepsilon}$
>A sequence is convergent if such a $x$ exists. 

>[! Note] Any convergent sequence is bounded
> easily comes from taking $\varepsilon=1$ and finite subset of $\mathbb{R}$ is bounded.


### Basic Algebraic Properties of Sequences
> Let $\{a_n\},\{b_n\},\{c_n\}$ be sequences converging to $a,b,c$ respectively.
> 1. $\{k a_n\}\rightarrow k\{a_n\},k\in\mathbb{R}$
> 2. $\{a_n+b_n\}\rightarrow \{a_n\}+\{b_n\}$ [use triangle inequality]
> 3. Let $\{c_n\}\coloneqq\{a_n b_n\}.$ Then, $\{c_n\}\rightarrow\{a_n\}\cdot\{b_n\}$
> 4. $\{b_n\}\neq 0,\forall n\in\mathbb{N}$ and $b\neq 0$ then $\{\frac{a_n}{b_n}\}\rightarrow\{\frac{a}{b}\}$
> 5. $a_n\leq b_n,\forall n\in\mathbb{N}.$  then $a\leq b.$

### Squeeze Theorem
>[! Note] Let $\{c_n\}$ be a sequence such that for all natural numbers $n,a_n\leq c_n\leq b_n$ and $a=b$ then $\{c_n\}\rightarrow a$

#### Corollary
> Let $\{a_n\}_{\geq1}, a_n>0$ is a sequence such that $\lim_{n\rightarrow\infty}\frac{a_{n+1}}{a_n}=L<1$ then $\{a_n\}$ is convergent

> [!abstract] Proof Sketch
----
