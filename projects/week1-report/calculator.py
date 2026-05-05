# 简单计算器：支持加、减、乘、除运算

# 提示用户输入第一个数字，并获取输入内容
num1_str = input("请输入第一个数字：")
# 将字符串类型的数字转换为浮点数，方便后续计算
num1 = float(num1_str)

# 提示用户输入第二个数字，并获取输入内容
num2_str = input("请输入第二个数字：")
# 同样转换为浮点数
num2 = float(num2_str)

# 提示用户输入运算符，只允许 +、-、*、/ 四种
operator = input("请输入运算符（+、-、*、/）：")

# 判断运算符类型，执行对应的运算
if operator == "+":
    # 加法运算
    result = num1 + num2
    # 输出计算结果
    print(f"计算结果：{num1} + {num2} = {result}")
elif operator == "-":
    # 减法运算
    result = num1 - num2
    print(f"计算结果：{num1} - {num2} = {result}")
elif operator == "*":
    # 乘法运算
    result = num1 * num2
    print(f"计算结果：{num1} * {num2} = {result}")
elif operator == "/":
    # 除法运算前先检查除数是否为零
    if num2 == 0:
        # 除数为零时给出错误提示
        print("错误：除数不能为零！")
    else:
        # 除数不为零时正常计算
        result = num1 / num2
        print(f"计算结果：{num1} / {num2} = {result}")
else:
    # 运算符不合法时给出提示
    print("错误：无效的运算符，请只输入 +、-、*、/ 中的一个！")