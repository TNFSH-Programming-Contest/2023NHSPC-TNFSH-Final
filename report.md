
## Progress
<!-- progress start -->

- cover.tex [:white_check_mark:](cover.tex)
- appendix.tex [:x:](appendix.tex)

| | A | B | C | D | E |
| --- | --- | --- | --- | --- | --- |
| contest_name |  [:white_check_mark:](pA/problem.json) | [:white_check_mark:](pB/problem.json) | [:white_check_mark:](pC/problem.json) | [:white_check_mark:](pD/problem.json) | [:white_check_mark:](pE/problem.json) |
| problem_label |  [:white_check_mark:](pA/problem.json) | [:white_check_mark:](pB/problem.json) | [:white_check_mark:](pC/problem.json) | [:white_check_mark:](pD/problem.json) | [:white_check_mark:](pE/problem.json) |
| name |  [:white_check_mark:](pA/problem.json)<br>connection | [:x:](pB/problem.json) | [:white_check_mark:](pC/problem.json)<br>keyboard | [:white_check_mark:](pD/problem.json)<br>pathway | [:white_check_mark:](pE/problem.json)<br>religion |
| title |  [:white_check_mark:](pA/problem.json)<br>網路連線 | [:x:](pB/problem.json) | [:white_check_mark:](pC/problem.json)<br>老舊鍵盤 | [:white_check_mark:](pD/problem.json)<br>森林道路 | [:white_check_mark:](pE/problem.json)<br>宗教戰爭 |
| memory_limit |  256 | 512 | 256 | 512 | 256 |
| time_limit |  2.0 | 1.0 | 0.5 | 0.25 | 1.0 |
| has_checker |  False | False | False | True | False |
| gen | [:x:](pA/gen)<br>[jngen.h](pA/gen/jngen.h) | [:x:](pB/gen)<br>[data](pB/gen/data)<br>[gen.cpp](pB/gen/gen.cpp) | [:white_check_mark:](pC/gen) | [:white_check_mark:](pD/gen) | [:white_check_mark:](pE/gen) |
| solution | [:white_check_mark:](pA/solution) | [:x:](pB/solution)<br>[correct.cpp](pB/solution/correct.cpp) | [:white_check_mark:](pC/solution) | [:white_check_mark:](pD/solution) | [:white_check_mark:](pE/solution) |
| validator | [:white_check_mark:](pA/validator) | [:x:](pB/validator)<br>[validator.cpp](pB/validator/validator.cpp) | [:white_check_mark:](pC/validator) | [:white_check_mark:](pD/validator) | [:white_check_mark:](pE/validator) |
| subtasks.json<br>global_validators |  [:white_check_mark:](pA/subtasks.json) | [:white_check_mark:](pB/subtasks.json) | [:white_check_mark:](pC/subtasks.json) | [:white_check_mark:](pD/subtasks.json) | [:white_check_mark:](pE/subtasks.json) |
| tests | [:white_check_mark:](pA/tests) | [:x:](pB/tests)<br>[Auto build disabled](pB/gen/DISABLE_AUTO_BUILD) | [:white_check_mark:](pC/tests) | [:x:](pD/tests) | [:white_check_mark:](pE/tests) |
| statement/index.md | [:white_check_mark:](pA/statement/index.md) | [:x:](pB/statement/index.md) | [:white_check_mark:](pC/statement/index.md) | [:white_check_mark:](pD/statement/index.md) | [:white_check_mark:](pE/statement/index.md) |
| statement/index.pdf | [:white_check_mark:](pA/statement/index.pdf) | [:x:](pB/statement/index.pdf)<br>[Auto build disabled](pB/statement/DISABLE_AUTO_BUILD) | [:white_check_mark:](pC/statement/index.pdf) | [:white_check_mark:](pD/statement/index.pdf) | [:white_check_mark:](pE/statement/index.pdf) |

<!-- progress end -->

## Subtasks
<!-- subtasks start -->

| | 1 | 2 | 3 | 4 |
| --- | --- | --- | --- | --- |
| A | 17<br>$k = 1$ | 23<br>$N \leq 20$ | 43<br>$N \leq 160$ | 17<br>無額外限制 |
| B | 100<br>無額外限制 |
| C | 7<br>$N \leq 10$ | 28<br>$N \leq 2 \times 10^5$ | 65<br>無額外限制 |
| D | 15<br>$a_{i, j} \in \{-1, 1\}$，至少有一個 $a_{i, j} = 1$ | 23<br>$N \times M \leq 50$ | 27<br>$N \times M \leq 5000$ | 35<br>無額外限制 |
| E | 35<br>$|s| = |t| = 1$ | 65<br>無額外限制 |

