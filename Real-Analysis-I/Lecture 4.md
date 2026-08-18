---
Date: 2026-08-3
aliases:
tags:
  - Real_Analysis
---

> [!note] Finite set
> A set is said to be *finite* if $\exists$ a bijection from $f:S\rightarrow\Bbb{N}_n$ where $\Bbb{N}_n=\{1,2,\cdots n\}$ for some $x\in\Bbb{N}.$

> [!info]
> $S=\phi$ is finite and it has 0 elements.

> [!note] Infinite set
> A set is said to be *infinite* if there doesn't exist a bijection from $S\rightarrow \Bbb{N}_n,\forall n\in\Bbb{N}.$

> [!abstract]- Superset of an infinite set is an infinite set.
> >Suppose $S\subseteq T$ and $S$ is infinite. Then, $T$ is also infinite.
> 
> Prove the contrapositive.

> [!abstract]- A set $S$ is infinite $\iff\exists A\subsetneq S$ which is also infinite
> > $(\implies)$ FSOC, assume $S$ is infinite, but no proper subset is infinite, i.e, all proper subsets are finite. In particular, $S-\{s_1\}$ is finite. This would give that $S$ is finite, a contradiction.
> 
> > $(\impliedby)$ This comes from our previous result. $\boxed{}$

> [!abstract]- A set $S$ is infinite $\iff\exists$ an injection from $\Bbb{N}\rightarrow S$
> > $(\implies)$ Consider the function $f:\Bbb{N}\rightarrow S$ defined by $f(1)=s_1$ for some $s_1\in S.$ $f(2)=s_2$ for some $s_2\in S-\{s_1\}.$ Similarly, $f(k)=s_k$ for some $s_k\in S-\{s_1,\cdots,s_{k-1}\}.$ Note that $f$ is an injection.
> 
> > $(\impliedby)$ If there is an injection from $\Bbb{N}\rightarrow S$, say $f,$ then $\{f(1),f(2),\cdots \}\subseteq S.$ As subset is infinite, $S$ has to be.

> [! Abstract]- $S$ is infinite $\iff$ there exists a bijection from $S\rightarrow S'\subsetneq S$
> > $(\impliedby)$ Assume not true and find the contradiction.
> 
> > $(\implies)$ Firstly there is an injection $g:\Bbb{N}\rightarrow S.$ Say $g(\Bbb{N})=\{a_1,a_2,\cdots\}.$ Write $S'=S-\{a_1\}$ define the function $f:S\rightarrow S'$
> >  $$
> >  f(x)=
> >  \begin{cases} a_{n+1}, \text{if $x=a_n$ for some $n\in\Bbb{N}$}\\
> >  x, \text{ if $x\in S-A$} \end{cases}
> >  $$
> >  Show that $f$ is a bijection and we are done.