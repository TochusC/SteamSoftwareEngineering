void test4(){
    int op;
    do{
        CommnunityContent cc = get_cFile(); // 输入测评
        if(cc.judge)   // 审核测评
            cc.upload();  // 上传至社区
        else    info(cc); //  输出审核未通过

        printf("输入0终止测试\n");
        scanf("%d", &op);
    } while (op)
}