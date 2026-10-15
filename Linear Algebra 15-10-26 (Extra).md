## Previous Class
#### Rank Factorization
$A_{m\times n}$ has rank $r\iff A=P_{m\times r}Q_{r\times n}$ with rank of both $P,Q$ is $r$.
>[! Sylvester's Inequality]
>rank($A_{m\times n}B_{n\times p}$)=rank($A$)+rank($B$)-$n$

>[! Nullity and Rank Inequalities]
>>$n(AB)\leq n(A)+n(B)$
>
>
>Proof uses dim of preimage and it'the largest increase.
>$\Bbb{F}^p\to\Bbb{F}^n\to\Bbb{F}^m$ The matrix being $A,B$ respectively
>> $rank(A+B)\leq rank(A)+rank(B)$ with equality $\iff \mathcal{C}(A)\cap \mathcal{C}(B)=\{0\}=\mathcal{R}(A)\cap\mathcal{R}(B)$

## 12:00-1:00
> A linear operator $T:V\to V$ is called *idempotent* if $T^2=T$ i.e, $T(T(v))=T(v),\forall v\in V.$
> EXAMPLES:
> - $V=U\oplus W$ Then the operator $p:V\to V$ sending $v=u+w\mapsto u+0=u$ is idempotent as $p(p(v))=p(u)=u=p(v).$ This projection is called the projection to $U$ along $W$
> - All these projection maps are called projectors. ALSO, if dim of $V$ is finite and if we choose a basis $u_1,\cdots u_m$ and $w_1,\cdots w_n$ then the basis $\{u_1,\cdots u_m,v_1,\cdots v_n\}$ of $V$ the projection to $U$ (along $W$) has the matrix of the form $\pmatrix{ I_m & 0\\ 0 & 0 }$ block matrix. And the projection to $W$ along $U$ has the matrix similar to that but $I_n$ at bottom right instead.

>[! Proposition]
> Every idempotent operator $T$ on $V$ is a projector: more precisely, let $U=image(T), K=kernal(T).$ Then $V=U\oplus W$ and $T$ sends $u+w\mapsto u,\forall u\in U, w\in K$


>[! Abstract] Proof
> Pick $u\in U$ so $u=T(v)$ for some $v\in V$
> Therefore $T(u)=T(T(v))=T(v)=u (\because \text{ T idempotent})$ i.e, $T(u)=u,\forall u\in U$
> Now we see $U\cap K=\{0\}:v\in U\cap K\implies v=T(v)=0$
> And finally for any $v$ as $v=T(v)+v-T(v)$ which would imply $V=U+W.$
>> For $u\in U, w\in K, T(u+w)=u \boxed{}.$

>[! Question]
> Suppose $T:V\to V$ is an operator satisfying $T^2=I$ That is, $T(T(v))=v,\forall v\in V.$ Consider the subspace $V_+\coloneqq\{v\in V\mid T(v)=v\}$ and $V_-\coloneqq\{v\in V\mid T(v)=-v\}$ This shows that $V=V_+\oplus V_-$ If dimension is finite, then there exist a basis in which it has matrix of the form $\pmatrix{I&0\\ 0 &-I}$
>> Solution:
>> 

---
## 2:00-3:00

For now let $\Bbb{F}=\Bbb{R}.$
Let $v,w$ be vectors($n\times 1$)
>[! ] **dot product**
> - $v\cdot w=\sum a_ib_i=v^Tw=w^Tv$
> - Note $v\cdot w=w\cdot v$ and $v\cdot v\geq 0$  with equality $\iff v=0.$
> - Denote $||v||\coloneqq \sqrt{v\cdot v}$ the *norm/length* of vector $v$
> - We say $v\perp w\iff v\cdot w=0$

For a subset $S=\{v\}_{i\in I}\subseteq \Bbb{R}^n$ we define $S^{\perp}\coloneqq\{w\in \Bbb{R}^n\mid w\cdot v_i=0, \forall i\}.$ Then $S$ may or may not be a subspace but $S^{\perp}$ def is.
$$S_1\subseteq S_2\implies S_1^{\perp}\supseteq S_2^{\perp}$$

EXERCISE: $v_1,\cdots, v_n$ are all pairwise orthogonal $\implies$ they are linearly independent.

>[! Proposition]
>Also, if $U=Span(S)$ then $U^{\perp}=S^\perp$ 
>(Proof sketch: $w\cdot v_i=0\forall i\iff w\cdot\sum c_i v_i=0=\sum c_i(w\cdot v_i)$ for all $c_i$)
>
In summary, if $U\subseteq \Bbb{R}^n$ is a subset then $U^\perp$ can be calculated by looking at elements that are orthogonal to a spanning set of $U.$
>> For an $m\times n$ matrix $A$ over $\Bbb{R},$ we see that $\mathcal{R(A)}^\perp=nullspace(A)$ (As a subspace of $\Bbb{R}^n$) i.e, $Av=0\iff v\perp\text{ every element in the row space of }A$

>[! Abstract] It now follows that if $U\subseteq\Bbb{R}^n$ is a subspace of dimension $r$ then $dim(U^\perp)=n-r:$
>Pick a basis/spanning set ${} u_1,\cdots u_r {}$ of $U$ and write them as rows of a $r\times m$ matrix $A.$ Then $U^\perp=$ null space of $A$ has dimension $n-1$.

> Also, $U\cap U^\perp=\{0\}$ as if not then $\exists u$ such that $u\cdot u=0\implies u=0.$ So it follows that ${} dim(U)+dim(U^\perp)-dim(U\cap U^\perp)=r+(n-r)-0=n {}$ Which means $\Bbb{R}^n=U\oplus U^\perp$ (Also called orthogonal decomposition of $\mathbb{R}^n.$ In this case the projection is called an orthogonal projection of ${} \Bbb{R}^n {}$)
> 
> **EXERCISE:** $(U^\perp)^\perp=U$

>[! Proposition]
> Let $A$ be an ${} m\times n$ matrix over $\Bbb{R}.$ Then the null space of $A^tA$ is the same as the null space of $A$(as subspaces of $\Bbb{R}^n$) Then we have the following:
> - rank($A$)=rank(${} A^t {}$)=rank($A^tA$)=rank($AA^t$)
> - $\mathcal{C}(AA^t)=\mathcal{C}(A)$ while $\mathcal{R}(A^tA)=\mathcal{R}(A)$

>[! Abstract] Proof:
>Clearly the null space of $A$ is inside null space of $A^tA.$
>Suppose(for ${} w\in \Bbb{R}^n {}$) $A^tA w=0\implies w^tA^tAw=0\therefore (Aw)^tAw=0$ that is, $(Aw)\cdot(Aw)=0\implies Aw=0\implies$ null space of $A^tA\subseteq$ null space of $A$
>So they are equal.
>> Use rank nullity to derive 1st point.
>
>> For second point, note $\mathcal{C}(AA^t)\subseteq\mathcal{C}(A)$ (more generally $\mathcal{C}(A_{m\times n}X_{n\times p})\subseteq\mathcal{C}(A)$) But those two column space have same rank(same dimension) and thus equal. Similar argument for row space.

#### From now on, $\Bbb{F}=\Bbb{C}.$
For $$z=\pmatrix{a_1\\a_2\\\vdots\\a_n},w=\pmatrix{b_1\\b_2\\\vdots\\b_n}\in \Bbb{C}^n$$
We define $<a,w>\coloneqq\sum a_i\bar{b_i}$ (known as Hermition product of two vectors) 
Then $<w,z>=\overline{<z,w>}=<\bar{w},\bar{z}>$ Also $<w,w>\geq 0$ with equality $\iff w=0.$
One can then define orthogonality as on $\Bbb{R}$ and orthogonal complements as for $\Bbb{R}^n$

>[! ] For any $m\times n$ matrix $A$ over $\Bbb{C}$ we define $A^*\coloneqq (\overline{A})^t=\overline{(A^t)}$
- Similar properties of transpose apply.
- Thus, $<z,w>=w^*z$

>[! Proposition]
> Let $A$ be an $m\times n$ matrix over ${} \Bbb{C}. {}$ Then the null space of $A^*A$ is the same as the null space of $A$(as subspaces of ${} \Bbb{C}^n {}$) Then we have the following:
> - rank($A$)=rank($A^*$)=rank($A^*A$)=rank($AA^*$)
> - $\mathcal{C}(AA^*)=\mathcal{C}(A)$ while $\mathcal{R}(A^*A)=\mathcal{R}(A)$
> Ditto same arguments.