<!-- subtasks end -->

## Scores
<!-- scores start -->

| score | count | groups |
| --- | --- | --- |
| 17 | 2 | (A1) (A4) |
| 23 | 2 | (A2) (D2) |
| 24 | 2 | (A1, C1) (A4, C1) |
| 30 | 2 | (A2, C1) (C1, D2) |
| 32 | 2 | (A1, D1) (A4, D1) |
| 34 | 2 | (A1, A4) (C1, D3) |
| 35 | 3 | (C1, C2) (D4) (E1) |
| 38 | 2 | (A2, D1) (D1, D2) |
| 39 | 2 | (A1, C1, D1) (A4, C1, D1) |
| 40 | 4 | (A1, A2) (A2, A4) (A1, D2) (A4, D2) |
| 42 | 3 | (D1, D3) (C1, D4) (C1, E1) |
| 43 | 2 | (C2, D1) (A3) |
| 44 | 2 | (A1, D3) (A4, D3) |
| 45 | 4 | (A2, C1, D1) (C1, D1, D2) (A1, C2) (A4, C2) |
| 47 | 4 | (A1, A2, C1) (A2, A4, C1) (A1, C1, D2) (A4, C1, D2) |
| 49 | 2 | (A1, A4, D1) (C1, D1, D3) |
| 50 | 6 | (A2, D3) (D2, D3) (C1, C2, D1) (D1, D4) (D1, E1) (A3, C1) |
| 51 | 4 | (A1, C1, D3) (A4, C1, D3) (A2, C2) (C2, D2) |
| 52 | 6 | (A1, C1, C2) (A4, C1, C2) (A1, D4) (A4, D4) (A1, E1) (A4, E1) |
| 55 | 5 | (A1, A2, D1) (A2, A4, D1) (A1, D1, D2) (A4, D1, D2) (C2, D3) |
| 57 | 6 | (A1, A2, A4) (A1, A4, D2) (A2, C1, D3) (C1, D2, D3) (C1, D1, D4) (C1, D1, E1) |
| 58 | 7 | (A2, C1, C2) (C1, C2, D2) (A2, D4) (D2, D4) (A2, E1) (D2, E1) (A3, D1) |
| 59 | 6 | (A1, D1, D3) (A4, D1, D3) (A1, C1, D4) (A4, C1, D4) (A1, C1, E1) (A4, C1, E1) |
| 60 | 4 | (A1, C2, D1) (A4, C2, D1) (A1, A3) (A3, A4) |
| 61 | 2 | (A2, D1, D2) (A1, A4, D3) |
| 62 | 4 | (A1, A4, C2) (C1, C2, D3) (D3, D4) (D3, E1) |
| 63 | 4 | (A1, A2, D2) (A2, A4, D2) (C2, D4) (C2, E1) |
| 65 | 9 | (A2, D1, D3) (D1, D2, D3) (A2, C1, D4) (C1, D2, D4) (A2, C1, E1) (C1, D2, E1) (A3, C1, D1) (C3) (E2) |
| 66 | 4 | (A2, C2, D1) (C2, D1, D2) (A2, A3) (A3, D2) |
| 67 | 10 | (A1, A2, D3) (A2, A4, D3) (A1, D2, D3) (A4, D2, D3) (A1, D1, D4) (A4, D1, D4) (A1, D1, E1) (A4, D1, E1) (A1, A3, C1) (A3, A4, C1) |
| 68 | 4 | (A1, A2, C2) (A2, A4, C2) (A1, C2, D2) (A4, C2, D2) |
| 69 | 4 | (A1, A4, D4) (C1, D3, D4) (A1, A4, E1) (C1, D3, E1) |
| 70 | 5 | (C2, D1, D3) (C1, C2, D4) (C1, C2, E1) (D4, E1) (A3, D3) |
| 72 | 4 | (A1, C2, D3) (A4, C2, D3) (C1, C3) (C1, E2) |
| 73 | 7 | (A2, D2, D3) (A2, D1, D4) (D1, D2, D4) (A2, D1, E1) (D1, D2, E1) (A2, A3, C1) (A3, C1, D2) |
| 75 | 10 | (A1, A2, D4) (A2, A4, D4) (A1, D2, D4) (A4, D2, D4) (A1, A2, E1) (A2, A4, E1) (A1, D2, E1) (A4, D2, E1) (A1, A3, D1) (A3, A4, D1) |
| 77 | 5 | (D1, D3, D4) (D1, D3, E1) (C1, D4, E1) (A1, A3, A4) (A3, C1, D3) |
| 78 | 7 | (A2, C2, D3) (C2, D2, D3) (C2, D1, D4) (C2, D1, E1) (A3, C1, C2) (A3, D4) (A3, E1) |
| 79 | 4 | (A1, D3, D4) (A4, D3, D4) (A1, D3, E1) (A4, D3, E1) |
| 80 | 6 | (A1, C2, D4) (A4, C2, D4) (A1, C2, E1) (A4, C2, E1) (C3, D1) (D1, E2) |
| 81 | 4 | (A2, D2, D4) (A2, D2, E1) (A2, A3, D1) (A3, D1, D2) |
| 82 | 4 | (A1, C3) (A4, C3) (A1, E2) (A4, E2) |
| 83 | 4 | (A1, A2, A3) (A2, A3, A4) (A1, A3, D2) (A3, A4, D2) |
| 85 | 8 | (A2, D3, D4) (D2, D3, D4) (A2, D3, E1) (D2, D3, E1) (D1, D4, E1) (A3, D1, D3) (A3, C1, D4) (A3, C1, E1) |
| 86 | 5 | (A2, C2, D4) (C2, D2, D4) (A2, C2, E1) (C2, D2, E1) (A3, C2, D1) |
| 87 | 6 | (A1, D4, E1) (A4, D4, E1) (A1, A3, D3) (A3, A4, D3) (C1, C3, D1) (C1, D1, E2) |
| 88 | 6 | (A1, A3, C2) (A3, A4, C2) (A2, C3) (C3, D2) (A2, E2) (D2, E2) |
| 89 | 5 | (A2, A3, D2) (A1, C1, C3) (A4, C1, C3) (A1, C1, E2) (A4, C1, E2) |
| 90 | 2 | (C2, D3, D4) (C2, D3, E1) |
| 92 | 2 | (C3, D3) (D3, E2) |
| 93 | 8 | (A2, D4, E1) (D2, D4, E1) (A2, A3, D3) (A3, D2, D3) (A3, D1, D4) (A3, D1, E1) (C2, C3) (C2, E2) |
| 94 | 2 | (A2, A3, C2) (A3, C2, D2) |
| 95 | 8 | (A1, A3, D4) (A3, A4, D4) (A1, A3, E1) (A3, A4, E1) (A2, C1, C3) (C1, C3, D2) (A2, C1, E2) (C1, D2, E2) |
| 97 | 5 | (D3, D4, E1) (A1, C3, D1) (A4, C3, D1) (A1, D1, E2) (A4, D1, E2) |
| 98 | 2 | (C2, D4, E1) (A3, C2, D3) |
| 99 | 4 | (A1, A4, C3) (C1, C3, D3) (A1, A4, E2) (C1, D3, E2) |
| 100 | 7 | (C1, C2, C3) (C3, D4) (C3, E1) (C1, C2, E2) (D4, E2) (E1, E2) (B1) |
| 101 | 4 | (A2, A3, D4) (A3, D2, D4) (A2, A3, E1) (A3, D2, E1) |
| 103 | 4 | (A2, C3, D1) (C3, D1, D2) (A2, D1, E2) (D1, D2, E2) |
| 105 | 10 | (A3, D3, D4) (A3, D3, E1) (A1, A2, C3) (A2, A4, C3) (A1, C3, D2) (A4, C3, D2) (A1, A2, E2) (A2, A4, E2) (A1, D2, E2) (A4, D2, E2) |
| 106 | 2 | (A3, C2, D4) (A3, C2, E1) |
| 107 | 7 | (C3, D1, D3) (C1, C3, D4) (C1, C3, E1) (D1, D3, E2) (C1, D4, E2) (C1, E1, E2) (B1, C1) |
| 108 | 4 | (C2, C3, D1) (A3, C3) (C2, D1, E2) (A3, E2) |
| 109 | 4 | (A1, C3, D3) (A4, C3, D3) (A1, D3, E2) (A4, D3, E2) |
| 110 | 4 | (A1, C2, C3) (A4, C2, C3) (A1, C2, E2) (A4, C2, E2) |
| 111 | 2 | (A2, C3, D2) (A2, D2, E2) |
| 115 | 11 | (A2, C3, D3) (C3, D2, D3) (C3, D1, D4) (C3, D1, E1) (A3, C1, C3) (A2, D3, E2) (D2, D3, E2) (D1, D4, E2) (D1, E1, E2) (A3, C1, E2) (B1, D1) |
| 116 | 4 | (A2, C2, C3) (C2, C3, D2) (A2, C2, E2) (C2, D2, E2) |
| 117 | 10 | (A1, C3, D4) (A4, C3, D4) (A1, C3, E1) (A4, C3, E1) (A1, D4, E2) (A4, D4, E2) (A1, E1, E2) (A4, E1, E2) (A1, B1) (A4, B1) |
| 120 | 2 | (C2, C3, D3) (C2, D3, E2) |
| 123 | 12 | (A2, C3, D4) (C3, D2, D4) (A2, C3, E1) (C3, D2, E1) (A3, C3, D1) (A2, D4, E2) (D2, D4, E2) (A2, E1, E2) (D2, E1, E2) (A3, D1, E2) (A2, B1) (B1, D2) |
| 124 | 2 | (A1, B1, C1) (A4, B1, C1) |
| 125 | 4 | (A1, A3, C3) (A3, A4, C3) (A1, A3, E2) (A3, A4, E2) |
| 127 | 5 | (C3, D3, D4) (C3, D3, E1) (D3, D4, E2) (D3, E1, E2) (B1, D3) |
| 128 | 5 | (C2, C3, D4) (C2, C3, E1) (C2, D4, E2) (C2, E1, E2) (B1, C2) |
| 130 | 3 | (C3, E2) (A2, B1, C1) (B1, C1, D2) |
| 131 | 4 | (A2, A3, C3) (A3, C3, D2) (A2, A3, E2) (A3, D2, E2) |
| 132 | 2 | (A1, B1, D1) (A4, B1, D1) |
| 134 | 2 | (A1, A4, B1) (B1, C1, D3) |
| 135 | 7 | (C3, D4, E1) (A3, C3, D3) (D4, E1, E2) (A3, D3, E2) (B1, C1, C2) (B1, D4) (B1, E1) |
| 136 | 2 | (A3, C2, C3) (A3, C2, E2) |
| 138 | 2 | (A2, B1, D1) (B1, D1, D2) |
| 140 | 4 | (A1, A2, B1) (A2, A4, B1) (A1, B1, D2) (A4, B1, D2) |
| 142 | 3 | (B1, D1, D3) (B1, C1, D4) (B1, C1, E1) |
| 143 | 6 | (A3, C3, D4) (A3, C3, E1) (A3, D4, E2) (A3, E1, E2) (B1, C2, D1) (A3, B1) |
| 144 | 2 | (A1, B1, D3) (A4, B1, D3) |
| 145 | 3 | (C3, D1, E2) (A1, B1, C2) (A4, B1, C2) |
| 147 | 2 | (A1, C3, E2) (A4, C3, E2) |
| 150 | 5 | (A2, B1, D3) (B1, D2, D3) (B1, D1, D4) (B1, D1, E1) (A3, B1, C1) |
| 151 | 2 | (A2, B1, C2) (B1, C2, D2) |
| 152 | 4 | (A1, B1, D4) (A4, B1, D4) (A1, B1, E1) (A4, B1, E1) |
| 153 | 2 | (A2, C3, E2) (C3, D2, E2) |
| 158 | 6 | (C2, C3, E2) (A2, B1, D4) (B1, D2, D4) (A2, B1, E1) (B1, D2, E1) (A3, B1, D1) |
| 160 | 2 | (A1, A3, B1) (A3, A4, B1) |
| 162 | 2 | (B1, D3, D4) (B1, D3, E1) |
| 163 | 2 | (B1, C2, D4) (B1, C2, E1) |
| 165 | 4 | (C3, D4, E2) (C3, E1, E2) (B1, C3) (B1, E2) |
| 166 | 2 | (A2, A3, B1) (A3, B1, D2) |
| 170 | 2 | (B1, D4, E1) (A3, B1, D3) |
| 172 | 2 | (B1, C1, C3) (B1, C1, E2) |
| 178 | 2 | (A3, B1, D4) (A3, B1, E1) |
| 180 | 2 | (B1, C3, D1) (B1, D1, E2) |
| 182 | 4 | (A1, B1, C3) (A4, B1, C3) (A1, B1, E2) (A4, B1, E2) |
| 188 | 4 | (A2, B1, C3) (B1, C3, D2) (A2, B1, E2) (B1, D2, E2) |
| 192 | 2 | (B1, C3, D3) (B1, D3, E2) |
| 193 | 2 | (B1, C2, C3) (B1, C2, E2) |
| 200 | 4 | (B1, C3, D4) (B1, C3, E1) (B1, D4, E2) (B1, E1, E2) |
| 208 | 2 | (A3, B1, C3) (A3, B1, E2) |

<!-- scores end -->
