## 相关编译命令

1. 使用 bind

```bash
emcc --bind
```

2. 暴露 malloc 和 free 方法

```bash
emcc -s "EXPORTED_FUNCTIONS=['_malloc','_free']"
```
