void test3(){
    int op;
    do{
        GameFile gf = get_gFile();
        if(gf.valid_check())   // 验证游戏合规性
            gf.save();  // 保存游戏数据
        else    report(gf); //  输出不合规提示

        printf("输入0终止测试\n");
        scanf("%d", &op);
    } while (op)
}