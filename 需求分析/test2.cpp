void test2(){
    int op;
    do{
        Download_Permisson per = get_permission();  // 获得游戏下载许可
        confirm_down(per);   // 确认下载许可

        Server_List lis = get_sList();  // 获取服务器列表
        Server ser = select_server(lis);

        Game game = per.gget(); // 获取当前要下载的游戏
        GameData gd = ser.search(game); // 检索整理游戏数据
        ser.download(gd);   // 流式传输游戏数据

        printf("输入0终止测试\n");
        scanf("%d", &op);
    } while (op)
}