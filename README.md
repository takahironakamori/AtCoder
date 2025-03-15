# AtCoder 提出コード管理リポジトリ

このリポジトリは、AtCoderの提出コードを管理し、苦手な問題の分析や復習に活用するためのものです。

## リポジトリのディレクトリ構成
```
contest_info.json #コンテストの各問題のデータ
contest_results.json #コンテスト成績のデータ
contest_submissions.json #各問題の提出に関するデータ
/submissions/
│   ├── abc/
│   │   ├── abc300/
|   │   │   ├── a/
│   │   │   │   └── 1234571.cpp # 提出データ
|   │   │   ├── b/
│   │   │   │   ├── 1234573.cpp # 提出データ
```

## リポジトリ内のjsonのフォーマット

### contest_results.json

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

- contest_id : コンテストの略称
- url : コンテストのウェブページURL
- rank : 順位
- participants : 参加者数
- score : 得点
- performance : パフォーマンス
- contest_time : コンテストの日時
- wa_count : WAの回数
- tle_count : TLEの回数
- new_rating : 更新後のレート
- comment : 感想

### meta.json

```json
{
  "abc300_a": {"difficulty": 200, "tags": ["math", "implementation"]},
  "abc300_b": {"difficulty": 400, "tags": ["greedy"]},
  "abc300_c": {"difficulty": 600, "tags": ["dp"]}
}
```

- difficulty : 難易度。AtCoder Problemsから引用。
- tags : 問題のカテゴリ

### submission.json

```json
[
  {
    "submission_id": 1234571,
    "problem_id": "abc300_a",
    "result": "AC",
    "execution_time": 58,
    "submission_time": "2024-03-14T12:40:05Z",
    "start_time": "2024-03-14T12:30:00Z", 
    "comment": ""
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

- submission_id : 提出ファイルのid（AtCoderのurlから引用）
- problem_id : コンテストの略称_問題
- result : 提出結果(AC, WA, TLE, REなど)
- execution_time : 実行時間
- submission_time : 提出日時
- stati_time : 開始日時
- comment : コメント

#### コメント

コメントは、特にACできなかった理由を書く。

【例】

- 問題が理解できなかった
- 解法が思いつかなかった
- 実装ができなかった
- 実装が間に合わなかった
