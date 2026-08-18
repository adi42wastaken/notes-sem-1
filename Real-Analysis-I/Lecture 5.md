---
Date: 2026-07-31
aliases:
tags:
  - Real-Analysis
  - denumerable

---
----

> [!note] Denumerable Set
> A set $S$ is said to be *denumerable* if there exists a bijection from $\Bbb{N}\rightarrow S.$

>[! Countable Set]
>A set is called *countable* if it is either finite or denumerable.

Some examples are finite sets, ${} \Bbb{N},2\Bbb{N},\Bbb{N}\times\Bbb{N},\cdots {}$

> [!abstract]- $\Bbb{N}\times\Bbb{N}$ is countable
> Consider
> $$ f:{\Bbb{N}\times\Bbb{N}}\rightarrow \Bbb{N}, f((n,m))\coloneqq 2^n\cdot 3^m 
> $$
> The range is a subset of $\Bbb{N}$ which is countable. $\square$
> Alternatively, consider, 
> $$h((m,n))=\psi(m+n-2)+m $$
> $$\psi(k)=1+2+\cdots +k $$
> Now we show that $h$ is one-one and onto. And we'd be done.

## Let $A\subseteq \Bbb{N}$ infinite. Then there exists a bijection between $\Bbb{N}$ and $A.$ ## 
> [!abstract] Proof Draft
> $A=\phi$ is trivial
> $A$ has a least element by #WOP , say, $a_1.$ Then define $a_2$ as the second-smallest element of $A.$ It exists because $a_2$ is the least element of $A-\{a_1\}.$ Like this we define the function $f:N\rightarrow A$ by $f(i)=a_i.$

---