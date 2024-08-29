# ********************  LiusSerailHelper *********************
基于 QtSerialProt 实现的串口调试助手

# 当前版本：V1.0.0

# 功能：
    1.串口数据发送及接收
    2.支持自动换行显示
    3.支持定时发送数据
    4.支持自定义波特率

# 文件结构
    project
        |__serialHelper.pro         --QTCreater项目文件
        |__头文件
            |__camerawindow.h       --摄像头调试窗口
            |__windowgps.h          --GPS调试窗口
            |__windowserial.h       --串口调试助手窗口
            |__winsel.h             --初始选择窗口
        |__源文件
            |__camerawindow.cpp     --摄像头调试窗口
            |__windowgps.cpp        --GPS调试窗口
            |__windowserial.cpp     --串口调试助手窗口
            |__winsel.cpp           --初始选择窗口
        |__界面文件
            |__camerawindow.ui      --摄像头调试窗口ui文件
            |__windowgps.ui         --GPS调试窗口ui文件
            |__windowserial.ui      --串口调试助手窗口ui文件
            |__winsel.ui            --初始选择窗口ui文件
        |__其他文件
            |__readme.txt

# 参与人员
刘禹惜，常露馨，王颢洁

# 存在的问题
1.GPS接口和摄像头接口没有具体功能实现，只设置了接口，后期有时间再完善。

2.这只是个用来应付课设的Demo，没有经过产品测试，可能存在许多Bug，等待后期慢慢优化。
