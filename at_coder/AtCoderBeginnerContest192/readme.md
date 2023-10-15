# 解答状況

| A   | B   | C   |
| --- | --- | --- |
| ○   | -   | -   |

# 各問題

## A

- https://atcoder.jp/contests/abc192/tasks/abc192_a

## B

- https://atcoder.jp/contests/abc192/tasks/abc192_b

### 考えたこと

- まずは、各文字が大文字、小文字か判定する処理が必要
  - isupper 関数を使えばできる
- すべての奇数番目が小文字、すべての偶数番目が大文字になっているかをどう判定するか
  - increment という変数を int 定義しておいて、loop の中で各奇数、偶数番目の文字で それぞれ小文字、大文字であった場合 increment++ をしてあげる
  - そうすると、「すべて」という条件を満たしていれば increment は 文字列 s の長さと一致し、満たしていない場合は文字列 s の文字数と increment が一致しないことになる
