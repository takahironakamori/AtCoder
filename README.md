# AtCoder 提出コード管理リポジトリ

このリポジトリは、AtCoderの提出コードを管理し、苦手な問題の分析や復習に活用するためのものです。

## ディレクトリ構成

```
/submissions/
│   ├── contest_results.json #コンテスト成績のデータ
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

### `contest_results.json`

```json
[
  {
    "contest_id": "abc300",
    "url": "https://atcoder.jp/contests/abc300",
    "rank": 1250,
    "participants": 5500,
    "score": 800,
    "performance": 1200,
    "contest_time": "2024-03-14T12:00:00Z",
    "wa_count": 3,
    "tle_count": 1,
    "new_rating": 1345,
    "comment": "A問題が難しかった"
  },
  {
    "contest_id": "abc301",
    "url": "https://atcoder.jp/contests/abc301",
    "rank": 950,
    "participants": 5500,
    "score": 1000,
    "performance": 1400,
    "contest_time": "2024-03-21T12:00:00Z",
    "wa_count": 0,
    "tle_count": 0,
    "new_rating": 1345,
    "comment": "A問題が難しかった"
  }
]
```

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
AC出なかった場合、以下を参考に感想になぜACできなかったのかを書く。

- 問題が理解できなかった
- 解法が思いつかなかった
- 実装ができなかった
- 実装が間に合わなかった

```json
[
  {
    "submission_id": 1234571,                  // 提出id
    "problem_id": "abc300_a",                  // 対象の問題（コンテスト名_問題）
    "result": "AC",                            // 提出結果
    "execution_time": 58,                      // 実行時間
    "submission_time": "2024-03-14T12:40:05Z", // 提出日時
    "start_time": "2024-03-14T12:30:00Z",      // 開始日時
    "comment": ""                              // 感想など
  },
  {
    "submission_id": 1234573,
    "problem_id": "abc300_b",
    "result": "WA",
    "execution_time": 0,
    "submission_time": "2024-03-14T12:20:05Z",
    "start_time": "2024-03-14T12:10:00Z",
    "comment": "問題が理解できなかった"
  }
]
```
