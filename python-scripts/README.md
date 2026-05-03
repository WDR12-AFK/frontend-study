# Python 脚本练习

5 月 Python 学习目标：能写基础脚本、处理文件/JSON、调用 HTTP API、调用 LLM API。

## 5月练习计划

| 周次 | 内容 | 脚本 |
|------|------|------|
| 第1周 | 变量/循环/条件判断 | 计算器、字符串处理、列表筛选 |
| 第2周 | 函数/文件读写/JSON | 读取配置文件并做数据筛选 |
| 第3周 | pip/requests 库 | 调用公开 API 并解析返回数据 |
| 第4周 | LLM API 调用 | 调用 OpenAI/Anthropic API 完成一次对话 |

## 运行方式

```bash
pip install requests openai anthropic
python script_name.py
```

## 注意

- 每个脚本在文件头注释写清楚：做什么、输入什么、输出什么
- API 密钥不要硬编码在脚本里，用环境变量或 `.env` 文件
- `.env` 文件不要提交到 GitHub（已在 .gitignore 中）
