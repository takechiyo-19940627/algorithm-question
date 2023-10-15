# 解答状況

| A   | B   | C   |
| --- | --- | --- |
| ○   | ○   | -   |

# 各問題

## A

- https://atcoder.jp/contests/abc219/tasks/abc219_a

## B

- https://atcoder.jp/contests/abc219/tasks/abc219_b

### 考えたこと

- 文字列と数字の対応を作っておき、あとは各数字ごとに対応文字列を取り出し連結する
- 今回の場合、与えられる数字が連結されてしまっているので数字を string として受け取り loop して char として扱うことにした
- そのため、vector. list の添字と文字列を対応させるよりも、map で char と 文字列の対応を作ったほうが簡単に済みそうな気がした
- なので、map で対応表を作っている
