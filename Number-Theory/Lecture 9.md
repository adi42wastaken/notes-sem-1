---
Date: 2026-08-00
aliases:
tags:
  - Number-Theory
---
----
### 9.1
>[!abstract] $\phi(m\cdot n)=\phi(m)\cdot\phi(n)$ where $(m,n)=1.$ Proof by showing bijection of $\phi:(\mathbb{Z}/mn\mathbb{Z})^{\times}\rightarrow(\mathbb{Z}/m\mathbb{Z})^{\times}\times(\mathbb{Z}/n\mathbb{Z})^{\times}$ 
> Show that $\mathbb{Z}/mn\mathbb{Z}\mapsto(a+m\mathbb{Z},a+n\mathbb{Z})$ 
>* is well-defined
>* is an injection
>* is a surjection (by CRT)

> [!note] Order
> Let $G$ be a finite Abelian group and $x\in G. {}$ Look at $x^1,x^2,x^3,\cdots$
> They cannot be all distinct which implies, $\exists 1\leq i < j$ such that $x^i=x^j\implies 1=x^{j-i}$ 
> Thus, $\exists r\geq 1$ such that $x^r=1\in G.$ The smallest such $r$ is called order of $x$ in $G,$ or, $ord_{G}(x)\coloneqq r$

### 9.2 Subgroups
> [!abstract] Examples($G$ is a group and $H$ is a subgroup; $G<H$)
> * $G=(\mathbb{R}^{\times},\cdot)<H\in\{(\mathbb{Q^{\times},\cdot}),(1,\cdot),\{2^n\mid n\in\mathbb{Z}\}\}$
> * $G=(\mathbb{R}^{\times},\cdot)<H\in\{\Pi=\{z\mid |z|=1\},\{1,\omega,\omega^2\},\{z^n\mid n\in\mathbb{Z}\}(\text{This can be finite or infinite depending on rationality of }\alpha\text{ in } z=e^{2i\pi\alpha})\}$
> * $\mathbb{Z}=\bar{0}\sqcup\bar{1}\sqcup\cdots\sqcup\overline{m-1}$

>[! Abstract] Right cosets
> Let $G<H,x\in G$. $Hx\coloneqq\{h\cdot x\mid h\in H\}$ is called a right coset of $H.$

>[!h] If $z\in Hx\cap Hy$ then $Hx=Hy$
> We know $z=h_1x=h_2 y\implies Hz=\{hz=hh_1x\mid h\in H\}=Hx$ Similarly for $Hy.$
> Thus, for $G$ finite and ${} H<G {}$, $Hy_1,Hy_2,\cdots$ is finite. This means $\exists x_1,x_2,\cdots,x_m$ such that $$G=\sqcup Hx_j$$ 

### 9.3 Lagrange's Theorem
>[!note] If $G$ is a finite group with $H<G,$ then $|H|\mid|G|$
>$Proof:$ 
>Claim: $|G|=\sum_{j=1}^{m}|Hx_j|$ 
>It's enough to show that $|Hx_j|=|Hx|$ We do this by showing a bijection between them. Use this function $\psi:H\rightarrow Hx$ where $\psi(h)=hx.\boxed{}$

> Example: If $G$ is a finite abelian group, $x\in G.$ Then, $H=\{x^n\mid n\in\mathbb{Z}\}$

### 9.4 Cyclic group and generators
>[! Abstract] We say a group $G$ is cyclic if $\exists x\in G$ such that $<x>=G.$ $x$ is called the generator of $G$

----
