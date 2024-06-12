
void test(){
    int op;
    do{
        printf("请输入用户请求");
        scanf("%s", &req);
        if(is_purchase(req)){   // 检测请求是否为购买请求
            printf("请输入外部支付记录");
            scanf("%s", &pay);  // 检测外部支付记录是否有效
            if(is_valid(pay))
                inventory(gget_req(req));   // 游戏入库
            else report(pay);   // 输出错误信息
        }
        else {  // 说明是游戏下载请求
            Game game = gget_req(req);  // 获取当前游戏
            if(check_inv(game)){    // 检索玩家库存是否拥有该游戏
                Subs subs = check_subs(game);   // 检索玩家的社区订阅内容
                gen_permission(game, subs);     // 生成下载许可信息
            }
            else
                wrong_info(game);    // 输入游戏为拥有提示
        }

        printf("输入0终止测试\n");
        scanf("%d", &op);
    } while (op)
}