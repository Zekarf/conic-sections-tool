#include <stdio.h>
#include <math.h>

int main(void)
{
    int main_menu_choice, yuan_menu_choice, tuoyuan_menu_choice, shuangquxian_menu_choice, paowuxian_menu_choice;
    int main_menu = 1;
    while (main_menu == 1)
    {
        printf("圆锥曲线小工具\n");
        printf("1.圆\n");
        printf("2.椭圆\n");
        printf("3.双曲线\n");
        printf("4.抛物线\n");
        printf("5.圆锥曲线的第二定义\n");
        printf("6.退出\n");
        scanf("%d", &main_menu_choice);

        switch (main_menu_choice)
        {
        case 1:
        {
            int yuan_menu = 1;
            while (yuan_menu == 1)
            {
                printf("已选中“圆”\n");
                printf("你希望的操作：\n");
                printf("1.圆的定义和方程\n");
                printf("2.计算周长\n");
                printf("3.计算面积\n");
                printf("4.阿波罗尼斯圆（阿氏圆）\n");
                printf("5.返回上一级\n");
                scanf("%d", &yuan_menu_choice);

                switch (yuan_menu_choice)
                {
                case 1:
                {

                    printf("定义：平面上到定点（圆心C）的距离等于定长（半径r）的点的集合叫做圆.\n");
                    printf("圆的标准方程：(x-a)²+(y-b)²=r²,(r>0)  其中圆心C(a,b),半径为r\n");
                    printf("圆的一般方程：x²+y²+Dx+Ey+F=0,(D²+E²-4F>0)  其中圆心C(-D/2,-E/2),半径r=√(D²+E²-4F)/2\n");
                    int yuan_menu_function_choice;
                    int yuan_menu_function = 1;
                    while (yuan_menu_function == 1)
                    {
                        printf("你希望操作（对于方程）：\n");
                        printf("1.生成圆的标准方程\n");
                        printf("2.计算标准方程的圆心C和半径r\n");
                        printf("3.标准方程→一般方程\n");
                        printf("4.一般方程→标准方程\n");
                        printf("5.返回上一级\n");
                        scanf("%d", &yuan_menu_function_choice);

                        switch (yuan_menu_function_choice)
                        {
                        case 1:
                        {
                            double a, b, r;
                            printf("请分别输入该圆的圆心坐标和半径（a b r）：\n");
                            scanf("%lf %lf %lf", &a, &b, &r);
                            while (r <= 0)
                            {
                                printf("不符合条件r>0，重新输入r吧\n");
                                scanf("%lf", &r);
                            }
                            printf("该圆的标准方程为：(x-%g)²+(y-%g)²=%g²\n", a, b, r);
                            break;
                        }
                        case 2:
                        {
                            double D, E, F;
                            printf("请分别输入该圆的D E F：\n");
                            scanf("%lf %lf %lf", &D, &E, &F);
                            do
                            {
                                printf("不符合条件D²+E²-4F>0，再重新输入一次D E F吧\n");
                                scanf("%lf %lf %lf", &D, &E, &F);
                            } while (pow(D, 2) + pow(E, 2) - 4 * F <= 0);
                            double a, b, r;
                            a = -D / 2;
                            b = -E / 2;
                            r = sqrt(pow(D, 2) + pow(E, 2) - 4 * F) / 2;
                            printf("圆心C为(%g,%g)，半径r为%g\n", a, b, r);
                            break;
                        }
                        case 3:
                        {
                            double a, b, r;
                            printf("请分别输入该圆的圆心坐标和半径（a b r）：\n");
                            scanf("%lf %lf %lf", &a, &b, &r);
                            while (r <= 0)
                            {
                                printf("不符合条件r>0，重新输入r吧\n");
                                scanf("%lf", &r);
                            }
                            double D, E, F;
                            D = -2 * a;
                            E = -2 * b;
                            F = pow(a, 2) + pow(b, 2) - pow(r, 2);
                            printf("该圆的一般方程为：x²+y²+%gx+%gy+%g=0\n", D, E, F);
                            break;
                        }
                        case 4:
                        {
                            double D, E, F;
                            printf("请分别输入该圆的D E F：\n");
                            scanf("%lf %lf %lf", &D, &E, &F);
                            do
                            {
                                printf("不符合条件D²+E²-4F>0，再重新输入一次D E F吧\n");
                                scanf("%lf %lf %lf", &D, &E, &F);
                            } while (pow(D, 2) + pow(E, 2) - 4 * F <= 0);
                            double a, b, r;
                            a = -D / 2;
                            b = -E / 2;
                            r = sqrt(pow(D, 2) + pow(E, 2) - 4 * F) / 2;
                            printf("该圆的标准方程为：(x-a)²+(y-b)²=r²\n", a, b, r);
                            break;
                        }
                        case 5:
                        {
                            yuan_menu_function = 0;
                            break;
                        }
                        default:
                        {
                            printf("无效操作\n");
                            break;
                        }
                        }
                    }
                    break;
                }
                case 2:
                {
                    double r, C;
                    printf("请输入圆的半径r：");
                    scanf("%lf", &r);
                    C = 2 * r; //*π
                    printf("圆周长公式：C = 2πr");
                    printf("圆的周长为%gπ\n", C);
                    break;
                }
                case 3:
                {
                    double r, S;
                    printf("请输入圆的半径r：");
                    scanf("%lf", &r);
                    S = pow(r, 2); //*π
                    printf("圆面积公式：S = πr²");
                    printf("圆的面积为%gπ\n", S);
                    break;
                }
                case 4:
                {
                    double λ, a;
                    printf("“阿波罗尼斯圆（阿氏圆）”的定义：平面内到两个定点A(-a,0),B(a,0)(a>0)的距离之比为正数λ(λ≠1)的点的轨迹是以C((λ²+1)/(λ²-1)*a,0)为圆心，|2aλ/(λ²-1)|为半径的圆，即为阿波罗尼斯圆\n");
                    printf("请输入a和λ：");
                    scanf("%lf"
                          "%lf",
                          &a, &λ);
                    while (a <= 0 || λ == 1)
                    {
                        printf("a>0且λ≠1，请重新输入a和λ：");
                        scanf("%lf"
                              "%lf",
                              &a, &λ);
                    }
                    double yuanxin, r;
                    yuanxin = (pow(λ, 2) + 1) / (pow(λ, 2) - 1) * a;
                    printf("圆心C为(%g,0)，", yuanxin);
                    r = 2 * a * λ / (pow(λ, 2) - 1);
                    if (r < 0)
                    {
                        r = -r;
                        printf("半径r为%g\n", r);
                    }
                    else
                    {
                        printf("半径r为%g\n", r);
                    }
                    break;
                }
                case 5:
                {
                    yuan_menu = 0;
                    break;
                }
                default:
                {
                    printf("无效操作\n");
                    break;
                }
                }
            }
            break;
        }
        case 2:
        {
            int tuoyuan_menu = 1;
            while (tuoyuan_menu == 1)
            {
                printf("已选中“椭圆”\n");
                printf("你希望的操作：\n");
                printf("1.椭圆的定义和标准方程\n");
                printf("2.椭圆的几何性质\n");
                printf("3.点与椭圆的位置关系\n");
                printf("4.直线与椭圆的位置关系\n");
                printf("5.椭圆中点弦斜率公式\n");
                printf("6.椭圆弦长公式\n");
                printf("7.返回上一级\n");
                scanf("%d", &tuoyuan_menu_choice);
                switch (tuoyuan_menu_choice)
                {
                case 1:
                {
                    printf("把平面内两个定点F₁,F₂的距离的和等于常数2a（大于|F₁F₂|）的点的轨迹叫做椭圆.这两个定点叫做椭圆的焦点，两焦点间的距离叫做椭圆的焦距.\n");
                    printf("椭圆的标准方程：\n");
                    printf("焦点在x轴上：x²/a²+y²/b²=1,(a>b>0)\n");
                    printf("焦点在y轴上：y²/a²+x²/b²=1,(a>b>0)\n");
                    printf("椭圆的一般方程：\n");
                    printf("mx²+ny²=1,(m>0,n>0,m≠n)\n");
                    printf("离心率e=c/a=√[1-(b²/a²)] (0<e<1)\n");
                    printf("对称轴：x轴,y轴  对称中心：(0,0)\n");
                    printf("a,b,c的关系：a²=b²+c²\n");
                    printf("焦点三角形\n");
                    printf("周长：2a+2c  面积：设∠F₁PF₂=θ,S=b²tan(θ/2)\n");
                    break;
                }
                case 2:
                {

                    int tuoyuan_zhou = 0;
                    int tuoyuan_zhou_choice;
                    while (tuoyuan_zhou == 0)
                    {
                        printf("这个椭圆的焦点在：1.x轴，2.y轴（请输入单个数字：1或2）\n");
                        scanf("%d", &tuoyuan_zhou_choice);
                        if (tuoyuan_zhou_choice == 1 || tuoyuan_zhou_choice == 2)
                        {
                            tuoyuan_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2）\n");
                        }
                    }

                    double a, b, c, e;
                    printf("请分别输入这个椭圆的a b\n");
                    scanf("%lf %lf", &a, &b);
                    while (a < 0 || b < 0 || a <= b)
                    {
                        printf("不满足条件a>b>0，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                    }
                    c = sqrt(pow(a, 2) - pow(b, 2));
                    e = c / a;
                    while (e <= 0 || e > 1)
                    {
                        printf("不满足条件0<e<1，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                        c = sqrt(pow(a, 2) - pow(b, 2));
                        e = c / a;
                    }

                    switch (tuoyuan_zhou_choice)
                    {
                    case 1:
                    {
                        printf("标准方程：x²/%g²+y²/%g²=1  范围：|x|<=%g,|y|<=%g\n", a, b, a, b);
                        printf("顶点：A₁(-%g,0) A₂(%g,0) B₁(0,-%g) B₂(0,%g)\n", a, a, b, b);
                        printf("焦点：F₁(-%g,0) F₂(%g,0)  焦距：|F₁F₂|=%g\n", c, c, 2 * c);
                        printf("短轴长：%g  长轴长：%g\n", 2 * b, 2 * a);
                        printf("离心率e=%g (0<e<1)\n", e);
                        break;
                    }
                    case 2:
                    {
                        printf("标准方程：y²/%g²+x²/%g²=1  范围：|x|<=%g,|y|<=%g\n", a, b, b, a);
                        printf("顶点：A₁(0,-%g) A₂(0,%g) B₁(-%g,0) B₂(%g,0)\n", a, a, b, b);
                        printf("焦点：F₁(0,-%g) F₂(0,%g)  焦距：|F₁F₂|=%g\n", c, c, 2 * c);
                        printf("短轴长：%g  长轴长：%g\n", 2 * b, 2 * a);
                        printf("离心率e=%g (0<e<1)\n", e);
                        break;
                    }
                    default:
                    {
                        printf("无效操作\n");
                        break;
                    }
                    }
                    printf("e→1越扁,e→0越圆,圆的离心率为0\n");
                    break;
                }
                case 3:
                {
                    int tuoyuan_zhou = 0;
                    int tuoyuan_zhou_choice;
                    while (tuoyuan_zhou == 0)
                    {
                        printf("这个椭圆的焦点在：1.x轴，2.y轴（请输入单个数字：1或2）\n");
                        scanf("%d", &tuoyuan_zhou_choice);
                        if (tuoyuan_zhou_choice == 1 || tuoyuan_zhou_choice == 2)
                        {
                            tuoyuan_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2）\n");
                        }
                    }

                    double a, b, x0, y0;
                    printf("求点P(x₀,y₀)与椭圆的位置关系\n");
                    printf("请分别输入这个椭圆的a,b和点的x₀,y₀：\n");
                    scanf("%lf %lf %lf %lf", &a, &b, &x0, &y0);
                    while (a < 0 || b < 0 || a <= b)
                    {
                        printf("不满足条件a>b>0，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                    }
                    double c, e;
                    c = sqrt(pow(a, 2) - pow(b, 2));
                    e = c / a;
                    while (e <= 0 || e > 1)
                    {
                        printf("不满足条件0<e<1，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                        c = sqrt(pow(a, 2) - pow(b, 2));
                        e = c / a;
                    }

                    double result;
                    switch (tuoyuan_zhou)
                    {
                    case 1:
                    {
                        result = pow(x0, 2) / pow(a, 2) + pow(y0, 2) / pow(b, 2);
                        if (result > 1)
                        {
                            printf("P在椭圆外\n");
                        }
                        else if (result == 1)
                        {
                            printf("P在椭圆上\n");
                        }
                        else
                        {
                            printf("P在椭圆内\n");
                        }
                        break;
                    }
                    case 2:
                    {
                        result = pow(x0, 2) / pow(b, 2) + pow(y0, 2) / pow(a, 2);
                        if (result > 1)
                        {
                            printf("P在椭圆外\n");
                        }
                        else if (result == 1)
                        {
                            printf("P在椭圆上\n");
                        }
                        else
                        {
                            printf("P在椭圆内\n");
                        }
                        break;
                    }
                    default:
                    {
                        break;
                    }
                    }
                    break;
                }
                case 4:
                {
                    double A, B, C;
                    printf("设直线l的方程为：Ax+By+C=0，请分别输入A B C\n");
                    scanf("%lf %lf %lf", &A, &B, &C);

                    int tuoyuan_zhou = 0;
                    int tuoyuan_zhou_choice;
                    while (tuoyuan_zhou == 0)
                    {
                        printf("这个椭圆的焦点在：1.x轴，2.y轴（请输入单个数字：1或2）\n");
                        scanf("%d", &tuoyuan_zhou_choice);
                        if (tuoyuan_zhou_choice == 1 || tuoyuan_zhou_choice == 2)
                        {
                            tuoyuan_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2）\n");
                        }
                    }

                    double a, b, c, e;
                    printf("请分别输入这个椭圆的a b\n");
                    scanf("%lf %lf", &a, &b);
                    while (a < 0 || b < 0 || a <= b)
                    {
                        printf("不满足条件a>b>0，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                    }
                    c = sqrt(pow(a, 2) - pow(b, 2));
                    e = c / a;
                    while (e <= 0 || e > 1)
                    {
                        printf("不满足条件0<e<1，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                        c = sqrt(pow(a, 2) - pow(b, 2));
                        e = c / a;
                    }

                    switch (tuoyuan_zhou)
                    {
                    case 1:
                    {
                        if (B == 0)
                        {
                            double x0;
                            x0 = -C / A;
                            if (x0 < -a || x0 > a)
                            {
                                printf("直线l与椭圆相离，无交点\n");
                            }
                            else if (fabs(x0 + a) < 1e-12 || fabs(x0 - a) < 1e-12) // AI：如果误差小于0.000000000001，我们就认为它们是“相等”的。
                            {
                                printf("直线l与椭圆相切，只有一个交点（切点）\n");
                            }
                            else
                            {
                                printf("直线l与椭圆相交，有两个交点\n");
                            }
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(A, 2) / (pow(B, 2) * pow(b, 2)) + 1 / pow(a, 2);
                            B_1 = 2 * A * C / (pow(B, 2) * pow(b, 2));
                            C_1 = pow(C, 2) / (pow(B, 2) * pow(b, 2)) - 1;
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (Δ > 0)
                            {
                                printf("直线l与椭圆相交，有两个交点\n");
                            }
                            else if (fabs(Δ) < 1e-12)
                            {
                                printf("直线l与椭圆相切，只有一个交点（切点）\n");
                            }
                            else
                            {
                                printf("直线l与椭圆相离，无交点\n");
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        if (B == 0)
                        {
                            double x0;
                            x0 = -C / A;
                            if (x0 < -b || x0 > b)
                            {
                                printf("直线l与椭圆相离，无交点\n");
                            }
                            else if (fabs(x0 + b) < 1e-12 || fabs(x0 - b) < 1e-12) // AI：如果误差小于0.000000000001，我们就认为它们是“相等”的。
                            {
                                printf("直线l与椭圆相切，只有一个交点（切点）\n");
                            }
                            else
                            {
                                printf("直线l与椭圆相交，有两个交点\n");
                            }
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(A, 2) / (pow(B, 2) * pow(a, 2)) + 1 / pow(b, 2);
                            B_1 = 2 * A * C / (pow(B, 2) * pow(a, 2));
                            C_1 = pow(C, 2) / (pow(B, 2) * pow(a, 2)) - 1;
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (Δ > 0)
                            {
                                printf("直线l与椭圆相交，有两个交点\n");
                            }
                            else if (fabs(Δ) < 1e-12)
                            {
                                printf("直线l与椭圆相切，只有一个交点（切点）\n");
                            }
                            else
                            {
                                printf("直线l与椭圆相离，无交点\n");
                            }
                        }

                        break;
                    }
                    default:
                    {
                        break;
                    }
                    }
                    break;
                }
                case 5:
                {
                    printf("设直线l与椭圆的交点分别为A,B，M为A,B中点，O为原点，直线l的斜率为k_l，过OM所在直线的斜率为k_OM\n");
                    printf("当椭圆的焦点在x轴上时，即x²/a²+y²/b²=1,(a>b>0)，则有：k_l*k_OM=-b²/a²\n");
                    printf("当椭圆的焦点在y轴上时，即y²/a²+x²/b²=1,(a>b>0)，则有：k_l*k_OM=-a²/b²\n");
                    printf("统一格式：x²/m+y²/n=1,(m>0,n>0,m≠n)，此时有：k_l*k_OM=-n/m\n");
                    break;
                }
                case 6:
                {
                    printf("设直线l：y=kx+b与椭圆：x²/m+y²/n=1,(m>0,n>0,m≠n)的两个交点分别为A(x₁,y₁)B(x₂,y₂)，两方程联立消y后得方程：px²+qx+r=0 (x₁+x₂=-q/p,x₁x₂=r/p)\n");
                    printf("弦长公式：|AB|=√(1+k²)*√((x₁+x₂)²-4x₁x₂)=√(1+k²)*√Δ/|p|\n");
                    printf("注意：本模块使用一般方程 mx²+ny²=1（m>0,n>0,m≠n），与标准方程的转换关系为：\n");
                    printf("焦点在x轴：m=1/a², n=1/b²；焦点在y轴：m=1/b², n=1/a²\n");

                    double k, b;
                    printf("请分别输入这条直线l：y=kx+b的斜率k 截距b\n");
                    scanf("%lf %lf", &k, &b);

                    double m, n;
                    printf("请分别输入这个椭圆：x²/m+y²/n=1,(m>0,n>0,m≠n)的m n\n");
                    scanf("%lf %lf", &m, &n);
                    while (!(m > 0 && n > 0 && fabs(m - n) > 1e-12))
                    {
                        printf("不满足条件m>0,n>0,m≠n，请再输入一次m n\n");
                        scanf("%lf %lf", &m, &n);
                    }

                    double p, q, r, result;
                    p = 1 / m + pow(k, 2) / n;
                    q = 2 * k * b / n;
                    r = pow(b, 2) / n - 1;
                    result = sqrt(1 + pow(k, 2)) * sqrt(pow(-q / p, 2) - 4 * r / p);
                    printf("弦长|AB|=%g\n", result);
                    break;
                }
                case 7:
                {
                    tuoyuan_menu = 0;
                    break;
                }
                default:
                {
                    printf("无效操作\n");
                    break;
                }
                }
            }
            break;
        }
        case 3:
        {
            int shuangquxian_menu = 1;
            while (shuangquxian_menu == 1)
            {
                printf("已选中“双曲线”\n");
                printf("你希望的操作：\n");
                printf("1.双曲线的定义\n");
                printf("2.双曲线的标准方程和几何性质\n");
                printf("3.直线与双曲线的位置关系\n");
                printf("4.双曲线中点弦斜率公式\n");
                printf("5.双曲线弦长公式\n");
                printf("6.返回上一级\n");
                scanf("%d", &shuangquxian_menu_choice);
                switch (shuangquxian_menu_choice)
                {
                case 1:
                {
                    printf("把平面内两个定点F₁,F₂的距离的差的绝对值等于非零常数2a（小于|F₁F₂|）的点的轨迹叫做双曲线（||MF₁|-|MF₂||=2a(0<2a<|F₁F₂|=2c)）.这两个定点叫做双曲线的焦点，两焦点间的距离叫做双曲线的焦距.\n");
                    printf("双曲线的标准方程：\n");
                    printf("焦点在x轴上：x²/a²-y²/b²=1,(a>0,b>0)\n");
                    printf("焦点在y轴上：y²/a²-x²/b²=1,(a>0,b>0)\n");
                    printf("双曲线的一般方程：\n");
                    printf("mx²+ny²=1,(mn<0)\n");
                    printf("离心率e=c/a=√[1+(b²/a²)] (e>1)\n");
                    printf("对称轴：x轴,y轴  对称中心：(0,0)\n");
                    printf("a,b,c的关系：c²=a²+b²(c>a>0,c>b>0)\n");
                    break;
                }
                case 2:
                {
                    int shuangquxian_zhou = 0;
                    int shuangquxian_zhou_choice;
                    while (shuangquxian_zhou == 0)
                    {
                        printf("这个双曲线的焦点在：1.x轴，2.y轴（请输入单个数字：1或2）\n");
                        scanf("%d", &shuangquxian_zhou_choice);
                        if (shuangquxian_zhou_choice == 1 || shuangquxian_zhou_choice == 2)
                        {
                            shuangquxian_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2）\n");
                        }
                    }

                    double a, b, c, e;
                    printf("请分别输入这个双曲线的a b\n");
                    scanf("%lf %lf", &a, &b);
                    while (a <= 0 || b <= 0)
                    {
                        printf("不满足条件a>0,b>0，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                    }
                    c = sqrt(pow(a, 2) + pow(b, 2));
                    e = c / a;
                    while (e <= 1)
                    {
                        printf("不满足条件e>1，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                        c = sqrt(pow(a, 2) + pow(b, 2));
                        e = c / a;
                    }

                    switch (shuangquxian_zhou_choice)
                    {
                    case 1:
                    {
                        printf("标准方程：x²/%g²-y²/%g²=1  范围：x<=%g或x>=%g,y∈R\n", a, b, -a, a);
                        printf("顶点：A₁(-%g,0) A₂(%g,0)\n", a, a);
                        printf("焦点：F₁(-%g,0) F₂(%g,0)  焦距：|F₁F₂|=%g\n", c, c, 2 * c);
                        printf("实轴：线段A₁A₂ 实轴长：%g  虚轴：线段B₁B₂ 虚轴长：%g  实半轴长：%g  虚半轴长：%g \n", 2 * a, 2 * b, a, b);
                        printf("渐近线：y=±(b/a)x\n");
                        printf("离心率e=%g (e>1)\n", e);
                        break;
                    }
                    case 2:
                    {
                        printf("标准方程：y²/%g²-x²/%g²=1  范围：y<=%g或y>=%g,x∈R\n", a, b, -a, a);
                        printf("顶点：A₁(0,-%g) A₂(0,%g)\n", a, a);
                        printf("焦点：F₁(0,-%g) F₂(0,%g)  焦距：|F₁F₂|=%g\n", c, c, 2 * c);
                        printf("实轴：线段A₁A₂ 实轴长：%g  虚轴：线段B₁B₂ 虚轴长：%g  实半轴长：%g  虚半轴长：%g \n", 2 * a, 2 * b, a, b);
                        printf("渐近线：y=±(a/b)x\n");
                        printf("离心率e=%g (e>1)\n", e);
                        break;
                    }
                    default:
                    {
                        printf("无效操作\n");
                        break;
                    }
                    }
                    break;
                }
                case 3:
                {
                    double k, m;
                    printf("设直线l的方程为：y=kx+m，请分别输入k m\n");
                    scanf("%lf %lf", &k, &m);

                    int shuangquxian_zhou = 0;
                    int shuangquxian_zhou_choice;
                    while (shuangquxian_zhou == 0)
                    {
                        printf("这个双曲线的焦点在：1.x轴，2.y轴（请输入单个数字：1或2）\n");
                        scanf("%d", &shuangquxian_zhou_choice);
                        if (shuangquxian_zhou_choice == 1 || shuangquxian_zhou_choice == 2)
                        {
                            shuangquxian_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2）\n");
                        }
                    }

                    double a, b, c, e;
                    printf("请分别输入这个双曲线的a b\n");
                    scanf("%lf %lf", &a, &b);
                    while (a <= 0 || b <= 0)
                    {
                        printf("不满足条件a>0,b>0，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                    }
                    c = sqrt(pow(a, 2) + pow(b, 2));
                    e = c / a;
                    while (e <= 1)
                    {
                        printf("不满足条件e>1，请再输入一次a b\n");
                        scanf("%lf %lf", &a, &b);
                        c = sqrt(pow(a, 2) + pow(b, 2));
                        e = c / a;
                    }

                    switch (shuangquxian_zhou)
                    {
                    case 1:
                    {
                        if (k == 0)
                        {
                            printf("直线l与双曲线相交，有两个交点\n");
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(b, 2) - pow(a, 2) * pow(k, 2);
                            B_1 = -2 * pow(a, 2) * k * m;
                            C_1 = -(pow(a, 2) * pow(m, 2) + pow(a, 2) * pow(b, 2));
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (fabs(A_1) < 1e-12)
                            {
                                printf("直线l与双曲线相交，只有一个交点且与渐近线平行\n");
                            }
                            else
                            {
                                if (Δ > 0)
                                {
                                    printf("直线l与双曲线相交，有2个交点\n");
                                }
                                else if (fabs(Δ) < 1e-12)
                                {
                                    printf("直线l与双曲线相切，只有1个交点（切点）\n");
                                }
                                else
                                {
                                    printf("直线l与双曲线相离，无交点\n");
                                }
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        if (k == 0)
                        {
                            if (m < -a || m > a)
                            {
                                printf("直线l与双曲线相交，有两个交点\n");
                            }
                            else if (m == -a || m == a)
                            {
                                printf("直线l与双曲线相切，只有一个交点\n");
                            }
                            else
                            {
                                printf("直线l与双曲线相离，无交点\n");
                            }
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(k, 2) * pow(b, 2) - pow(a, 2);
                            B_1 = 2 * pow(b, 2) * k * m;
                            C_1 = pow(b, 2) * pow(m, 2) - pow(a, 2) * pow(b, 2);
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (fabs(A_1) < 1e-12)
                            {
                                printf("直线l与双曲线相交，只有一个交点且与渐近线平行\n");
                            }
                            else
                            {
                                if (Δ > 0)
                                {
                                    printf("直线l与双曲线相交，有2个交点\n");
                                }
                                else if (fabs(Δ) < 1e-12)
                                {
                                    printf("直线l与双曲线相切，只有1个交点（切点）\n");
                                }
                                else
                                {
                                    printf("直线l与双曲线相离，无交点\n");
                                }
                            }
                        }
                        break;
                    }
                    default:
                    {
                        break;
                    }
                    }

                    break;
                }
                case 4:
                {
                    printf("设直线l与双曲线的交点分别为A,B，M为A,B中点，O为原点，直线l的斜率为k_l，过OM所在直线的斜率为k_OM\n");
                    printf("当双曲线的焦点在x轴上时，即x²/a²-y²/b²=1,(a>0,b>0)，则有：k_l*k_OM=b²/a²\n");
                    printf("当双曲线的焦点在y轴上时，即y²/a²-x²/b²=1,(a>0,b>0)，则有：k_l*k_OM=a²/b²\n");
                    printf("统一格式：mx²+ny²=1,(mn<0)，此时有：k_l*k_OM=-m/n\n");
                    break;
                }
                case 5:
                {
                    printf("设直线l：y=kx+b与双曲线：mx²+ny²=1,(mn<0)的两个交点分别为A(x₁,y₁)B(x₂,y₂)，两方程联立消y后得方程：px²+qx+r=0 (x₁+x₂=-q/p,x₁x₂=r/p)\n");
                    printf("弦长公式：|AB|=√(1+k²)*√((x₁+x₂)²-4x₁x₂)=√(1+k²)*√Δ/|p|\n");
                    printf("注意：本模块使用一般方程 mx²+ny²=1（mn<0），与标准方程的转换关系为：\n");
                    printf("焦点在x轴：m=1/a², n=-1/b²；焦点在y轴：m=-1/a², n=1/b²\n");
                    double k, b;
                    printf("请分别输入这条直线l：y=kx+b的斜率k 截距b\n");
                    scanf("%lf %lf", &k, &b);
                    double m, n;
                    printf("请分别输入这个双曲线：mx²+ny²=1,(mn<0)的m n\n");
                    scanf("%lf %lf", &m, &n);
                    while (m * n >= 0)
                    {
                        printf("不满足条件mn<0，请再输入一次m n\n");
                        scanf("%lf %lf", &m, &n);
                    }
                    double p, q, r, result;
                    p = m + pow(k, 2) * n;
                    q = 2 * k * b * n;
                    r = pow(b, 2) * n - 1;
                    if (fabs(p) < 1e-12)
                    {
                        printf("直线与渐近线平行，弦长为0（或不存在）\n");
                    }
                    else
                    {
                        result = sqrt(1 + pow(k, 2)) * sqrt(pow(-q / p, 2) - 4 * r / p);
                        printf("弦长|AB|=%g\n", result);
                    }
                    break;
                }
                case 6:
                {
                    shuangquxian_menu = 0;
                    break;
                }
                default:
                {
                    printf("无效操作\n");
                    break;
                }
                }
            }
            break;
        }
        case 4:
        {
            int paowuxian_menu = 1;
            while (paowuxian_menu == 1)
            {
                printf("已选中“抛物线”\n");
                printf("你希望的操作：\n");
                printf("1.抛物线的定义\n");
                printf("2.抛物线的标准方程和几何性质\n");
                printf("3.直线与抛物线的位置关系\n");
                printf("4.抛物线中点弦斜率公式\n");
                printf("5.抛物线弦长公式\n");
                printf("6.返回上一级\n");
                scanf("%d", &paowuxian_menu_choice);
                switch (paowuxian_menu_choice)
                {
                case 1:
                {
                    printf("把平面内一个定点F和一条定直线l(l不经过点F)的距离相等的点的轨迹叫做抛物线.点F叫做抛物线的焦点，直线l叫做抛物线的准线.\n");
                    printf("抛物线的标准方程：\n");
                    printf("焦点在x正半轴上：y²=2px(p>0)\n");
                    printf("焦点在x负半轴上：y²=-2px(p>0)\n");
                    printf("焦点在y正半轴上：x²=2py(p>0)\n");
                    printf("焦点在y负半轴上：x²=-2py(p>0)\n");
                    printf("离心率e=1\n");
                    printf("焦半径：抛物线上一点到焦点F的距离.\n");
                    printf("焦点弦：抛物线上两个不相互重合且所在直线过焦点的两点之间的距离.\n");
                    printf("通径：最短焦点弦=2p");
                    break;
                }
                case 2:
                {
                    printf("设抛物线上两个不相互重合且所在直线过焦点的两点分别为M(x₁,y₁),N(x₂,y₂)\n");
                    int paowuxian_zhou = 0;
                    int paowuxian_zhou_choice;
                    while (paowuxian_zhou == 0)
                    {
                        printf("这个抛物线的焦点在：1.x正半轴，2.x负半轴，3.y正半轴，4.y负半轴？（请输入单个数字：1或2或3或4）\n");
                        scanf("%d", &paowuxian_zhou_choice);
                        if (paowuxian_zhou_choice == 1 || paowuxian_zhou_choice == 2 || paowuxian_zhou_choice == 3 || paowuxian_zhou_choice == 4)
                        {
                            paowuxian_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2或3或4）\n");
                        }
                    }

                    double p;
                    printf("请输入这个抛物线的p\n");
                    scanf("%lf", &p);
                    while (p <= 0)
                    {
                        printf("不满足条件p>0，请再输入一次p\n");
                        scanf("%lf", &p);
                    }

                    switch (paowuxian_zhou_choice)
                    {
                    case 1:
                    {
                        printf("标准方程：y²=%gx(p>0)  范围：x>=0,y∈R\n", 2 * p);
                        printf("顶点：O(0,0)\n");
                        printf("焦点：F(%g,0)  焦准距：%g\n", p / 2, p);
                        printf("准线：x=-%g\n", p / 2);
                        printf("对称轴：x轴\n");
                        printf("焦半径（以M为例）：x₁+p/2=x₁+%g\n", p / 2);
                        printf("焦点弦：x₁+x₂+p=x₁+x₂+%g\n", p);
                        break;
                    }
                    case 2:
                    {
                        printf("标准方程：y²=%gx(p>0)  范围：x<=0,y∈R\n", -2 * p);
                        printf("顶点：O(0,0)\n");
                        printf("焦点：F(-%g,0)  焦准距：%g\n", p / 2, p);
                        printf("准线：x=%g\n", p / 2);
                        printf("对称轴：x轴\n");
                        printf("焦半径（以M为例）：-x₁+p/2=-x₁+%g\n", p / 2);
                        printf("焦点弦：-(x₁+x₂)+p=-(x₁+x₂)+%g\n", p);
                        break;
                    }
                    case 3:
                    {
                        printf("标准方程：x²=%gy(p>0)  范围：x∈R,y>=0\n", 2 * p);
                        printf("顶点：O(0,0)\n");
                        printf("焦点：F(0,%g)  焦准距：%g\n", p / 2, p);
                        printf("准线：y=-%g\n", p / 2);
                        printf("对称轴：y轴\n");
                        printf("焦半径（以M为例）：y₁+p/2=y₁+%g\n", p / 2);
                        printf("焦点弦：y₁+y₂+p=y₁+y₂+%g\n", p);
                        break;
                    }
                    case 4:
                    {
                        printf("标准方程：x²=%gy(p>0)  范围：x∈R,y<=0\n", -2 * p);
                        printf("顶点：O(0,0)\n");
                        printf("焦点：F(0,-%g)  焦准距：%g\n", p / 2, p);
                        printf("准线：y=%g\n", p / 2);
                        printf("对称轴：y轴\n");
                        printf("焦半径（以M为例）：-y₁+p/2=-y₁+%g\n", p / 2);
                        printf("焦点弦：-(y₁+y₂)+p=-(y₁+y₂)+%g\n", p);
                        break;
                    }
                    default:
                    {
                        printf("无效操作\n");
                        break;
                    }
                    }
                    break;
                }
                case 3:
                {
                    double A, B, C;
                    printf("设直线l的方程为：Ax+By+C=0，请分别输入A B C\n");
                    scanf("%lf %lf %lf", &A, &B, &C);

                    int paowuxian_zhou = 0;
                    int paowuxian_zhou_choice;
                    while (paowuxian_zhou == 0)
                    {
                        printf("选择抛物线类型（1或2或3或4）：\n");
                        printf("1.y²=2px(p>0)\n");
                        printf("2.y²=-2px(p>0)\n");
                        printf("3.x²=2py(p>0)\n");
                        printf("4.x²=-2py(p>0)\n");
                        scanf("%d", &paowuxian_zhou_choice);
                        if (paowuxian_zhou_choice == 1 || paowuxian_zhou_choice == 2 || paowuxian_zhou_choice == 3 || paowuxian_zhou_choice == 4)
                        {
                            paowuxian_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2或3或4）\n");
                        }
                    }

                    double p;
                    printf("请输入这个抛物线的p\n");
                    scanf("%lf", &p);
                    while (p <= 0)
                    {
                        printf("不满足条件p>0，请再输入一次p\n");
                        scanf("%lf", &p);
                    }

                    switch (paowuxian_zhou)
                    {
                    case 1:
                    {
                        if (B == 0)
                        {
                            if (-C / A < 0)
                            {
                                printf("直线l与抛物线相离，无交点\n");
                            }
                            else if (-C / A == 0)
                            {
                                printf("直线l与抛物线相切，只有一个交点（切点）\n");
                            }
                            else
                            {
                                printf("直线l与抛物线相交，有两个交点\n");
                            }
                        }
                        else if (fabs(-A / B) < 1e-12)
                        {
                            printf("直线l与抛物线相交，有一个交点\n");
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(A, 2) / pow(B, 2);
                            B_1 = 2 * A * C / pow(B, 2) - 2 * p;
                            C_1 = pow(C, 2) / pow(B, 2);
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (fabs(A_1) < 1e-12)
                            {
                                printf("直线l与抛物线相交，只有一个交点\n");
                            }
                            else
                            {
                                if (Δ > 0)
                                {
                                    printf("直线l与抛物线相交，有2个交点\n");
                                }
                                else if (fabs(Δ) < 1e-12)
                                {
                                    printf("直线l与抛物线相切，有1个交点（切点）\n");
                                }
                                else
                                {
                                    printf("直线l与抛物线相离，无交点\n");
                                }
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        if (B == 0)
                        {
                            if (-C / A > 0)
                            {
                                printf("直线l与抛物线相离，无交点\n");
                            }
                            else if (-C / A == 0)
                            {
                                printf("直线l与抛物线相切，只有一个交点（切点）\n");
                            }
                            else
                            {
                                printf("直线l与抛物线相交，有两个交点\n");
                            }
                        }
                        else if (fabs(-A / B) < 1e-12)
                        {
                            printf("直线l与抛物线相交，有一个交点\n");
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(A, 2) / pow(B, 2);
                            B_1 = 2 * A * C / pow(B, 2) + 2 * p;
                            C_1 = pow(C, 2) / pow(B, 2);
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (fabs(A_1) < 1e-12)
                            {
                                printf("直线l与抛物线相交，只有一个交点\n");
                            }
                            else
                            {
                                if (Δ > 0)
                                {
                                    printf("直线l与抛物线相交，有2个交点\n");
                                }
                                else if (fabs(Δ) < 1e-12)
                                {
                                    printf("直线l与抛物线相切，有1个交点（切点）\n");
                                }
                                else
                                {
                                    printf("直线l与抛物线相离，无交点\n");
                                }
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        if (B == 0)
                        {
                            printf("直线l与抛物线相交，有一个交点\n");
                        }
                        else if (fabs(A) < 1e-12)
                        {
                            printf("直线l与抛物线相交，有两个交点\n");
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(B, 2) / pow(A, 2);
                            B_1 = 2 * B * C / pow(A, 2) - 2 * p;
                            C_1 = pow(C, 2) / pow(A, 2);
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (fabs(A_1) < 1e-12)
                            {
                                printf("直线l与抛物线相交，只有一个交点\n");
                            }
                            else
                            {
                                if (Δ > 0)
                                {
                                    printf("直线l与抛物线相交，有2个交点\n");
                                }
                                else if (fabs(Δ) < 1e-12)
                                {
                                    printf("直线l与抛物线相切，有1个交点（切点）\n");
                                }
                                else
                                {
                                    printf("直线l与抛物线相离，无交点\n");
                                }
                            }
                        }
                        break;
                    }
                    case 4:
                    {
                        if (B == 0)
                        {
                            printf("直线l与抛物线相交，有一个交点\n");
                        }
                        else if (fabs(A) < 1e-12)
                        {
                            printf("直线l与抛物线相交，有两个交点\n");
                        }
                        else
                        {
                            double A_1, B_1, C_1, Δ;
                            A_1 = pow(B, 2) / pow(A, 2);
                            B_1 = 2 * B * C / pow(A, 2) + 2 * p;
                            C_1 = pow(C, 2) / pow(A, 2);
                            Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                            if (fabs(A_1) < 1e-12)
                            {
                                printf("直线l与抛物线相交，只有一个交点\n");
                            }
                            else
                            {
                                if (Δ > 0)
                                {
                                    printf("直线l与抛物线相交，有2个交点\n");
                                }
                                else if (fabs(Δ) < 1e-12)
                                {
                                    printf("直线l与抛物线相切，有1个交点（切点）\n");
                                }
                                else
                                {
                                    printf("直线l与抛物线相离，无交点\n");
                                }
                            }
                        }
                        break;
                    }
                    default:
                    {
                        break;
                    }
                    }
                    break;
                }
                case 4:
                {
                    printf("设直线l与抛物线的交点分别为A(x₁,y₁),B(x₂,y₂)，M(x₀​,y₀​)为A,B中点，O为原点，直线l的斜率为k_l（过A,B的直线不与x轴垂直，即斜率存在）\n");
                    printf("当抛物线的焦点在x正半轴上时，即y²=2px(p>0)，则有：k_l=p/y₀\n");
                    printf("当抛物线的焦点在x负半轴上时，即y²=-2px(p>0)，则有：k_l=-p/y₀\n");
                    printf("当抛物线的焦点在y正半轴上时，即x²=2py(p>0)，则有：k_l=x₀/p\n");
                    printf("当抛物线的焦点在y负半轴上时，即x²=-2py(p>0)，则有：k_l=-x₀/p\n");
                }
                case 5:
                {
                    printf("设直线l：y=kx+b与抛物线的两个不重合交点分别为A(x₁,y₁)B(x₂,y₂)\n");
                    printf("弦长公式：|AB|=√(1+k²)*√((x₁+x₂)²-4x₁x₂)=√(1+k²)*√Δ/|p|\n");

                    double k, b;
                    printf("设直线l的方程为：y=kx+b，请分别输入k b\n");
                    scanf("%lf %lf", &k, &b);

                    int paowuxian_zhou = 0;
                    int paowuxian_zhou_choice;
                    while (paowuxian_zhou == 0)
                    {
                        printf("选择抛物线类型（1或2或3或4）：\n");
                        printf("1.y²=2px(p>0)\n");
                        printf("2.y²=-2px(p>0)\n");
                        printf("3.x²=2py(p>0)\n");
                        printf("4.x²=-2py(p>0)\n");
                        scanf("%d", &paowuxian_zhou_choice);
                        if (paowuxian_zhou_choice == 1 || paowuxian_zhou_choice == 2 || paowuxian_zhou_choice == 3 || paowuxian_zhou_choice == 4)
                        {
                            paowuxian_zhou = 1;
                        }
                        else
                        {
                            printf("操作无效，请重新输入（1或2或3或4）\n");
                        }
                    }

                    double p;
                    printf("请输入这个抛物线的p\n");
                    scanf("%lf", &p);
                    while (p <= 0)
                    {
                        printf("不满足条件p>0，请再输入一次p\n");
                        scanf("%lf", &p);
                    }

                    double A_1, B_1, C_1, Δ, result;
                    switch (paowuxian_zhou)
                    {
                    case 1:
                    {
                        A_1 = pow(k, 2);
                        B_1 = 2 * k * b - 2 * p;
                        C_1 = pow(b, 2);
                        break;
                    }
                    case 2:
                    {
                        A_1 = pow(k, 2);
                        B_1 = 2 * k * b + 2 * p;
                        C_1 = pow(b, 2);
                        break;
                    }
                    case 3:
                    {
                        A_1 = 1;
                        B_1 = -2 * k * p;
                        C_1 = -2 * p * b;
                        break;
                    }
                    case 4:
                    {
                        A_1 = 1;
                        B_1 = 2 * k * p;
                        C_1 = 2 * p * b;
                        break;
                    }
                    default:
                    {
                        break;
                    }
                    }
                    if (fabs(A_1) < 1e-12)
                    {
                        printf("直线与抛物线只有一个交点，弦长为0\n");
                    }
                    else
                    {
                        Δ = pow(B_1, 2) - 4 * A_1 * C_1;
                        if (Δ < 0)
                        {
                            printf("直线与抛物线无交点，弦长不存在\n");
                        }
                        else
                        {
                            result = sqrt(1 + pow(k, 2)) * sqrt(Δ) / fabs(A_1);
                            printf("弦长|AB|=%g\n", result);
                        }
                    }
                    break;
                }
                case 6:
                {
                    paowuxian_menu = 0;
                    break;
                }
                default:
                {
                    printf("无效操作\n");
                    break;
                }
                }
            }
            break;
        }
        case 5:
        {
            printf("圆锥曲线的第二定义————平面内一动点到一定点（焦点F）的距离和它到一条定直线l（准线）（不过F）的距离之比为常数e.\n");
            printf("统一定义：\n");
            printf("(1)当0<e<1时，轨迹为椭圆.\n");
            printf("(2)当e=1时，轨迹为抛物线.\n");
            printf("(3)当e>1时，轨迹为双曲线.\n");
            printf("①左焦点对应左准线，右焦点对应右准线.\n");
            printf("②焦点在x轴上的椭圆（双曲线）的准线方程为x=± a²/c.\n");
            printf("③通径：2b²/a（椭圆，双曲线）/ 2p（抛物线）  离心率e=c/a\n");
            break;
        }
        case 6:
        {
            main_menu = 0;
            break;
        }
        default:
        {
            printf("无效操作\n");
            break;
        }
        }
    }
    return 0;
}