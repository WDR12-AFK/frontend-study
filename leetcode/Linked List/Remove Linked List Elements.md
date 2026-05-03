# 每日学习记录

## 📅 2026-05-03（第0周）

### 今天学了什么
- 删除链表元素

### AI 使用记录


### 遇到的问题
while (walk) {
            if (!walk->next)
                break;
            if (walk->next->val == val) {
                walk->next = walk->next->next;

            }
            else
				walk = walk->next;
            

        }
		return guard->next;
    }
while 里面的不是每次都walk = walk->next; 当==val就不用走了  因为已经把后面那个删除了  再后面那个是一个新的


### 怎么解决的
查AI解决  

### 明天要做什么
