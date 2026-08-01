---
Date: 2026-07-21
aliases:
tags:
  - Number-Theory
  - WOP
  - PMI
  - archimedean
---
----

>[!info]
>We define $\Bbb{N}=\{0,1,2,\cdots\}.$ Everything else is same.
# Axiom
> [! 1.1 Well Ordering Principle]
> Any non-empty subset of $\Bbb{Z}^+(\text{or } \Bbb{N})$ has a smallest element.
> ^wop
### 1.2 Archimedean Property of $\Bbb{Z}^+$
>[!note] Given $a,b\in\Bbb{Z}^+,\exists n\in\Bbb{Z}^+$ such that $na>b.$

> [!abstract]- Proof Draft
> FSOC, assume there exists $a,b\in\Bbb{Z}$ such that $\forall n\in\Bbb{Z}, na\leq b.$
> Consider the set $S\coloneqq \{b-na\mid n\in\Bbb{Z}^+\}\neq\phi$
> Use [[#Axiom|A.P.]] to find the least element. 
> Get the contradiction.


### 1.3 Principle of Mathematical Induction

> [!note]
>  If $S$ is a non empty subset of $\Bbb{Z}^+$ such that 
> - $1\in S$
> - If $k\in S$ then $k+1\in S$
> Then $S=\Bbb{Z}^+.$

> [!abstract]- Proof Draft
>Let $S^c\coloneqq \{x\mid x\notin S\}\neq \phi$ 
>Say it has the smallest element, $k\neq 1$ then $k-1\in S \implies (k-1)+1=k\in S \implies\!\!\impliedby$ 

Proved of binominal theorem.
> *Stronger form of Mathematical Induction.*
> If $S$ is a non-empty subset of $\Bbb{Z}^+$ such that 
> - If $1,2,3,\cdots,k\in S$
> - Then $k+1\in S$
> Then $S=\Bbb{Z}^+.$
----
