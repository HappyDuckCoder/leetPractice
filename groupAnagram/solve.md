# SOLUTION INSTRUCTION 

## REFFERENCE
https://leetcode.com/problems/group-anagrams/

## IDEA 
bài cơ bản về sử dụng map 
nếu là anagram tức là khi sort lại thì bằng nhau, map[key].push_back(s) là ta có đáp án

## SOLVING 

```
for (string& s : strs) {
    string key = s;
    sort(key.begin(), key.end());
    ans[key].push_back(s);
}
```



