# AtCoder 提出コード管理リポジトリ

このリポジトリは、AtCoderの提出コードを管理し、苦手な問題の分析や復習に活用するためのものです。

## ディレクトリ構成

```
/submissions/
│   ├── abc/
│   │   ├── abc300/
|   │   │   ├── meta.json # ABC300の各問題の難易度とタグを記録
|   │   │   ├── submission.json # ABC300の提出履歴データ
|   │   │   ├── a/
│   │   │   │   └── 1234571.cpp # submission_id
|   │   │   ├── b/
│   │   │   │   ├── 1234573.cpp # submission_id
```

## ファイルの説明

### `meta.json`

各コンテストごとの問題の **難易度やタグ（DP, 貪欲法, グラフ など）** を記録。

```json
{
  "abc300_a": {"difficulty": 200, "tags": ["math", "implementation"]},
  "abc300_b": {"difficulty": 400, "tags": ["greedy"]},
  "abc300_c": {"difficulty": 600, "tags": ["dp"]}
}
```

### `submission.json`

各コンテストの 提出履歴（実行時間、結果、提出日時など） を記録。

```json
[
  {
    "submission_id": 1234571,
    "problem_id": "abc300_a",
    "result": "AC",
    "execution_time": 58,
    "submission_time": "2024-03-14T12:40:05Z"
  },
  {
    "submission_id": 1234573,
    "problem_id": "abc300_b",
    "result": "WA",
    "execution_time": 0,
    "submission_time": "2024-03-14T12:20:05Z"
  }
]
```
