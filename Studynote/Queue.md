## 定義
一種遵循先進先出 (FIFO - First In First Out) 原則的線性資料結構。
## 主要操作
- Enqueue：將元素加入佇列後端 (Rear)。
- Dequeue：將佇列前端 (Front) 的元素移除。
- Front / Peek：查看佇列前端的元素但不移除。
## 時間複雜度
- Enqueue / Dequeue / Front：皆為 O(1)。
## 應用場景
- 廣度優先搜尋 (BFS)
- 印表機緩衝區 (Buffer)
- 作業系統的任務排程
