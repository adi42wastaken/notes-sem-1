---
Date: 2026-07-31
aliases:
tags:
  - Number-Theory
---
---
### 2.1 Division Algorithm
> [!note] Statement
> If $a,b\in\Bbb{Z}$ with $b>0$ then  $\exists ! q,r\in\Bbb{Z}$ such that $a=bq+r$ with $0\leq r<b.$

> [!abstract]- Proof Draft
> - If $a=0,$ it's trivial.
> - If $a\neq  0,$ consider $S=\{a-bq\mid q\in\Bbb{Z}\}$
> - Apply #WOP 
> - Bound $r$
> - Show uniqueness
### 2.2 Bezout's lemma
>[! Statement]
> For $\forall a,b\in\Bbb{Z},\exists u,v\in\Bbb{Z}$ such that $\gcd(a,b)=au+bv.$

> [!abstract]- Proof Draft
> Consider the non-empty $\phi\neq S\coloneqq\{ax+by|a,b\in \Bbb{Z^+}\}\cap\Bbb{Z^+}.$ We claim that the smallest element is $gcd(a,b)$
> First show $d\mid a,d\mid b$
> Show that if $a=dq+r$ (division algorithm) for some $q,r$ then $r=0.$
> Show if $g\mid a,g\mid b$ then $g\leq d.$ 

#### 2.3 Corollary
- $\gcd(a,b)=1\iff\exists u,v\in\Bbb{Z^+}$ such that $au+bv=1.$
- $\gcd(a,b)=d\implies\gcd(\frac{a}{d},\frac{b}{d})=1$
- $a,b,c\in\Bbb{Z}$ such that they are both non-zero and co-prime. If $a\mid c,b\mid c$ then $ab\mid c$

### 2.4 Euclid's Lemma
>[! Statement]
>If $\gcd(a,b)=1$ and $a\mid bc$ then $a\mid c.$

> [!abstract]- Proof
> From the statements we know $\exists x$ such that $bc=ax$.
> And that $\exists u,v \in\Bbb{Z}$ such that $$au+bv=1,$$
> We get $$acu+bcv=c$$ $$a(cu+xv)=c$$ $$\implies a\mid c \text{           }\square$$ 
---