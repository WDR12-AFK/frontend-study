# 2026 前端 + AI 求职学习仓库

## 学习目标

本仓库用于记录 2026 年 5 月起的完整学习过程，最终目标是成为"前端 + AI Agent 复合工程师"。5 月具体目标：

1. 掌握 HTML / CSS 基础，熟悉 Flex 和 Grid 布局；
2. 完成响应式个人主页 + 安全设备巡检筛选系统（JavaScript 项目）；
3. 掌握 JavaScript 基础语法和 DOM 操作；
4. 掌握 Python 基础语法，能写脚本处理文件和调用 API；
5. 完成一次 LLM API 调用（Python 脚本调用 OpenAI/Anthropic）；
6. 养成 Cursor/Claude Code 驱动编码的工作流：写 → AI 审 → 改 → AI 查 → 重写；
7. 养成 GitHub 每日提交、AI 使用记录、面试问答积累的习惯。

## 5 月学习安排

### 第 0 周：启动准备（5.2-5.3）

- 配置开发环境（VS Code / Cursor + Node.js + Git + Python）；
- 创建 GitHub 仓库，建立学习目录结构；
- 建立 AI 辅助学习记录模板；
- 熟悉 Cursor/Claude Code 基本操作。

### 第 1 周：HTML/CSS 基础 + Flex 布局 + Python 入门（5.4-5.10）

目标：完成个人主页基础结构和样式；Python 能写变量/循环/条件判断。

### 第 2 周：Grid 布局 + 响应式 + Python 函数/文件（5.11-5.17）

目标：完善个人主页三端适配；Python 能读写文件和解析 JSON。

### 第 3 周：JavaScript 基础 + DOM 操作 + Python 网络请求（5.18-5.24）

目标：给页面增加交互功能（深色模式/筛选/展开）；Python 能用 requests 调 API。

### 第 4 周：JavaScript 小项目 + LLM API 初体验（5.25-5.31）

目标：完成安全设备巡检筛选系统；用 Python 调用一次 LLM API；月度复盘。

## AI 使用方式

- 主力工具：VS Code + GitHub Copilot（或 Cursor IDE）；
- 编码流程：自己写结构和思路 → AI 生成实现 → 逐行理解 → 手动修改 → AI 审查边界情况；
- 原则：不直接复制 AI 生成的完整代码，重点让 AI 帮助解释思路、检查错误、优化结构；
- 记录：每次重要交互写入 `notes/ai-review/`，记录"我的代码 → AI 建议 → 我采纳了什么 → 为什么"。

## Python 学习

Python 是 AI Agent 生态的主语言（LangChain/FastAPI/RAG 都在 Python 端），5 月目标是入门：

- 第1周：变量、循环、条件判断
- 第2周：函数、文件读写、JSON 处理
- 第3周：pip 安装库、requests 调 API
- 第4周：调用 LLM API（OpenAI/Anthropic）

所有练习脚本放在 `python-scripts/` 目录下。

## 本月最终交付物

1. 响应式个人主页；
2. 安全设备巡检筛选系统（JS 项目）；
3. 至少 4 份 AI 代码审查记录（含对比栏）；
4. 至少 4 个可运行的 Python 脚本（含 1 个 LLM API 调用脚本）；
5. 至少 18 道 LeetCode 题 + 题解笔记；
6. 至少 10 个前端基础面试问答；
7. 5 月学习复盘。