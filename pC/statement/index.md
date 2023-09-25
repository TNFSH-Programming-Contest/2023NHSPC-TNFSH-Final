# 老舊鍵盤 (keyboard)

方塊的鍵盤壞掉了！現在他的鍵盤只能鍵入數字 $1$，為了登入電腦，他必須要輸入一個**正整數**被 $N$ 整除。對於給定的 $N$，求出方塊最少需要按幾次 $1$ 才能登入電腦，或者說在給定 $N$ 的條件下，根本不可能成功。

換句話說，你需要找到最小的**正整數** $M$ 使得 $N$ 整除 $\overset{M}{\overbrace{11\cdots1}}$（即 $M$ 個連續的 $1$）。

## 輸入
第一行有一個正整數 $N$。

## 輸出
如果方塊能夠登入電腦，輸出最少按 $1$ 的次數 $M$，否則，輸出一行 `-1`。

## 輸入限制
 - $1 \leq N \leq 10^9$

## 子任務
\subtasks

\clearpage

## 範例輸入 1
\testfile{small-sample-01.in}

## 範例輸出 1
\testfile{small-sample-01.out}

## 範例輸入 2
\testfile{small-sample-02.in}

## 範例輸出 2
\testfile{small-sample-02.out}

## 範例輸入 3
\testfile{0-01.in}

## 範例輸出 3
\testfile{0-01.out}

## 範例輸入 4
\testfile{0-02.in}

## 範例輸出 4
\testfile{0-02.out}

## 範例說明

由於 $111111 = 15873 \times 7$，可以驗證 $1, 11, 111, 1111, 11111$ 皆不為 $7$ 的倍數，故當 $N = 7$ 時，$M = 6$。  
